#!/bin/sh
##
## Author(s):
##  - Cedric GESTES <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010 Aldebaran Robotics
##

mkdir -p cmake/modules

#backlist package that could conflict with our build system
backlist() {
  pkg="$1"
  if [ "$pkg" == "GTEST" ] ; then
    return 0
  fi
  if [ "$pkg" == "OGRE" ] ; then
    return 0
  fi
  if [ "$pkg" == "OGRE_TOOLS" ] ; then
    return 0
  fi
  if [ "$pkg" == "XDOT" ] ; then
    return 0
  fi
  if [ "$pkg" == "WXSWIG" ] ; then
    return 0
  fi
  if [ "$pkg" == "WXPYTHON_SWIG_INTERFACE" ] ; then
    return 0
  fi
  if [ "$pkg" == "EIGEN" ] ; then
    return 0
  fi
  if [ "$pkg" == "EIGEN3" ] ; then
    return 0
  fi
  if [ "$pkg" == "VTK" ] ; then
    return 0
  fi
  if [ "$pkg" == "EIGEN_CONVERSIONS" ] ; then
    return 0
  fi
  if [ "$pkg" == "OPENCV2" ] ; then
    return 0
  fi
  if [ "$pkg" == "TINYXML" ] ; then
    return 0
  fi
  if echo $pkg | grep -E "^GAZEBO" >/dev/null 2>/dev/null ; then
    return 0
  fi
  if echo $pkg | grep -E "^TEST_" >/dev/null 2>/dev/null ; then
    return 0
  fi
  if echo $pkg | grep -E "_TUTORIALS$" >/dev/null 2>/dev/null ; then
    return 0
  fi
  return 1
}

generate_t001chain_config() {
  name="$1"
  upname=$(echo $name | tr "[:lower:]" "[:upper:]")

  if backlist $upname ; then
    echo "$upname is backlisted"
    return
  fi

  echo "package:" $upname

  if ! rospack export --lang=cpp --attrib=lflags $name >/dev/null 2>/dev/null; then
    echo "rospack failed (cflags)"
    return
  fi
  if ! rospack export --lang=cpp --attrib=cflags $name >/dev/null 2>/dev/null; then
    echo "rospack failed (lflags)"
    return
  fi
  ros_def=$(rospack cflags-only-other $name | sed "s/^-D//" | sed "s/ -D/;/g" | sed "s/ //g")
  ros_include=$(rospack cflags-only-I $name | sed "s/ \+/;/g")
  ros_dir_targets=$(rospack libs-only-L $name)

  cat > "cmake/modules/${upname}Config.cmake" <<EOF
##
## Copyright (C) 2010 Aldebaran Robotics
##
## Autogenerated by T001chain, Do not edit
clean(${upname})
set(${upname}_INCLUDE_DIR "${ros_include}" CACHE STRING "" FORCE)
set(${upname}_DEFINITIONS "${ros_def}" CACHE STRING "" FORCE)
EOF

  #echo "taf" $ros_targets
  rospack libs-only-l $name | sed "s/ \+/\n/g" | while read tg ; do
    if [ "${ros_dir_targets}" != "" ] ; then
      echo "flib(${upname} ${tg} PATHS ${ros_dir_targets})" >> "cmake/modules/${upname}Config.cmake"
    else
      echo "flib(${upname} ${tg})" >> "cmake/modules/${upname}Config.cmake"
    fi
  done

  cat >> "cmake/modules/${upname}Config.cmake" <<EOF
export_lib(${upname})
EOF

}

generate_root() {
  cat >root.cmake <<EOF
##
## Copyright (C) 2010 Aldebaran Robotics
##
## Autogenerated by T001chain, Do not edit

#get the current directory of the file
get_filename_component(_ROOT_DIR \${CMAKE_CURRENT_LIST_FILE} PATH)

#allow use_lib to find the cmake modules we provide
set(_INTERNAL_SDK_DIRS "\${_ROOT_DIR}/cmake/modules" \${_INTERNAL_SDK_DIRS} CACHE INTERNAL "" FORCE)

add_sdk("\${_ROOT_DIR}" nao-geode linux linux64)

#remove rootdir
set(_ROOT_DIR)
EOF
}


generate_root

if [ $# -ge 1 ] ; then
  while [ $# -ge 1 ] ; do
    generate_t001chain_config $1
    shift
   done
else
  echo "generating all files"
  rospack list-names | while read name ; do
    generate_t001chain_config $name
  done
fi
