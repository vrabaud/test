/*
* Generated for ALSentinel
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalsentinel_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alsentinelproxy.h>

namespace AL {

void ALRosALSentinel::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALSentinel"))
  {
    return;
  }
  fProxy = ALPtr<ALSentinelProxy> (new ALSentinelProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableBatteryMeasure"), &ALRosALSentinel::enableBatteryMeasure, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableCheckRemainingRam"), &ALRosALSentinel::enableCheckRemainingRam, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableDefaultActionDoubleClick"), &ALRosALSentinel::enableDefaultActionDoubleClick, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableDefaultActionSimpleClick"), &ALRosALSentinel::enableDefaultActionSimpleClick, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableDefaultActionTripleClick"), &ALRosALSentinel::enableDefaultActionTripleClick, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enableHeatMonitoring"), &ALRosALSentinel::enableHeatMonitoring, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/enablePowerMonitoring"), &ALRosALSentinel::enablePowerMonitoring, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/exit"), &ALRosALSentinel::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/exitNaoqi"), &ALRosALSentinel::exitNaoqi, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getBatteryLevel"), &ALRosALSentinel::getBatteryLevel, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getBatteryLevelDesc"), &ALRosALSentinel::getBatteryLevelDesc, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getBrokerName"), &ALRosALSentinel::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getMethodList"), &ALRosALSentinel::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getRemainingRam"), &ALRosALSentinel::getRemainingRam, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getUsage"), &ALRosALSentinel::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/ping"), &ALRosALSentinel::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/presentation"), &ALRosALSentinel::presentation, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/run"), &ALRosALSentinel::run, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/setPowerLimit"), &ALRosALSentinel::setPowerLimit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/version"), &ALRosALSentinel::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALSentinel::enableBatteryMeasure(
    rosbridge::ALSentinelEnableBatteryMeasure::Request  &req,
    rosbridge::ALSentinelEnableBatteryMeasure::Response &res)
{
  try {
    fProxy->enableBatteryMeasure(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enableCheckRemainingRam(
    rosbridge::ALSentinelEnableCheckRemainingRam::Request  &req,
    rosbridge::ALSentinelEnableCheckRemainingRam::Response &res)
{
  try {
    fProxy->enableCheckRemainingRam(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enableDefaultActionDoubleClick(
    rosbridge::ALSentinelEnableDefaultActionDoubleClick::Request  &req,
    rosbridge::ALSentinelEnableDefaultActionDoubleClick::Response &res)
{
  try {
    fProxy->enableDefaultActionDoubleClick(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enableDefaultActionSimpleClick(
    rosbridge::ALSentinelEnableDefaultActionSimpleClick::Request  &req,
    rosbridge::ALSentinelEnableDefaultActionSimpleClick::Response &res)
{
  try {
    fProxy->enableDefaultActionSimpleClick(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enableDefaultActionTripleClick(
    rosbridge::ALSentinelEnableDefaultActionTripleClick::Request  &req,
    rosbridge::ALSentinelEnableDefaultActionTripleClick::Response &res)
{
  try {
    fProxy->enableDefaultActionTripleClick(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enableHeatMonitoring(
    rosbridge::ALSentinelEnableHeatMonitoring::Request  &req,
    rosbridge::ALSentinelEnableHeatMonitoring::Response &res)
{
  try {
    fProxy->enableHeatMonitoring(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::enablePowerMonitoring(
    rosbridge::ALSentinelEnablePowerMonitoring::Request  &req,
    rosbridge::ALSentinelEnablePowerMonitoring::Response &res)
{
  try {
    fProxy->enablePowerMonitoring(req.enable);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::exit(
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

bool ALRosALSentinel::exitNaoqi(
    rosbridge::ALSentinelExitNaoqi::Request  &req,
    rosbridge::ALSentinelExitNaoqi::Response &res)
{
  try {
    fProxy->exitNaoqi();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::getBatteryLevel(
    rosbridge::ALSentinelGetBatteryLevel::Request  &req,
    rosbridge::ALSentinelGetBatteryLevel::Response &res)
{
  try {
    res.value = fProxy->getBatteryLevel();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::getBatteryLevelDesc(
    rosbridge::ALSentinelGetBatteryLevelDesc::Request  &req,
    rosbridge::ALSentinelGetBatteryLevelDesc::Response &res)
{
  try {
    res.value = fProxy->getBatteryLevelDesc();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::getBrokerName(
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

bool ALRosALSentinel::getMethodList(
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

bool ALRosALSentinel::getRemainingRam(
    rosbridge::ALSentinelGetRemainingRam::Request  &req,
    rosbridge::ALSentinelGetRemainingRam::Response &res)
{
  try {
    res.value = fProxy->getRemainingRam();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::getUsage(
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

bool ALRosALSentinel::ping(
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

bool ALRosALSentinel::presentation(
    rosbridge::ALSentinelPresentation::Request  &req,
    rosbridge::ALSentinelPresentation::Response &res)
{
  try {
    fProxy->presentation(req.enableFastCheckJoints);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::run(
    rosbridge::ALSentinelRun::Request  &req,
    rosbridge::ALSentinelRun::Response &res)
{
  try {
    fProxy->run();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::setPowerLimit(
    rosbridge::ALSentinelSetPowerLimit::Request  &req,
    rosbridge::ALSentinelSetPowerLimit::Response &res)
{
  try {
    fProxy->setPowerLimit(req.powerLimit);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSentinel::version(
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
#include "alrosalsentinel_cpp.inc"
}
