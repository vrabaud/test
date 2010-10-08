##
## Author(s):
##  - Cedric GESTES      <gestes@aldebaran-robotics.com>
##
## Copyright (C) 2010 Aldebaran Robotics
##

project(rosbridge)
cmake_minimum_required(VERSION 2.6.4)
include("bootstrap.cmake")

use(NAOQI-PLUGINS-TOOLS)

create_module(rosbridge)

file(GLOB ROS_SRC impl/*.cpp impl/*.h)
include_directories(srv_gen/cpp/include)
include_directories(impl)

#configure_src_module(albluetooth ${albluetooth_SRCS})
set(ROSBRIDGE_IS_REMOTE ON CACHE BOOL "" FORCE)

configure_src_module(rosbridge rosbridge.hpp rosbridge.cpp rosbridgemain.cpp ${ROS_SRC})
#create_bin(rosbridge rosbridge.hpp rosbridge.cpp rosbridgemain.cpp)

use_lib(rosbridge BOOST_THREAD)
use_lib(rosbridge ALCOMMON ROS ROSCONSOLE ROSLIB)
target_link_libraries(rosbridge log4cxx)


create_bin(testsay test.cpp)
use_lib(testsay ROS ROSCONSOLE ROSLIB)
