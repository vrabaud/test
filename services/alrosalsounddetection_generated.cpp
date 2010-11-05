/*
* Generated for ALSoundDetection
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalsounddetection_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alsounddetectionproxy.h>

namespace AL {

void ALRosALSoundDetection::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALSoundDetection"))
  {
    return;
  }
  fProxy = ALPtr<ALSoundDetectionProxy> (new ALSoundDetectionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/exit"), &ALRosALSoundDetection::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getBrokerName"), &ALRosALSoundDetection::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getCurrentPeriod"), &ALRosALSoundDetection::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getCurrentPrecision"), &ALRosALSoundDetection::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getMethodList"), &ALRosALSoundDetection::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getMyPeriod"), &ALRosALSoundDetection::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getMyPrecision"), &ALRosALSoundDetection::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getOutputNames"), &ALRosALSoundDetection::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getUsage"), &ALRosALSoundDetection::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/ping"), &ALRosALSoundDetection::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/setDebugMode"), &ALRosALSoundDetection::setDebugMode, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/setParameter"), &ALRosALSoundDetection::setParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/subscribeString"), &ALRosALSoundDetection::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/subscribe"), &ALRosALSoundDetection::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/unsubscribe"), &ALRosALSoundDetection::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/updatePeriod"), &ALRosALSoundDetection::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/updatePrecision"), &ALRosALSoundDetection::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/version"), &ALRosALSoundDetection::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALSoundDetection::exit(
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

bool ALRosALSoundDetection::getBrokerName(
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

bool ALRosALSoundDetection::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::getMethodList(
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

bool ALRosALSoundDetection::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::getUsage(
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

bool ALRosALSoundDetection::ping(
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

bool ALRosALSoundDetection::setDebugMode(
    rosbridge::ALSoundExtractorSetDebugMode::Request  &req,
    rosbridge::ALSoundExtractorSetDebugMode::Response &res)
{
  try {
    fProxy->setDebugMode(req.bSetOrUnset);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::setParameter(
    rosbridge::ALSoundDetectionSetParameter::Request  &req,
    rosbridge::ALSoundDetectionSetParameter::Response &res)
{
  try {
    fProxy->setParameter(req.type, req.paraDetect, req.param);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALSoundDetection::version(
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
#include "alrosalsounddetection_cpp.inc"
}
