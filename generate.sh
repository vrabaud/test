#!/bin/sh
##
## Author(s):
##  - Cedric GESTES <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010 Aldebaran Robotics
##


#should be called inside a ros env. (for python code generation to works)

generate_src() {
  generate_from_msg
  generate_from_srv
}

generate_from_msg() {
  # Generate Files based on Messages
  PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/roscpp/scripts/genmsg_cpp.py msg/*.msg
  PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/rospy/scripts/genmsg_py.py msg/*.msg
}

generate_from_srv() {
  # Generate Files based on Services
  PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/roscpp/scripts/gensrv_cpp.py srv/*.srv
  ROS_PACKAGE_PATH=$(pwd)
  PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/rospy/scripts/gensrv_py.py srv/*.srv
}

generate_srv() {
  #generate srv/*.srv and impl/*
  PYTHONPATH=../.. python gen_ros.py --out-dir=~/src/aldebaran/rosbridge
}

launch() {
  #start the master
  ROS_MASTER_URI=http://cgestes-de2:11311/ roscore
  #start the bridge (and connect it to naoqi)
  ROS_MASTER_URI=http://cgestes-de2:11311/ ./sdk/bin/rosbridge  --pip 10.0.252.229
  #start the test client
  ROS_MASTER_URI=http://cgestes-de2:11311/ ./sdk/bin/testsay pafdfdf
}

generate_src
