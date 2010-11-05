/*
* Generated for ALSonar
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalsonar_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alsonarproxy.h>

namespace AL {

void ALRosALSonar::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALSonar"))
  {
    return;
  }
  fProxy = ALPtr<ALSonarProxy> (new ALSonarProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/exit"), &ALRosALSonar::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getBrokerName"), &ALRosALSonar::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getCurrentPeriod"), &ALRosALSonar::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getCurrentPrecision"), &ALRosALSonar::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getMethodList"), &ALRosALSonar::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getMyPeriod"), &ALRosALSonar::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getMyPrecision"), &ALRosALSonar::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getOutputNames"), &ALRosALSonar::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getUsage"), &ALRosALSonar::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/ping"), &ALRosALSonar::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/subscribeString"), &ALRosALSonar::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/subscribe"), &ALRosALSonar::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/unsubscribe"), &ALRosALSonar::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/updatePeriod"), &ALRosALSonar::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/updatePrecision"), &ALRosALSonar::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/version"), &ALRosALSonar::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALSonar::exit(
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

bool ALRosALSonar::getBrokerName(
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

bool ALRosALSonar::getCurrentPeriod(
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

bool ALRosALSonar::getCurrentPrecision(
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

bool ALRosALSonar::getMethodList(
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

bool ALRosALSonar::getMyPeriod(
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

bool ALRosALSonar::getMyPrecision(
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

bool ALRosALSonar::getOutputNames(
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

bool ALRosALSonar::getUsage(
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

bool ALRosALSonar::ping(
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

bool ALRosALSonar::subscribeString(
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

bool ALRosALSonar::subscribe(
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

bool ALRosALSonar::unsubscribe(
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

bool ALRosALSonar::updatePeriod(
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

bool ALRosALSonar::updatePrecision(
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

bool ALRosALSonar::version(
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
#include "alrosalsonar_cpp.inc"
}
