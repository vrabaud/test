/*
* Generated for ALMotionRecorder
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalmotionrecorder_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/almotionrecorderproxy.h>

namespace AL {

void ALRosALMotionRecorder::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALMotionRecorder"))
  {
    return;
  }
  fProxy = ALPtr<ALMotionRecorderProxy> (new ALMotionRecorderProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/exit"), &ALRosALMotionRecorder::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/getBrokerName"), &ALRosALMotionRecorder::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/getMethodList"), &ALRosALMotionRecorder::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/getUsage"), &ALRosALMotionRecorder::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/ping"), &ALRosALMotionRecorder::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/startInteractiveRecording"), &ALRosALMotionRecorder::startInteractiveRecording, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/version"), &ALRosALMotionRecorder::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALMotionRecorder::exit(
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

bool ALRosALMotionRecorder::getBrokerName(
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

bool ALRosALMotionRecorder::getMethodList(
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

bool ALRosALMotionRecorder::getUsage(
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

bool ALRosALMotionRecorder::ping(
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

bool ALRosALMotionRecorder::startInteractiveRecording(
    rosbridge::ALMotionRecorderStartInteractiveRecording::Request  &req,
    rosbridge::ALMotionRecorderStartInteractiveRecording::Response &res)
{
  try {
    fProxy->startInteractiveRecording(req.jointsToRecord, req.nbPoses, req.extensionAllowed, req.mode);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALMotionRecorder::version(
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
#include "alrosalmotionrecorder_cpp.inc"
}
