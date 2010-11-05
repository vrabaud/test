/*
* Generated for ALRobotPose
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalrobotpose_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alrobotposeproxy.h>

namespace AL {

void ALRosALRobotPose::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALRobotPose"))
  {
    return;
  }
  fProxy = ALPtr<ALRobotPoseProxy> (new ALRobotPoseProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/exit"), &ALRosALRobotPose::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getBrokerName"), &ALRosALRobotPose::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getMethodList"), &ALRosALRobotPose::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getUsage"), &ALRosALRobotPose::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/ping"), &ALRosALRobotPose::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/version"), &ALRosALRobotPose::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALRobotPose::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRobotPose::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRobotPose::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRobotPose::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRobotPose::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRobotPose::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}


// non-generated code included
#include "alrosalrobotpose_cpp.inc"
}
