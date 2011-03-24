/*
* Generated for ALVideoDevice
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalvideodevice_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alvideodeviceproxy.h>

namespace AL {

void ALRosALVideoDevice::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALVideoDevice"))
  {
    return;
  }
  fProxy = ALPtr<ALVideoDeviceProxy> (new ALVideoDeviceProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/exit"), &ALRosALVideoDevice::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getActiveCamera"), &ALRosALVideoDevice::getActiveCamera, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getAngPosFromImgPos"), &ALRosALVideoDevice::getAngPosFromImgPos, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getAngSizeFromImgSize"), &ALRosALVideoDevice::getAngSizeFromImgSize, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getBrokerName"), &ALRosALVideoDevice::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getGVMColorSpace"), &ALRosALVideoDevice::getGVMColorSpace, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getGVMFrameRate"), &ALRosALVideoDevice::getGVMFrameRate, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getGVMResolution"), &ALRosALVideoDevice::getGVMResolution, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getImgInfoFromAngInfo"), &ALRosALVideoDevice::getImgInfoFromAngInfo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getImgInfoFromAngInfoWithRes"), &ALRosALVideoDevice::getImgInfoFromAngInfoWithRes, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getImgPosFromAngPos"), &ALRosALVideoDevice::getImgPosFromAngPos, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getImgSizeFromAngSize"), &ALRosALVideoDevice::getImgSizeFromAngSize, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getMethodList"), &ALRosALVideoDevice::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getParam"), &ALRosALVideoDevice::getParam, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getUsage"), &ALRosALVideoDevice::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getVIMColorSpace"), &ALRosALVideoDevice::getVIMColorSpace, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getVIMFrameRate"), &ALRosALVideoDevice::getVIMFrameRate, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getVIMResolution"), &ALRosALVideoDevice::getVIMResolution, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/isFrameGrabberOff"), &ALRosALVideoDevice::isFrameGrabberOff, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/ping"), &ALRosALVideoDevice::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/recordVideo"), &ALRosALVideoDevice::recordVideo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/releaseDirectRawImage"), &ALRosALVideoDevice::releaseDirectRawImage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/releaseImage"), &ALRosALVideoDevice::releaseImage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/setColorSpace"), &ALRosALVideoDevice::setColorSpace, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/setFrameRate"), &ALRosALVideoDevice::setFrameRate, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/setParam"), &ALRosALVideoDevice::setParam, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/setParamDefault"), &ALRosALVideoDevice::setParamDefault, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/setResolution"), &ALRosALVideoDevice::setResolution, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/sizesToResolution"), &ALRosALVideoDevice::sizesToResolution, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/startFrameGrabber"), &ALRosALVideoDevice::startFrameGrabber, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/stopFrameGrabber"), &ALRosALVideoDevice::stopFrameGrabber, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/stopVideo"), &ALRosALVideoDevice::stopVideo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/subscribe"), &ALRosALVideoDevice::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/unsubscribe"), &ALRosALVideoDevice::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/version"), &ALRosALVideoDevice::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALVideoDevice::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getActiveCamera(
    rosbridge::ALVisionVideoInputGetActiveCamera::Request  &req,
    rosbridge::ALVisionVideoInputGetActiveCamera::Response &res)
{
  try {
    res.value = fProxy->getActiveCamera();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getActiveCamera failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getAngPosFromImgPos(
    rosbridge::ALVisionVideoInputGetAngPosFromImgPos::Request  &req,
    rosbridge::ALVisionVideoInputGetAngPosFromImgPos::Response &res)
{
  try {
    res.value = fProxy->getAngPosFromImgPos(req.imgPos);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getAngPosFromImgPos failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getAngSizeFromImgSize(
    rosbridge::ALVisionVideoInputGetAngSizeFromImgSize::Request  &req,
    rosbridge::ALVisionVideoInputGetAngSizeFromImgSize::Response &res)
{
  try {
    res.value = fProxy->getAngSizeFromImgSize(req.imgSize);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getAngSizeFromImgSize failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getGVMColorSpace(
    rosbridge::ALVisionVideoInputGetGVMColorSpace::Request  &req,
    rosbridge::ALVisionVideoInputGetGVMColorSpace::Response &res)
{
  try {
    res.value = fProxy->getGVMColorSpace(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getGVMColorSpace failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getGVMFrameRate(
    rosbridge::ALVisionVideoInputGetGVMFrameRate::Request  &req,
    rosbridge::ALVisionVideoInputGetGVMFrameRate::Response &res)
{
  try {
    res.value = fProxy->getGVMFrameRate(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getGVMFrameRate failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getGVMResolution(
    rosbridge::ALVisionVideoInputGetGVMResolution::Request  &req,
    rosbridge::ALVisionVideoInputGetGVMResolution::Response &res)
{
  try {
    res.value = fProxy->getGVMResolution(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getGVMResolution failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getImgInfoFromAngInfo(
    rosbridge::ALVisionVideoInputGetImgInfoFromAngInfo::Request  &req,
    rosbridge::ALVisionVideoInputGetImgInfoFromAngInfo::Response &res)
{
  try {
    res.value = fProxy->getImgInfoFromAngInfo(req.angles);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getImgInfoFromAngInfo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getImgInfoFromAngInfoWithRes(
    rosbridge::ALVisionVideoInputGetImgInfoFromAngInfoWithRes::Request  &req,
    rosbridge::ALVisionVideoInputGetImgInfoFromAngInfoWithRes::Response &res)
{
  try {
    res.value = fProxy->getImgInfoFromAngInfoWithRes(req.angInfo, req.arg2);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getImgInfoFromAngInfoWithRes failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getImgPosFromAngPos(
    rosbridge::ALVisionVideoInputGetImgPosFromAngPos::Request  &req,
    rosbridge::ALVisionVideoInputGetImgPosFromAngPos::Response &res)
{
  try {
    res.value = fProxy->getImgPosFromAngPos(req.angPos);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getImgPosFromAngPos failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getImgSizeFromAngSize(
    rosbridge::ALVisionVideoInputGetImgSizeFromAngSize::Request  &req,
    rosbridge::ALVisionVideoInputGetImgSizeFromAngSize::Response &res)
{
  try {
    res.value = fProxy->getImgSizeFromAngSize(req.angSize);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getImgSizeFromAngSize failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getParam(
    rosbridge::ALVisionVideoInputGetParam::Request  &req,
    rosbridge::ALVisionVideoInputGetParam::Response &res)
{
  try {
    res.value = fProxy->getParam(req.pParam);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getParam failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getVIMColorSpace(
    rosbridge::ALVisionVideoInputGetVIMColorSpace::Request  &req,
    rosbridge::ALVisionVideoInputGetVIMColorSpace::Response &res)
{
  try {
    res.value = fProxy->getVIMColorSpace();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getVIMColorSpace failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getVIMFrameRate(
    rosbridge::ALVisionVideoInputGetVIMFrameRate::Request  &req,
    rosbridge::ALVisionVideoInputGetVIMFrameRate::Response &res)
{
  try {
    res.value = fProxy->getVIMFrameRate();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getVIMFrameRate failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::getVIMResolution(
    rosbridge::ALVisionVideoInputGetVIMResolution::Request  &req,
    rosbridge::ALVisionVideoInputGetVIMResolution::Response &res)
{
  try {
    res.value = fProxy->getVIMResolution();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getVIMResolution failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::isFrameGrabberOff(
    rosbridge::ALVisionVideoInputIsFrameGrabberOff::Request  &req,
    rosbridge::ALVisionVideoInputIsFrameGrabberOff::Response &res)
{
  try {
    res.value = fProxy->isFrameGrabberOff();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.isFrameGrabberOff failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::recordVideo(
    rosbridge::ALVisionVideoInputRecordVideo::Request  &req,
    rosbridge::ALVisionVideoInputRecordVideo::Response &res)
{
  try {
    res.value = fProxy->recordVideo(req.id, req.path, req.totalNumber, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.recordVideo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::releaseDirectRawImage(
    rosbridge::ALVisionVideoInputReleaseDirectRawImage::Request  &req,
    rosbridge::ALVisionVideoInputReleaseDirectRawImage::Response &res)
{
  try {
    res.value = fProxy->releaseDirectRawImage(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.releaseDirectRawImage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::releaseImage(
    rosbridge::ALVisionVideoInputReleaseImage::Request  &req,
    rosbridge::ALVisionVideoInputReleaseImage::Response &res)
{
  try {
    res.value = fProxy->releaseImage(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.releaseImage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::setColorSpace(
    rosbridge::ALVisionVideoInputSetColorSpace::Request  &req,
    rosbridge::ALVisionVideoInputSetColorSpace::Response &res)
{
  try {
    res.value = fProxy->setColorSpace(req.id, req.colorSpace);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.setColorSpace failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::setFrameRate(
    rosbridge::ALVisionVideoInputSetFrameRate::Request  &req,
    rosbridge::ALVisionVideoInputSetFrameRate::Response &res)
{
  try {
    res.value = fProxy->setFrameRate(req.id, req.frameRate);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.setFrameRate failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::setParam(
    rosbridge::ALVisionVideoInputSetParam::Request  &req,
    rosbridge::ALVisionVideoInputSetParam::Response &res)
{
  try {
    fProxy->setParam(req.param, req.newValue);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.setParam failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::setParamDefault(
    rosbridge::ALVisionVideoInputSetParamDefault::Request  &req,
    rosbridge::ALVisionVideoInputSetParamDefault::Response &res)
{
  try {
    fProxy->setParamDefault(req.param);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.setParamDefault failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::setResolution(
    rosbridge::ALVisionVideoInputSetResolution::Request  &req,
    rosbridge::ALVisionVideoInputSetResolution::Response &res)
{
  try {
    res.value = fProxy->setResolution(req.id, req.size);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.setResolution failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::sizesToResolution(
    rosbridge::ALVisionVideoInputSizesToResolution::Request  &req,
    rosbridge::ALVisionVideoInputSizesToResolution::Response &res)
{
  try {
    res.value = fProxy->sizesToResolution(req.width, req.height);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.sizesToResolution failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::startFrameGrabber(
    rosbridge::ALVisionVideoInputStartFrameGrabber::Request  &req,
    rosbridge::ALVisionVideoInputStartFrameGrabber::Response &res)
{
  try {
    res.value = fProxy->startFrameGrabber();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.startFrameGrabber failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::stopFrameGrabber(
    rosbridge::ALVisionVideoInputStopFrameGrabber::Request  &req,
    rosbridge::ALVisionVideoInputStopFrameGrabber::Response &res)
{
  try {
    res.value = fProxy->stopFrameGrabber();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.stopFrameGrabber failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::stopVideo(
    rosbridge::ALVisionVideoInputStopVideo::Request  &req,
    rosbridge::ALVisionVideoInputStopVideo::Response &res)
{
  try {
    res.value = fProxy->stopVideo(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.stopVideo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::subscribe(
    rosbridge::ALVisionVideoInputSubscribe::Request  &req,
    rosbridge::ALVisionVideoInputSubscribe::Response &res)
{
  try {
    res.value = fProxy->subscribe(req.gvmName, req.resolution, req.colorSpace, req.fps);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::unsubscribe(
    rosbridge::ALVisionVideoInputUnsubscribe::Request  &req,
    rosbridge::ALVisionVideoInputUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALVideoDevice::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalvideodevice_cpp.inc"
}
