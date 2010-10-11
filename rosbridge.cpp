/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#include <iostream>

#include "rosbridge.hpp"

#include <ros/ros.h>
#include <boost/thread.hpp>
#include <alrosnaoqi.h>

RosBridge::RosBridge(AL::ALPtr<AL::ALBroker> pBroker)
  : ALModule(pBroker, "RosBridge")
{
  setModuleDescription("Expose naoqi binded method to ros.");

  // functionName("set",        "DCM", "Call this function to send a timed-command list to an actuator");
  // addParam("commands", "AL::ALValue with all data");
  // BIND_METHOD(DCM::set);

}

RosBridge::~RosBridge()
{
}

std::string RosBridge::version()
{
  return std::string("0.42");
}

void RosBridge::dataChanged(const std::string& pDataName, const AL::ALValue& pValue, const std::string& pMessage)
{
  std::cout << "DataChanged called" << std::endl;
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

  rosnaoqi.bindModules(getParentBroker(), n);

  //ros::ServiceServer service = n.advertiseService("say", say);

  printf("Ready to add two ints.\n");

  ros::spin();
}
