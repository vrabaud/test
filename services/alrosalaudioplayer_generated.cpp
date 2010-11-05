/*
* Generated for ALAudioPlayer
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalaudioplayer_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alaudioplayerproxy.h>

namespace AL {

void ALRosALAudioPlayer::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALAudioPlayer"))
  {
    return;
  }
  fProxy = ALPtr<ALAudioPlayerProxy> (new ALAudioPlayerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/exit"), &ALRosALAudioPlayer::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getBrokerName"), &ALRosALAudioPlayer::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getMasterVolume"), &ALRosALAudioPlayer::getMasterVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getMethodList"), &ALRosALAudioPlayer::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getUsage"), &ALRosALAudioPlayer::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getVolume"), &ALRosALAudioPlayer::getVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/goTo"), &ALRosALAudioPlayer::goTo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/loadFile"), &ALRosALAudioPlayer::loadFile, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/pause"), &ALRosALAudioPlayer::pause, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/ping"), &ALRosALAudioPlayer::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/play"), &ALRosALAudioPlayer::play, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playInt"), &ALRosALAudioPlayer::playInt, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFile"), &ALRosALAudioPlayer::playFile, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFileString"), &ALRosALAudioPlayer::playFileString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFileFromPosition"), &ALRosALAudioPlayer::playFileFromPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFileFromPositionString"), &ALRosALAudioPlayer::playFileFromPositionString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFileInLoop"), &ALRosALAudioPlayer::playFileInLoop, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playFileInLoopString"), &ALRosALAudioPlayer::playFileInLoopString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playInLoop"), &ALRosALAudioPlayer::playInLoop, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/playInLoopInt"), &ALRosALAudioPlayer::playInLoopInt, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/setMasterVolume"), &ALRosALAudioPlayer::setMasterVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/setPanorama"), &ALRosALAudioPlayer::setPanorama, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/setVolume"), &ALRosALAudioPlayer::setVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/stopAll"), &ALRosALAudioPlayer::stopAll, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/version"), &ALRosALAudioPlayer::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALAudioPlayer::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::getMasterVolume(
    rosbridge::ALAudioPlayerGetMasterVolume::Request  &req,
    rosbridge::ALAudioPlayerGetMasterVolume::Response &res)
{
  try {
    res.value = fProxy->getMasterVolume();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getMasterVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::getVolume(
    rosbridge::ALAudioPlayerGetVolume::Request  &req,
    rosbridge::ALAudioPlayerGetVolume::Response &res)
{
  try {
    res.value = fProxy->getVolume();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::goTo(
    rosbridge::ALAudioPlayerGoTo::Request  &req,
    rosbridge::ALAudioPlayerGoTo::Response &res)
{
  try {
    fProxy->goTo(req.playId, req.position);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.goTo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::loadFile(
    rosbridge::ALAudioPlayerLoadFile::Request  &req,
    rosbridge::ALAudioPlayerLoadFile::Response &res)
{
  try {
    res.value = fProxy->loadFile(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.loadFile failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::pause(
    rosbridge::ALAudioPlayerPause::Request  &req,
    rosbridge::ALAudioPlayerPause::Response &res)
{
  try {
    fProxy->pause(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.pause failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::play(
    rosbridge::ALAudioPlayerPlay::Request  &req,
    rosbridge::ALAudioPlayerPlay::Response &res)
{
  try {
    res.value = fProxy->play(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.play failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playInt(
    rosbridge::ALAudioPlayerPlayInt::Request  &req,
    rosbridge::ALAudioPlayerPlayInt::Response &res)
{
  try {
    res.value = fProxy->play(req.id, req.volume, req.pan);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.play failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFile(
    rosbridge::ALAudioPlayerPlayFile::Request  &req,
    rosbridge::ALAudioPlayerPlayFile::Response &res)
{
  try {
    res.value = fProxy->playFile(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFile failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFileString(
    rosbridge::ALAudioPlayerPlayFileString::Request  &req,
    rosbridge::ALAudioPlayerPlayFileString::Response &res)
{
  try {
    res.value = fProxy->playFile(req.fileName, req.volume, req.pan);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFile failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFileFromPosition(
    rosbridge::ALAudioPlayerPlayFileFromPosition::Request  &req,
    rosbridge::ALAudioPlayerPlayFileFromPosition::Response &res)
{
  try {
    res.value = fProxy->playFileFromPosition(req.fileName, req.position);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFileFromPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFileFromPositionString(
    rosbridge::ALAudioPlayerPlayFileFromPositionString::Request  &req,
    rosbridge::ALAudioPlayerPlayFileFromPositionString::Response &res)
{
  try {
    res.value = fProxy->playFileFromPosition(req.fileName, req.position, req.volume, req.pan);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFileFromPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFileInLoop(
    rosbridge::ALAudioPlayerPlayFileInLoop::Request  &req,
    rosbridge::ALAudioPlayerPlayFileInLoop::Response &res)
{
  try {
    res.value = fProxy->playFileInLoop(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFileInLoop failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playFileInLoopString(
    rosbridge::ALAudioPlayerPlayFileInLoopString::Request  &req,
    rosbridge::ALAudioPlayerPlayFileInLoopString::Response &res)
{
  try {
    res.value = fProxy->playFileInLoop(req.fileName, req.volume, req.pan);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playFileInLoop failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playInLoop(
    rosbridge::ALAudioPlayerPlayInLoop::Request  &req,
    rosbridge::ALAudioPlayerPlayInLoop::Response &res)
{
  try {
    res.value = fProxy->playInLoop(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playInLoop failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::playInLoopInt(
    rosbridge::ALAudioPlayerPlayInLoopInt::Request  &req,
    rosbridge::ALAudioPlayerPlayInLoopInt::Response &res)
{
  try {
    res.value = fProxy->playInLoop(req.fileName, req.volume, req.pan);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.playInLoop failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::setMasterVolume(
    rosbridge::ALAudioPlayerSetMasterVolume::Request  &req,
    rosbridge::ALAudioPlayerSetMasterVolume::Response &res)
{
  try {
    fProxy->setMasterVolume(req.volume);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.setMasterVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::setPanorama(
    rosbridge::ALAudioPlayerSetPanorama::Request  &req,
    rosbridge::ALAudioPlayerSetPanorama::Response &res)
{
  try {
    fProxy->setPanorama(req.arg1);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.setPanorama failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::setVolume(
    rosbridge::ALAudioPlayerSetVolume::Request  &req,
    rosbridge::ALAudioPlayerSetVolume::Response &res)
{
  try {
    fProxy->setVolume(req.id, req.volume);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.setVolume failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::stopAll(
    rosbridge::ALAudioPlayerStopAll::Request  &req,
    rosbridge::ALAudioPlayerStopAll::Response &res)
{
  try {
    fProxy->stopAll();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.stopAll failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALAudioPlayer::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalaudioplayer_cpp.inc"
}
