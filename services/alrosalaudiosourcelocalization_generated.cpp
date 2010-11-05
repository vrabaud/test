/*
* Generated for ALAudioSourceLocalization
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalaudiosourcelocalization_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alaudiosourcelocalizationproxy.h>

namespace AL {

void ALRosALAudioSourceLocalization::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALAudioSourceLocalization"))
  {
    return;
  }
  fProxy = ALPtr<ALAudioSourceLocalizationProxy> (new ALAudioSourceLocalizationProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/exit"), &ALRosALAudioSourceLocalization::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getBrokerName"), &ALRosALAudioSourceLocalization::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getCurrentPeriod"), &ALRosALAudioSourceLocalization::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getCurrentPrecision"), &ALRosALAudioSourceLocalization::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getMethodList"), &ALRosALAudioSourceLocalization::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getMyPeriod"), &ALRosALAudioSourceLocalization::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getMyPrecision"), &ALRosALAudioSourceLocalization::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getOutputNames"), &ALRosALAudioSourceLocalization::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/getUsage"), &ALRosALAudioSourceLocalization::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/ping"), &ALRosALAudioSourceLocalization::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/setDebugMode"), &ALRosALAudioSourceLocalization::setDebugMode, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/setParameter"), &ALRosALAudioSourceLocalization::setParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/subscribeString"), &ALRosALAudioSourceLocalization::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/subscribe"), &ALRosALAudioSourceLocalization::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/unsubscribe"), &ALRosALAudioSourceLocalization::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/updatePeriod"), &ALRosALAudioSourceLocalization::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/updatePrecision"), &ALRosALAudioSourceLocalization::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioSourceLocalization/version"), &ALRosALAudioSourceLocalization::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALAudioSourceLocalization::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getCurrentPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getCurrentPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getMyPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getMyPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getOutputNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::setDebugMode(
    rosbridge::ALSoundExtractorSetDebugMode::Request  &req,
    rosbridge::ALSoundExtractorSetDebugMode::Response &res)
{
  try {
    fProxy->setDebugMode(req.bSetOrUnset);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.setDebugMode failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::setParameter(
    rosbridge::ALAudioSourceLocalizationSetParameter::Request  &req,
    rosbridge::ALAudioSourceLocalizationSetParameter::Response &res)
{
  try {
    fProxy->setParameter(req.param, req.value);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.setParameter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.updatePeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.updatePrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioSourceLocalization::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioSourceLocalization.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalaudiosourcelocalization_cpp.inc"
}
