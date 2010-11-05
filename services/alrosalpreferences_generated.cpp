/*
* Generated for ALPreferences
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalpreferences_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alpreferencesproxy.h>

namespace AL {

void ALRosALPreferences::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALPreferences"))
  {
    return;
  }
  fProxy = ALPtr<ALPreferencesProxy> (new ALPreferencesProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/exit"), &ALRosALPreferences::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/getBrokerName"), &ALRosALPreferences::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/getMethodList"), &ALRosALPreferences::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/getUsage"), &ALRosALPreferences::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/ping"), &ALRosALPreferences::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/version"), &ALRosALPreferences::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALPreferences::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPreferences::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPreferences::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPreferences::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPreferences::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPreferences::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalpreferences_cpp.inc"
}
