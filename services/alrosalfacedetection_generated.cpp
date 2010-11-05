/*
* Generated for ALFaceDetection
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalfacedetection_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alfacedetectionproxy.h>

namespace AL {

void ALRosALFaceDetection::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALFaceDetection"))
  {
    return;
  }
  fProxy = ALPtr<ALFaceDetectionProxy> (new ALFaceDetectionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/clearDatabase"), &ALRosALFaceDetection::clearDatabase, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/enableRecognition"), &ALRosALFaceDetection::enableRecognition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/enableTracking"), &ALRosALFaceDetection::enableTracking, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/exit"), &ALRosALFaceDetection::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getBrokerName"), &ALRosALFaceDetection::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getCurrentPeriod"), &ALRosALFaceDetection::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getCurrentPrecision"), &ALRosALFaceDetection::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getMethodList"), &ALRosALFaceDetection::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getMyPeriod"), &ALRosALFaceDetection::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getMyPrecision"), &ALRosALFaceDetection::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getOutputNames"), &ALRosALFaceDetection::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getUsage"), &ALRosALFaceDetection::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/isTrackingEnabled"), &ALRosALFaceDetection::isTrackingEnabled, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/learnFace"), &ALRosALFaceDetection::learnFace, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/ping"), &ALRosALFaceDetection::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/reLearnFace"), &ALRosALFaceDetection::reLearnFace, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/subscribeString"), &ALRosALFaceDetection::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/subscribe"), &ALRosALFaceDetection::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/unsubscribe"), &ALRosALFaceDetection::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/updatePeriod"), &ALRosALFaceDetection::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/updatePrecision"), &ALRosALFaceDetection::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/version"), &ALRosALFaceDetection::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALFaceDetection::clearDatabase(
    rosbridge::ALFaceDetectionClearDatabase::Request  &req,
    rosbridge::ALFaceDetectionClearDatabase::Response &res)
{
  try {
    res.value = fProxy->clearDatabase();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.clearDatabase failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::enableRecognition(
    rosbridge::ALFaceDetectionEnableRecognition::Request  &req,
    rosbridge::ALFaceDetectionEnableRecognition::Response &res)
{
  try {
    fProxy->enableRecognition(req.enable);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.enableRecognition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::enableTracking(
    rosbridge::ALFaceDetectionEnableTracking::Request  &req,
    rosbridge::ALFaceDetectionEnableTracking::Response &res)
{
  try {
    fProxy->enableTracking(req.enable);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.enableTracking failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getCurrentPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getCurrentPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getMyPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getMyPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getOutputNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::isTrackingEnabled(
    rosbridge::ALFaceDetectionIsTrackingEnabled::Request  &req,
    rosbridge::ALFaceDetectionIsTrackingEnabled::Response &res)
{
  try {
    res.value = fProxy->isTrackingEnabled();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.isTrackingEnabled failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::learnFace(
    rosbridge::ALFaceDetectionLearnFace::Request  &req,
    rosbridge::ALFaceDetectionLearnFace::Response &res)
{
  try {
    res.value = fProxy->learnFace(req.pId);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.learnFace failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::reLearnFace(
    rosbridge::ALFaceDetectionReLearnFace::Request  &req,
    rosbridge::ALFaceDetectionReLearnFace::Response &res)
{
  try {
    res.value = fProxy->reLearnFace(req.pId);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.reLearnFace failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.updatePeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.updatePrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceDetection::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalfacedetection_cpp.inc"
}
