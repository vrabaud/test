/*
* Generated for ALSensors
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalsensors_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alsensorsproxy.h>

namespace AL {

void ALRosALSensors::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALSensors"))
  {
    return;
  }
  fProxy = ALPtr<ALSensorsProxy> (new ALSensorsProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/exit"), &ALRosALSensors::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getBrokerName"), &ALRosALSensors::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getCurrentPeriod"), &ALRosALSensors::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getCurrentPrecision"), &ALRosALSensors::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getMethodList"), &ALRosALSensors::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getMyPeriod"), &ALRosALSensors::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getMyPrecision"), &ALRosALSensors::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getOutputNames"), &ALRosALSensors::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getUsage"), &ALRosALSensors::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/ping"), &ALRosALSensors::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/run"), &ALRosALSensors::run, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/subscribeString"), &ALRosALSensors::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/subscribe"), &ALRosALSensors::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/unsubscribe"), &ALRosALSensors::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/updatePeriod"), &ALRosALSensors::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/updatePrecision"), &ALRosALSensors::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/version"), &ALRosALSensors::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALSensors::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getCurrentPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getCurrentPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getMyPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getMyPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getOutputNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::run(
    rosbridge::ALSensorsRun::Request  &req,
    rosbridge::ALSensorsRun::Response &res)
{
  try {
    fProxy->run();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.run failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.updatePeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.updatePrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSensors::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSensors.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalsensors_cpp.inc"
}
