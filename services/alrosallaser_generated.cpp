/*
* Generated for ALLaser
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosallaser_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/allaserproxy.h>

namespace AL {

void ALRosALLaser::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALLaser"))
  {
    return;
  }
  fProxy = ALPtr<ALLaserProxy> (new ALLaserProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/exit"), &ALRosALLaser::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/getBrokerName"), &ALRosALLaser::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/getMethodList"), &ALRosALLaser::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/getUsage"), &ALRosALLaser::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/laserOFF"), &ALRosALLaser::laserOFF, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/laserON"), &ALRosALLaser::laserON, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/ping"), &ALRosALLaser::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/version"), &ALRosALLaser::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALLaser::exit(
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

bool ALRosALLaser::getBrokerName(
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

bool ALRosALLaser::getMethodList(
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

bool ALRosALLaser::getUsage(
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

bool ALRosALLaser::laserOFF(
    rosbridge::ALLaserLaserOFF::Request  &req,
    rosbridge::ALLaserLaserOFF::Response &res)
{
  try {
    fProxy->laserOFF();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLaser::laserON(
    rosbridge::ALLaserLaserON::Request  &req,
    rosbridge::ALLaserLaserON::Response &res)
{
  try {
    fProxy->laserON();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALLaser::ping(
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

bool ALRosALLaser::version(
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
#include "alrosallaser_cpp.inc"
}
