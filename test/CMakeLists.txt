
project(rosbridge_tests)
# tests ---
#create_bin(test_say test_say.cpp)
#use_lib(test_say ROS ROSCONSOLE ROSLIB)

#create_bin(test_topics test_topics.cpp)
#use_lib(test_topics ROS ROSCONSOLE ROSLIB)

add_subdirectory("services")
