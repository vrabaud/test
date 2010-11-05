/*
* Generated for ALLandMarkDetection
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosallandmarkdetection_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/allandmarkdetectionproxy.h>

namespace AL {

void ALRosALLandMarkDetection::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALLandMarkDetection"))
  {
    return;
  }
  fProxy = ALPtr<ALLandMarkDetectionProxy> (new ALLandMarkDetectionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/exit"), &ALRosALLandMarkDetection::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getBrokerName"), &ALRosALLandMarkDetection::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getCurrentPeriod"), &ALRosALLandMarkDetection::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getCurrentPrecision"), &ALRosALLandMarkDetection::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getMethodList"), &ALRosALLandMarkDetection::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getMyPeriod"), &ALRosALLandMarkDetection::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getMyPrecision"), &ALRosALLandMarkDetection::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getOutputNames"), &ALRosALLandMarkDetection::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/getUsage"), &ALRosALLandMarkDetection::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/ping"), &ALRosALLandMarkDetection::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/run"), &ALRosALLandMarkDetection::run, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/subscribeString"), &ALRosALLandMarkDetection::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/subscribe"), &ALRosALLandMarkDetection::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/unsubscribe"), &ALRosALLandMarkDetection::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/updatePeriod"), &ALRosALLandMarkDetection::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/updatePrecision"), &ALRosALLandMarkDetection::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLandMarkDetection/version"), &ALRosALLandMarkDetection::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALLandMarkDetection::exit(
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

bool ALRosALLandMarkDetection::getBrokerName(
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

bool ALRosALLandMarkDetection::getCurrentPeriod(
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

bool ALRosALLandMarkDetection::getCurrentPrecision(
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

bool ALRosALLandMarkDetection::getMethodList(
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

bool ALRosALLandMarkDetection::getMyPeriod(
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

bool ALRosALLandMarkDetection::getMyPrecision(
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

bool ALRosALLandMarkDetection::getOutputNames(
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

bool ALRosALLandMarkDetection::getUsage(
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

bool ALRosALLandMarkDetection::ping(
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

bool ALRosALLandMarkDetection::run(
    rosbridge::ALLandMarkDetectionRun::Request  &req,
    rosbridge::ALLandMarkDetectionRun::Response &res)
{
  try {
    fProxy->run();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLandMarkDetection::subscribeString(
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

bool ALRosALLandMarkDetection::subscribe(
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

bool ALRosALLandMarkDetection::unsubscribe(
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

bool ALRosALLandMarkDetection::updatePeriod(
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

bool ALRosALLandMarkDetection::updatePrecision(
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

bool ALRosALLandMarkDetection::version(
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
#include "alrosallandmarkdetection_cpp.inc"
}
