/*
* Generated for DCM
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosdcm_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/dcmproxy.h>

namespace AL {

void ALRosDCM::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("DCM"))
  {
    return;
  }
  fProxy = ALPtr<DCMProxy> (new DCMProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/exit"), &ALRosDCM::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getBrokerName"), &ALRosDCM::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getMethodList"), &ALRosDCM::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getTime"), &ALRosDCM::getTime, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getUsage"), &ALRosDCM::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/ping"), &ALRosDCM::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/special"), &ALRosDCM::special, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/version"), &ALRosDCM::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosDCM::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::getTime(
    rosbridge::DCMGetTime::Request  &req,
    rosbridge::DCMGetTime::Response &res)
{
  try {
    res.value = fProxy->getTime(req.offset);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.getTime failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::special(
    rosbridge::DCMSpecial::Request  &req,
    rosbridge::DCMSpecial::Response &res)
{
  try {
    fProxy->special(req.result);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.special failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosDCM::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("DCM.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosdcm_cpp.inc"
}
