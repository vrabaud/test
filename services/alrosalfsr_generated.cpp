/*
* Generated for ALFsr
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalfsr_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alfsrproxy.h>

namespace AL {

void ALRosALFsr::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALFsr"))
  {
    return;
  }
  fProxy = ALPtr<ALFsrProxy> (new ALFsrProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/exit"), &ALRosALFsr::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/getBrokerName"), &ALRosALFsr::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/getMethodList"), &ALRosALFsr::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/getUsage"), &ALRosALFsr::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/ping"), &ALRosALFsr::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/version"), &ALRosALFsr::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALFsr::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFsr::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFsr::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFsr::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFsr::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFsr::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFsr.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalfsr_cpp.inc"
}
