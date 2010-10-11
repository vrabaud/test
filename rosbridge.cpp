/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**  - Chris KILNER  <ckilner@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#include <iostream>

#include "rosbridge.hpp"
#include <ros/ros.h>
#include <boost/thread.hpp>
#include <alrosnaoqi_generated.h>

RosBridge::RosBridge(AL::ALPtr<AL::ALBroker> pBroker)
  : ALModule(pBroker, "RosBridge")
{
  setModuleDescription("Exposes NaoQi's bound methods to ROS.");
}

RosBridge::~RosBridge()
{
}

std::string RosBridge::version()
{
  return std::string("0.42");
}

void RosBridge::init(void)
{
  boost::thread *rosThread = new boost::thread(boost::bind(&RosBridge::main, this));
  std::cout << "rosbridge init" << std::endl;
}

void RosBridge::main()
{
  printf("main thread\n");
  ros::M_string remaps;
  ros::init(remaps, "NaoQi");
  ros::NodeHandle n;
  AL::ALRosNaoQi  rosnaoqi;

  printf("Binding Module API's for ROS\n");
  rosnaoqi.bindModules(getParentBroker(), n);
  printf("Ready...\n");

  ros::spin();
}
