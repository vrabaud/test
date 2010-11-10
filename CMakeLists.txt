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
set(ROSBRIDGE_IS_REMOTE ON CACHE BOOL "" FORCE)

set(ROSBRIDGE_IS_REMOTE ON CACHE BOOL "" FORCE)

set(ROS_ROOT $ENV{ROS_ROOT})
if (NOT ROS_ROOT STREQUAL "")
  #this is the simpliest method I found
  message(STATUS "ROS: generating message")
  execute_process(
    COMMAND sh -c "PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/roscpp/scripts/genmsg_cpp.py msg/*.msg"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
  execute_process(
    COMMAND sh -c "PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/rospy/scripts/genmsg_py.py msg/*.msg"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

  message(STATUS "ROS: generating service")
  execute_process(
    COMMAND sh -c "PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/roscpp/scripts/gensrv_cpp.py srv/*.srv"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
  execute_process(
    COMMAND sh -c "PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/rospy/scripts/gensrv_py.py srv/*.srv"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

  #add_dependencies(${lib} rosbuild_precompile)
endif()

create_module(rosbridge)

#configure_src_module(albluetooth ${albluetooth_SRCS})

include_directories(msg_gen/cpp/include)
include_directories(srv_gen/cpp/include)
include_directories(services)
include_directories(topics)

# File Collections
file(GLOB ROS_SERVICES_SRC services/*.cpp services/*.h)
file(GLOB ROS_TOPICS_SRC topics/*.cpp topics/*.h)

set(ROSBRIDGE_SRC
   rosbridge.hpp
   rosbridge.cpp
   rosbridgemain.cpp
)

# Src groups for windows
SOURCE_GROUP ( services
 FILES
 ${ROS_SERVICES_SRC}
)

SOURCE_GROUP ( topics
 FILES
 ${ROS_TOPICS_SRC}
)

SOURCE_GROUP ( core
 FILES
 ${ROSBRIDGE_SRC}
)

configure_src_module(rosbridge
  ${ROSBRIDGE_SRC}
  ${ROS_SERVICES_SRC}
  ${ROS_TOPICS_SRC})

#set(ROSBRIDGE_IS_REMOTE ON CACHE BOOL "" FORCE)

#create_bin(rosbridge rosbridge.hpp rosbridge.cpp rosbridgemain.cpp)

use_lib(rosbridge BOOST_THREAD)
use_lib(rosbridge ALCOMMON ROSCPP ROSCONSOLE ROSLIB GEOMETRY_MSGS NAV_MSGS SENSOR_MSGS TF )
target_link_libraries(rosbridge log4cxx)

add_subdirectory("test")

