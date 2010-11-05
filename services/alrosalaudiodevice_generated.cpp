/*
* Generated for ALAudioDevice
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalaudiodevice_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alaudiodeviceproxy.h>

namespace AL {

void ALRosALAudioDevice::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALAudioDevice"))
  {
    return;
  }
  fProxy = ALPtr<ALAudioDeviceProxy> (new ALAudioDeviceProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/disableEnergyComputation"), &ALRosALAudioDevice::disableEnergyComputation, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/enableEnergyComputation"), &ALRosALAudioDevice::enableEnergyComputation, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/exit"), &ALRosALAudioDevice::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getBrokerName"), &ALRosALAudioDevice::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getFrontMicEnergy"), &ALRosALAudioDevice::getFrontMicEnergy, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getLeftMicEnergy"), &ALRosALAudioDevice::getLeftMicEnergy, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getMethodList"), &ALRosALAudioDevice::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getOutputVolume"), &ALRosALAudioDevice::getOutputVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getParameter"), &ALRosALAudioDevice::getParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getRearMicEnergy"), &ALRosALAudioDevice::getRearMicEnergy, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getRightMicEnergy"), &ALRosALAudioDevice::getRightMicEnergy, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getUsage"), &ALRosALAudioDevice::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/ping"), &ALRosALAudioDevice::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/playSine"), &ALRosALAudioDevice::playSine, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/resetAudio"), &ALRosALAudioDevice::resetAudio, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/sendLocalBufferToOutput"), &ALRosALAudioDevice::sendLocalBufferToOutput, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/setFileAsInput"), &ALRosALAudioDevice::setFileAsInput, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/setOutputVolume"), &ALRosALAudioDevice::setOutputVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/setParameter"), &ALRosALAudioDevice::setParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/startMicrophonesRecording"), &ALRosALAudioDevice::startMicrophonesRecording, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/stopAudioOut"), &ALRosALAudioDevice::stopAudioOut, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/stopMicrophonesRecording"), &ALRosALAudioDevice::stopMicrophonesRecording, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/subscribeRemoteModule"), &ALRosALAudioDevice::subscribeRemoteModule, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/unSubscribeRemoteModule"), &ALRosALAudioDevice::unSubscribeRemoteModule, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/version"), &ALRosALAudioDevice::version, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/waitSynchronizer"), &ALRosALAudioDevice::waitSynchronizer, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALAudioDevice::disableEnergyComputation(
    rosbridge::ALAudioDeviceDisableEnergyComputation::Request  &req,
    rosbridge::ALAudioDeviceDisableEnergyComputation::Response &res)
{
  try {
    fProxy->disableEnergyComputation();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.disableEnergyComputation failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::enableEnergyComputation(
    rosbridge::ALAudioDeviceEnableEnergyComputation::Request  &req,
    rosbridge::ALAudioDeviceEnableEnergyComputation::Response &res)
{
  try {
    fProxy->enableEnergyComputation();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.enableEnergyComputation failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getFrontMicEnergy(
    rosbridge::ALAudioDeviceGetFrontMicEnergy::Request  &req,
    rosbridge::ALAudioDeviceGetFrontMicEnergy::Response &res)
{
  try {
    res.value = fProxy->getFrontMicEnergy();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getFrontMicEnergy failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getLeftMicEnergy(
    rosbridge::ALAudioDeviceGetLeftMicEnergy::Request  &req,
    rosbridge::ALAudioDeviceGetLeftMicEnergy::Response &res)
{
  try {
    res.value = fProxy->getLeftMicEnergy();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getLeftMicEnergy failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getOutputVolume(
    rosbridge::ALAudioDeviceGetOutputVolume::Request  &req,
    rosbridge::ALAudioDeviceGetOutputVolume::Response &res)
{
  try {
    res.value = fProxy->getOutputVolume();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getOutputVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getParameter(
    rosbridge::ALAudioDeviceGetParameter::Request  &req,
    rosbridge::ALAudioDeviceGetParameter::Response &res)
{
  try {
    res.value = fProxy->getParameter(req.pParamName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getParameter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getRearMicEnergy(
    rosbridge::ALAudioDeviceGetRearMicEnergy::Request  &req,
    rosbridge::ALAudioDeviceGetRearMicEnergy::Response &res)
{
  try {
    res.value = fProxy->getRearMicEnergy();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getRearMicEnergy failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getRightMicEnergy(
    rosbridge::ALAudioDeviceGetRightMicEnergy::Request  &req,
    rosbridge::ALAudioDeviceGetRightMicEnergy::Response &res)
{
  try {
    res.value = fProxy->getRightMicEnergy();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getRightMicEnergy failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::playSine(
    rosbridge::ALAudioDevicePlaySine::Request  &req,
    rosbridge::ALAudioDevicePlaySine::Response &res)
{
  try {
    fProxy->playSine(req.frequence, req.gain, req.pan, req.duration);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.playSine failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::resetAudio(
    rosbridge::ALAudioDeviceResetAudio::Request  &req,
    rosbridge::ALAudioDeviceResetAudio::Response &res)
{
  try {
    fProxy->resetAudio();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.resetAudio failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::sendLocalBufferToOutput(
    rosbridge::ALAudioDeviceSendLocalBufferToOutput::Request  &req,
    rosbridge::ALAudioDeviceSendLocalBufferToOutput::Response &res)
{
  try {
    res.value = fProxy->sendLocalBufferToOutput(req.nbOfFrames, req.pBuffer);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.sendLocalBufferToOutput failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::setFileAsInput(
    rosbridge::ALAudioDeviceSetFileAsInput::Request  &req,
    rosbridge::ALAudioDeviceSetFileAsInput::Response &res)
{
  try {
    fProxy->setFileAsInput(req.pFileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.setFileAsInput failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::setOutputVolume(
    rosbridge::ALAudioDeviceSetOutputVolume::Request  &req,
    rosbridge::ALAudioDeviceSetOutputVolume::Response &res)
{
  try {
    fProxy->setOutputVolume(req.volume);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.setOutputVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::setParameter(
    rosbridge::ALAudioDeviceSetParameter::Request  &req,
    rosbridge::ALAudioDeviceSetParameter::Response &res)
{
  try {
    fProxy->setParameter(req.pParamName, req.pParamValue);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.setParameter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::startMicrophonesRecording(
    rosbridge::ALAudioDeviceStartMicrophonesRecording::Request  &req,
    rosbridge::ALAudioDeviceStartMicrophonesRecording::Response &res)
{
  try {
    fProxy->startMicrophonesRecording(req.pFileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.startMicrophonesRecording failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::stopAudioOut(
    rosbridge::ALAudioDeviceStopAudioOut::Request  &req,
    rosbridge::ALAudioDeviceStopAudioOut::Response &res)
{
  try {
    fProxy->stopAudioOut();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.stopAudioOut failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::stopMicrophonesRecording(
    rosbridge::ALAudioDeviceStopMicrophonesRecording::Request  &req,
    rosbridge::ALAudioDeviceStopMicrophonesRecording::Response &res)
{
  try {
    fProxy->stopMicrophonesRecording();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.stopMicrophonesRecording failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::subscribeRemoteModule(
    rosbridge::ALAudioDeviceSubscribeRemoteModule::Request  &req,
    rosbridge::ALAudioDeviceSubscribeRemoteModule::Response &res)
{
  try {
    res.value = fProxy->subscribeRemoteModule(req.pModule);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.subscribeRemoteModule failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::unSubscribeRemoteModule(
    rosbridge::ALAudioDeviceUnSubscribeRemoteModule::Request  &req,
    rosbridge::ALAudioDeviceUnSubscribeRemoteModule::Response &res)
{
  try {
    res.value = fProxy->unSubscribeRemoteModule(req.pModule);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.unSubscribeRemoteModule failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.version failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioDevice::waitSynchronizer(
    rosbridge::ALAudioDeviceWaitSynchronizer::Request  &req,
    rosbridge::ALAudioDeviceWaitSynchronizer::Response &res)
{
  try {
    fProxy->waitSynchronizer(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.waitSynchronizer failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalaudiodevice_cpp.inc"
}
