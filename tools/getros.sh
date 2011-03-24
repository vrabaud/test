#!/bin/sh
##
## Author(s):
##  - Cedric GESTES <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010, 2011 Cedric GESTES
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
##

TOOLSDIR=$(dirname "$(readlink -f $0 2>/dev/null)")/

CTC_NAME="nao-cross-toolchain-1.10.25"
CTC_URL="ftp://ananas.aldebaran.lan/v1.10.x/v1.10.25/${CTC_NAME}.tar.gz"


#download ros, rosbridge and gscam
ros_get() {
  dest="$1"
  python $TOOLSDIR/bin/rosinstall --nobuild "$dest" "$TOOLSDIR/data/cturtle_nao.rosinstall"
}

#get the naoqi cross-toolchain
ros_get_ctc() {
  dest="$1"
  pushd $dest
  [ -d ${CTC_NAME} ] && return
  wget "$CTC_URL"
  tar xvzf "${CTC_NAME}.tar.gz"
  popd
}

#configure ros for cross-compilation
ros_patch_cross() {
  dest="$1"
  ctc_dir="$2"
  cat >"$dest/ros/rostoolchain.cmake" <<EOF
#this file is autogenerated
message(STATUS "Ros T001chain")
include("$ctc_dir/toolchain-geode.cmake")
set(SDK_DIRS \${SDK_DIRS} "${dest}")
EOF

  #we provide gtest, dont build it (it's not cross-compiled)
  rm -rf "$dest/ros/3rdparty/gtest/Makefile" || :
  pushd $dest
  patch -N -p0 < "$TOOLSDIR"/patch/rosmake-no-gtest.diff
  patch -N -p0 < "$TOOLSDIR"/patch/tf-no-python.diff
  patch -N -p0 < "$TOOLSDIR"/patch/yaml-cpp-cross-comp.diff
  patch -N -p0 < "$TOOLSDIR"/patch/gscam-cross-comp.diff
  patch -N -p0 < "$TOOLSDIR"/patch/0001-bullet-forward-the-toolchain-file.patch
  cp -r "$TOOLSDIR"/patch/yaml-cpp-cmakelist.patch $dest/stacks/common/yaml_cpp/
  popd
}


#convert the ros checkout to a toolchain sdk compatible with naoqi
ros_t001chainify() {
  dest="$1"
  #generate once... it's so slow
  target=$@
  (
    pushd $dest
    source "./setup.sh"
    [ -f cmake/modules/ROSCPPConfig.cmake ] || "$TOOLSDIR"/bin/generate-t001chain-sdk.sh
    popd
  )
}

#cross-compile ros
ros_compile() {
  dest="$1"
  shift 1
  target=$@
  (
    source "$dest/setup.sh"
    #bullet does not support ccache...
    unset CXX
    unset CC

    rosmake $target
  )
}

#make a dist tarball
ros_dist() {
  dest="$1"
  pushd "$dest"
  "$TOOLSDIR"/bin/naorosdist.sh
    pushd "$dest/dist"
    tar cvzf ../data.tar.gz .
    popd
  rm -rf rosbridge.crg || :
  ar cr rosbridge.crg debian-binary control.tar.gz data.tar.gz
  popd
}


DEST=~/rostest

ros_get "$DEST"
ros_get_ctc "$DEST"
ros_patch_cross "$DEST" "$DEST/$CTC_NAME/"
set -e
ros_compile "$DEST" roscpp
ros_t001chainify "$DEST"
ros_compile "$DEST" rosbridge
#bullet does not work the first time... fix your code
ros_compile "$DEST" rosbridge
ros_compile "$DEST" gscam
ros_dist "$DEST"
