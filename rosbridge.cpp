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
#include <alrosgatherer.h>
#include <alrospublisher.h>

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
  AL::ALRosNaoQi     rosNaoqi;
  AL::ALRosGatherer  rosGatherer;
  AL::ALRosPublisher rosPublisher;
  
  printf("Binding NaoQi's Module API for ROS\n");
  rosNaoqi.bindModules(getParentBroker(), n);
  
  printf("Publishing NaoQi's data for ROS\n");
  rosGatherer.init(getParentBroker());
  rosPublisher.init(rosGatherer.getMotorNames(), n);
  
  printf("Ready...\n");
  
  ros::Rate loop_rate(20);
  while (ros::ok()) {
    rosPublisher.publish(rosGatherer.getValues());
    loop_rate.sleep();
    ros::spinOnce();
  }
}
