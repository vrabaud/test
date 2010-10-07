##
## Author(s):
##  - Cedric GESTES      <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010 Aldebaran Robotics
##

project(rosbridge)
cmake_minimum_required(VERSION 2.6.4)
include("bootstrap.cmake")

create_bin(rosbridge main.cpp)
use_lib(rosbridge ALCOMMON ROS)
target_link_libraries(rosbridge log4cxx)
