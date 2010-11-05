/*
* Generated for ALPythonBridge
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalpythonbridge_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alpythonbridgeproxy.h>

namespace AL {

void ALRosALPythonBridge::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALPythonBridge"))
  {
    return;
  }
  fProxy = ALPtr<ALPythonBridgeProxy> (new ALPythonBridgeProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/eval"), &ALRosALPythonBridge::eval, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/exit"), &ALRosALPythonBridge::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/getBrokerName"), &ALRosALPythonBridge::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/getMethodList"), &ALRosALPythonBridge::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/getUsage"), &ALRosALPythonBridge::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/ping"), &ALRosALPythonBridge::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/version"), &ALRosALPythonBridge::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALPythonBridge::eval(
    rosbridge::ALPythonBridgeEval::Request  &req,
    rosbridge::ALPythonBridgeEval::Response &res)
{
  try {
    res.value = fProxy->eval(req.stringToEvaluate);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.eval failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALPythonBridge::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalpythonbridge_cpp.inc"
}
