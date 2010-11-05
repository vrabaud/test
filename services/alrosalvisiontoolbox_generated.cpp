/*
* Generated for ALVisionToolbox
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalvisiontoolbox_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alvisiontoolboxproxy.h>

namespace AL {

void ALRosALVisionToolbox::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALVisionToolbox"))
  {
    return;
  }
  fProxy = ALPtr<ALVisionToolboxProxy> (new ALVisionToolboxProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/backlighting"), &ALRosALVisionToolbox::backlighting, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/exit"), &ALRosALVisionToolbox::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/getBrokerName"), &ALRosALVisionToolbox::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/getMethodList"), &ALRosALVisionToolbox::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/getUsage"), &ALRosALVisionToolbox::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/halfPress"), &ALRosALVisionToolbox::halfPress, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/isItDark"), &ALRosALVisionToolbox::isItDark, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/isVideoRecording"), &ALRosALVisionToolbox::isVideoRecording, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/logTPRInstanceInfo"), &ALRosALVisionToolbox::logTPRInstanceInfo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/ping"), &ALRosALVisionToolbox::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/setWhiteBalance"), &ALRosALVisionToolbox::setWhiteBalance, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/startVideoRecord"), &ALRosALVisionToolbox::startVideoRecord, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/startVideoRecord_adv"), &ALRosALVisionToolbox::startVideoRecord_adv, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/stopTPR"), &ALRosALVisionToolbox::stopTPR, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/takePicture"), &ALRosALVisionToolbox::takePicture, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/takePictureRegularly"), &ALRosALVisionToolbox::takePictureRegularly, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/version"), &ALRosALVisionToolbox::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALVisionToolbox::backlighting(
    rosbridge::ALVisionToolboxBacklighting::Request  &req,
    rosbridge::ALVisionToolboxBacklighting::Response &res)
{
  try {
    res.value = fProxy->backlighting();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::exit(
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

bool ALRosALVisionToolbox::getBrokerName(
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

bool ALRosALVisionToolbox::getMethodList(
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

bool ALRosALVisionToolbox::getUsage(
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

bool ALRosALVisionToolbox::halfPress(
    rosbridge::ALVisionToolboxHalfPress::Request  &req,
    rosbridge::ALVisionToolboxHalfPress::Response &res)
{
  try {
    fProxy->halfPress();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::isItDark(
    rosbridge::ALVisionToolboxIsItDark::Request  &req,
    rosbridge::ALVisionToolboxIsItDark::Response &res)
{
  try {
    res.value = fProxy->isItDark();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::isVideoRecording(
    rosbridge::ALVisionToolboxIsVideoRecording::Request  &req,
    rosbridge::ALVisionToolboxIsVideoRecording::Response &res)
{
  try {
    res.value = fProxy->isVideoRecording();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::logTPRInstanceInfo(
    rosbridge::ALVisionToolboxLogTPRInstanceInfo::Request  &req,
    rosbridge::ALVisionToolboxLogTPRInstanceInfo::Response &res)
{
  try {
    fProxy->logTPRInstanceInfo(req.instanceNumber);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::ping(
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

bool ALRosALVisionToolbox::setWhiteBalance(
    rosbridge::ALVisionToolboxSetWhiteBalance::Request  &req,
    rosbridge::ALVisionToolboxSetWhiteBalance::Response &res)
{
  try {
    fProxy->setWhiteBalance(req.camera);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::startVideoRecord(
    rosbridge::ALVisionToolboxStartVideoRecord::Request  &req,
    rosbridge::ALVisionToolboxStartVideoRecord::Response &res)
{
  try {
    fProxy->startVideoRecord(req.videoName);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::startVideoRecord_adv(
    rosbridge::ALVisionToolboxStartVideoRecord_adv::Request  &req,
    rosbridge::ALVisionToolboxStartVideoRecord_adv::Response &res)
{
  try {
    fProxy->startVideoRecord_adv(req.videoName, req.framerate, req.format, req.resIndex, req.numFrames);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::stopTPR(
    rosbridge::ALVisionToolboxStopTPR::Request  &req,
    rosbridge::ALVisionToolboxStopTPR::Response &res)
{
  try {
    fProxy->stopTPR(req.pathAndNameRoot, req.imageRecordFormat);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::takePicture(
    rosbridge::ALVisionToolboxTakePicture::Request  &req,
    rosbridge::ALVisionToolboxTakePicture::Response &res)
{
  try {
    fProxy->takePicture();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::takePictureRegularly(
    rosbridge::ALVisionToolboxTakePictureRegularly::Request  &req,
    rosbridge::ALVisionToolboxTakePictureRegularly::Response &res)
{
  try {
    fProxy->takePictureRegularly(req.secondsBetweenTwoShots, req.pathAndNameRoot, req.overwriteImage, req.imageRecordFormat, req.resolution);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALVisionToolbox::version(
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
#include "alrosalvisiontoolbox_cpp.inc"
}
