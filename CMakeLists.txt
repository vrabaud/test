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

#configure_src_module(albluetooth ${albluetooth_SRCS})
set(ROSBRIDGE_IS_REMOTE ON CACHE BOOL "" FORCE)

include_directories(msg_external)
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

#create_bin(rosbridge rosbridge.hpp rosbridge.cpp rosbridgemain.cpp)

use_lib(rosbridge BOOST_THREAD)
use_lib(rosbridge ALCOMMON ROS ROSCONSOLE ROSLIB)
target_link_libraries(rosbridge log4cxx)

# tests ---
create_bin(test_say test/test_say.cpp)
use_lib(test_say ROS ROSCONSOLE ROSLIB)

create_bin(test_topics test/test_topics.cpp)
use_lib(test_topics ROS ROSCONSOLE ROSLIB)