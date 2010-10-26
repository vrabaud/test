#!/bin/sh
##
## generate-gscam.sh
## Login : <ctaf42@localhost.localdomain>
## Started on  Tue Oct 12 15:05:25 2010 Cedric GESTES
## $Id$
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

mkdir dist
mkdir dist/bin
mkdir dist/lib
mkdir dist/config

cat >dist/setup.sh <<EOF
export ROS_ROOT=$(pwd)/ros/
export PATH=$ROS_ROOT/../bin:$PATH
#export PYTHONPATH=$ROS_ROOT/core/roslib/src:$PYTHONPATH

if [ ! "$ROS_MASTER_URI" ] ; then
  export ROS_MASTER_URI=http://localhost:11311 ;
fi

export ROS_PACKAGE_PATH=${ROS_ROOT}/../stacks
export LD_LIBRARY_PATH=${ROS_ROOT}/../lib
#export GSCAM_CONFIG="v4l2src device=/dev/video2 ! video/x-raw-rgb ! ffmpegcolorspace ! identity name=ros ! fakesink"
#export GSCAM_CONFIG="fakesrc is-live=true ! naovideosrc ! ffmpegcolorspace ! identity name=ros ! fakesink"
export GSCAM_CONFIG="fakesrc is-live=true ! ffmpegcolorspace ! video/x-raw-rgb ! identity name=ros ! fakesink"
EOF

insta() {
  srcdir="$1"
  cp -r "$srcdir/bin/"*                   dist/bin/
  cp -r "$srcdir/lib/"*                   dist/lib/

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

insta stacks/image_common/image_transport
insta stacks/common/pluginlib

insta stacks/image_common/camera_calibration_parsers
insta stacks/common/yaml_cpp/yaml-cpp
insta stacks/common_msgs/sensor_msgs

insta stacks/ctaf/gscam

cp ros/config/rosconsole.config                            dist/config/
cp stacks/image_common/image_transport/default_plugins.xml dist


#find . -name lib -d -exec cp '{}/*' dist/lib/ ';'

rsync -avrcz dist nao@10.0.252.152:

#GSCAM_CONFIG="videotestsrc is-live=true  ! ffmpegcolorspace ! video/x-raw-rgb ! identity name=ros ! fakesink" bin/gscam
