/*
* Generated for ALRedBallDetection
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalredballdetection_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alredballdetectionproxy.h>

namespace AL {

void ALRosALRedBallDetection::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALRedBallDetection"))
  {
    return;
  }
  fProxy = ALPtr<ALRedBallDetectionProxy> (new ALRedBallDetectionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/exit"), &ALRosALRedBallDetection::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getBrokerName"), &ALRosALRedBallDetection::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getCurrentPeriod"), &ALRosALRedBallDetection::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getCurrentPrecision"), &ALRosALRedBallDetection::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getMethodList"), &ALRosALRedBallDetection::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getMyPeriod"), &ALRosALRedBallDetection::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getMyPrecision"), &ALRosALRedBallDetection::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getOutputNames"), &ALRosALRedBallDetection::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getUsage"), &ALRosALRedBallDetection::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/ping"), &ALRosALRedBallDetection::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/subscribeString"), &ALRosALRedBallDetection::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/subscribe"), &ALRosALRedBallDetection::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/unsubscribe"), &ALRosALRedBallDetection::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/updatePeriod"), &ALRosALRedBallDetection::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/updatePrecision"), &ALRosALRedBallDetection::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/version"), &ALRosALRedBallDetection::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALRedBallDetection::exit(
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

bool ALRosALRedBallDetection::getBrokerName(
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

bool ALRosALRedBallDetection::getCurrentPeriod(
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

bool ALRosALRedBallDetection::getCurrentPrecision(
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

bool ALRosALRedBallDetection::getMethodList(
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

bool ALRosALRedBallDetection::getMyPeriod(
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

bool ALRosALRedBallDetection::getMyPrecision(
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

bool ALRosALRedBallDetection::getOutputNames(
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

bool ALRosALRedBallDetection::getUsage(
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

bool ALRosALRedBallDetection::ping(
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

bool ALRosALRedBallDetection::subscribeString(
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

bool ALRosALRedBallDetection::subscribe(
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

bool ALRosALRedBallDetection::unsubscribe(
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

bool ALRosALRedBallDetection::updatePeriod(
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

bool ALRosALRedBallDetection::updatePrecision(
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

bool ALRosALRedBallDetection::version(
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
#include "alrosalredballdetection_cpp.inc"
}
