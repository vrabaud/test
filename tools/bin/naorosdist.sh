#!/bin/sh
##
## Author(s):
##  - Cedric GESTES <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010 Cedric GESTES
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

[ -d ros ] && [ -d stacks ] || exit 1

TOOLSDIR=$(dirname "$(readlink -f $0 2>/dev/null)")/../

rm -rf dist
mkdir dist
mkdir dist/bin
mkdir dist/lib
mkdir -p dist/ros/config

# cat >dist/ros/config/rosconsole.config <<EOF
# log4j.rootLogger=INFO, A1
# log4j.logger.ros=INFO
# log4j.logger.ros.roscpp.superdebug=ERROR

# # A1 is set to be a ConsoleAppender.
# log4j.appender.A1=org.apache.log4j.ConsoleAppender
# # A1 uses PatternLayout.
# log4j.appender.A1.layout=org.apache.log4j.PatternLayout
# log4j.appender.A1.layout.ConversionPattern=\%-4r [\%t] \%-5p \%c \%x - \%m\%n
# EOF

cat >dist/setup.sh <<EOF
export ROS_ROOT=\$(pwd)/ros/
export PATH=\$ROS_ROOT/../bin:\$PATH
#export PYTHONPATH=$ROS_ROOT/core/roslib/src:\$PYTHONPATH

if [ ! "\$ROS_MASTER_URI" ] ; then
  export ROS_MASTER_URI=http://localhost:11311 ;
fi

export ROS_PACKAGE_PATH=\${ROS_ROOT}/../stacks
export LD_LIBRARY_PATH=\${ROS_ROOT}/../lib
#export GSCAM_CONFIG="v4l2src device=/dev/video ! video/x-raw-rgb ! ffmpegcolorspace ! identity name=ros ! fakesink"
export GSCAM_CONFIG="fakesrc is-live=true ! naovideosrc ! ffmpegcolorspace ! video/x-raw-rgb ! identity name=ros ! fakesink"
EOF

insta() {
  srcdir="$1"
  cp -r "$srcdir/bin/"*                   dist/bin/
  cp -r "$srcdir/lib/"*                   dist/lib/
}

insta_full() {
  srcdir="$1"
  insta "$srcdir"

  mkdir -p dist/$srcdir/
  mkdir -p dist/$srcdir/lib
  mkdir -p dist/$srcdir/bin

  cp -r "$srcdir/"*.xml                   dist/$srcdir/
  cp -r "$srcdir/bin/"*                   dist/$srcdir/bin/
  cp -r "$srcdir/lib/"*                   dist/$srcdir/lib/
}

insta ros/3rdparty/xmlrpcpp

insta ros/
insta ros/core/roscpp
insta ros/core/rosconsole
insta ros/core/roslib
insta ros/core/message_filters

insta ros/tools/rosrecord
insta ros/tools/rosbag
insta ros/tools/topic_tools
insta ros/tools/rospack

insta stacks/common/yaml_cpp/yaml-cpp
insta stacks/common_msgs/sensor_msgs
insta stacks/common/pluginlib

insta      stacks/image_common/camera_calibration_parsers
insta_full stacks/image_common/image_transport

insta      stacks/image_transport_plugins/libtheora
insta_full stacks/image_transport_plugins/compressed_image_transport
insta_full stacks/image_transport_plugins/theora_image_transport

insta stacks/geometry/bullet
insta stacks/geometry/tf

insta stacks/brown-ros-pkg/gscam

insta stacks/nao/rosbridge/build/sdk


cp "$TOOLSDIR"/data/rosconsole.config dist/ros/config/rosconsole.config
cp "$TOOLSDIR"/data/control.tar.gz    .
cp "$TOOLSDIR"/data/control.tar.gz    debian-binary
cp "$TOOLSDIR"/data/behavior.xar      dist/

#hack because choregraphe does not like empty files
rm -rf dist/bin/rospack_nosubdirs
rm dist/lib/libyaml-cpp.so
rm dist/lib/libyaml-cpp.so.0.2
mv dist/lib/libyaml-cpp.so.0.2.2 dist/lib/libyaml-cpp.so
