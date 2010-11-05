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
#include <alrossubscriber.h>
#include <alcommon/albroker.h>
#include <alcommon/alproxy.h>

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
  boost::thread *rosThread    = new boost::thread(boost::bind(&RosBridge::main, this));
  std::cout << "rosbridge init" << std::endl;
}

void RosBridge::mainPublisher(ros::NodeHandle *n)
{
  printf("Publishing NaoQi's data for ROS\n");

  AL::ALRosGatherer  rosGatherer;
  AL::ALRosPublisher rosPublisher;

  bool isDCMActive = getParentBroker()->isModulePresent("DCM");
  rosGatherer.init(getParentBroker());
  rosPublisher.init(rosGatherer.getMotorNames(), *n, isDCMActive);

  printf("Ready...\n");

  ros::Rate loop_rate(50);
  while (ros::ok()) {
    rosPublisher.publish(rosGatherer.getValues());
    loop_rate.sleep();
  }
}

void RosBridge::main()
{
  printf("RosBridge starting...\n");
  ros::M_string remaps;
  ros::init(remaps, "NaoQi");

  ros::NodeHandle     n;
  AL::ALRosNaoQi      rosNaoqi;
  AL::ALRosSubscriber rosSubscriber;

  printf("Binding NaoQi's API for ROS\n");
  rosNaoqi.bindModules(getParentBroker(), n);
  rosSubscriber.init(getParentBroker(), n);

  //launch the thread now, when we are sure ros is init
  boost::thread *rosPubThread = new boost::thread(boost::bind(&RosBridge::mainPublisher, this, &n));

  printf("Spinning with 30 threads...\n");
  ros::MultiThreadedSpinner multispin(30);
  multispin.spin();
}
