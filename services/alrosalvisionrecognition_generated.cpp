/*
* Generated for ALVisionRecognition
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalvisionrecognition_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alvisionrecognitionproxy.h>

namespace AL {

void ALRosALVisionRecognition::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALVisionRecognition"))
  {
    return;
  }
  fProxy = ALPtr<ALVisionRecognitionProxy> (new ALVisionRecognitionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/exit"), &ALRosALVisionRecognition::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getBrokerName"), &ALRosALVisionRecognition::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getCurrentPeriod"), &ALRosALVisionRecognition::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getCurrentPrecision"), &ALRosALVisionRecognition::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getMethodList"), &ALRosALVisionRecognition::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getMyPeriod"), &ALRosALVisionRecognition::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getMyPrecision"), &ALRosALVisionRecognition::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getOutputNames"), &ALRosALVisionRecognition::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getUsage"), &ALRosALVisionRecognition::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/load"), &ALRosALVisionRecognition::load, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/ping"), &ALRosALVisionRecognition::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/run"), &ALRosALVisionRecognition::run, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/subscribeString"), &ALRosALVisionRecognition::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/subscribe"), &ALRosALVisionRecognition::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/unsubscribe"), &ALRosALVisionRecognition::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/updatePeriod"), &ALRosALVisionRecognition::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/updatePrecision"), &ALRosALVisionRecognition::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/version"), &ALRosALVisionRecognition::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALVisionRecognition::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getCurrentPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getCurrentPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getMyPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getMyPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getOutputNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::load(
    rosbridge::ALVisionRecognitionLoad::Request  &req,
    rosbridge::ALVisionRecognitionLoad::Response &res)
{
  try {
    fProxy->load();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.load failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::run(
    rosbridge::ALVisionRecognitionRun::Request  &req,
    rosbridge::ALVisionRecognitionRun::Response &res)
{
  try {
    fProxy->run();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.run failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.updatePeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.updatePrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVisionRecognition::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionRecognition.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalvisionrecognition_cpp.inc"
}
