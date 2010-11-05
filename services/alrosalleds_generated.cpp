/*
* Generated for ALLeds
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalleds_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alledsproxy.h>

namespace AL {

void ALRosALLeds::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALLeds"))
  {
    return;
  }
  fProxy = ALPtr<ALLedsProxy> (new ALLedsProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/createGroup"), &ALRosALLeds::createGroup, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/earLedsSetAngle"), &ALRosALLeds::earLedsSetAngle, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/exit"), &ALRosALLeds::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/fade"), &ALRosALLeds::fade, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/fadeRGB"), &ALRosALLeds::fadeRGB, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getBrokerName"), &ALRosALLeds::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getMethodList"), &ALRosALLeds::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getUsage"), &ALRosALLeds::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/listGroup"), &ALRosALLeds::listGroup, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/listGroups"), &ALRosALLeds::listGroups, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/listLED"), &ALRosALLeds::listLED, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/listLEDs"), &ALRosALLeds::listLEDs, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/off"), &ALRosALLeds::off, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/on"), &ALRosALLeds::on, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/ping"), &ALRosALLeds::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/randomEyes"), &ALRosALLeds::randomEyes, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/rasta"), &ALRosALLeds::rasta, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/rotateEyes"), &ALRosALLeds::rotateEyes, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/setIntensity"), &ALRosALLeds::setIntensity, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/version"), &ALRosALLeds::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALLeds::createGroup(
    rosbridge::ALLedsCreateGroup::Request  &req,
    rosbridge::ALLedsCreateGroup::Response &res)
{
  try {
    fProxy->createGroup(req.groupName, req.ledNames);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::earLedsSetAngle(
    rosbridge::ALLedsEarLedsSetAngle::Request  &req,
    rosbridge::ALLedsEarLedsSetAngle::Response &res)
{
  try {
    fProxy->earLedsSetAngle(req.degrees, req.duration, req.leaveOnAtEnd);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::exit(
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

bool ALRosALLeds::fade(
    rosbridge::ALLedsFade::Request  &req,
    rosbridge::ALLedsFade::Response &res)
{
  try {
    fProxy->fade(req.name, req.intensity, req.duration);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::fadeRGB(
    rosbridge::ALLedsFadeRGB::Request  &req,
    rosbridge::ALLedsFadeRGB::Response &res)
{
  try {
    fProxy->fadeRGB(req.name, req.rgb, req.duration);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::getBrokerName(
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

bool ALRosALLeds::getMethodList(
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

bool ALRosALLeds::getUsage(
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

bool ALRosALLeds::listGroup(
    rosbridge::ALLedsListGroup::Request  &req,
    rosbridge::ALLedsListGroup::Response &res)
{
  try {
    res.value = fProxy->listGroup(req.groupName);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::listGroups(
    rosbridge::ALLedsListGroups::Request  &req,
    rosbridge::ALLedsListGroups::Response &res)
{
  try {
    res.value = fProxy->listGroups();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::listLED(
    rosbridge::ALLedsListLED::Request  &req,
    rosbridge::ALLedsListLED::Response &res)
{
  try {
    res.value = fProxy->listLED(req.arg1);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::listLEDs(
    rosbridge::ALLedsListLEDs::Request  &req,
    rosbridge::ALLedsListLEDs::Response &res)
{
  try {
    res.value = fProxy->listLEDs();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::off(
    rosbridge::ALLedsOff::Request  &req,
    rosbridge::ALLedsOff::Response &res)
{
  try {
    fProxy->off(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::on(
    rosbridge::ALLedsOn::Request  &req,
    rosbridge::ALLedsOn::Response &res)
{
  try {
    fProxy->on(req.name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::ping(
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

bool ALRosALLeds::randomEyes(
    rosbridge::ALLedsRandomEyes::Request  &req,
    rosbridge::ALLedsRandomEyes::Response &res)
{
  try {
    fProxy->randomEyes(req.duration);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::rasta(
    rosbridge::ALLedsRasta::Request  &req,
    rosbridge::ALLedsRasta::Response &res)
{
  try {
    fProxy->rasta(req.duration);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::rotateEyes(
    rosbridge::ALLedsRotateEyes::Request  &req,
    rosbridge::ALLedsRotateEyes::Response &res)
{
  try {
    fProxy->rotateEyes(req.rgb, req.timeForRotation, req.totalDuration);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::setIntensity(
    rosbridge::ALLedsSetIntensity::Request  &req,
    rosbridge::ALLedsSetIntensity::Response &res)
{
  try {
    fProxy->setIntensity(req.name, req.intensity);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLeds::version(
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
#include "alrosalleds_cpp.inc"
}
