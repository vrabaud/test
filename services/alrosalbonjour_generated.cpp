/*
* Generated for ALBonjour
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalbonjour_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/albonjourproxy.h>

namespace AL {

void ALRosALBonjour::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALBonjour"))
  {
    return;
  }
  fProxy = ALPtr<ALBonjourProxy> (new ALBonjourProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/declare"), &ALRosALBonjour::declare, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/exit"), &ALRosALBonjour::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/getBrokerName"), &ALRosALBonjour::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/getMethodList"), &ALRosALBonjour::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/getUsage"), &ALRosALBonjour::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/ping"), &ALRosALBonjour::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBonjour/version"), &ALRosALBonjour::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALBonjour::declare(
    rosbridge::ALBonjourDeclare::Request  &req,
    rosbridge::ALBonjourDeclare::Response &res)
{
  try {
    fProxy->declare();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.declare failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBonjour::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBonjour.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalbonjour_cpp.inc"
}
