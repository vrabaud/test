/*
* Generated for ALRedBallTracker
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalredballtracker_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alredballtrackerproxy.h>

namespace AL {

void ALRosALRedBallTracker::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALRedBallTracker"))
  {
    return;
  }
  fProxy = ALPtr<ALRedBallTrackerProxy> (new ALRedBallTrackerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/exit"), &ALRosALRedBallTracker::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getBrokerName"), &ALRosALRedBallTracker::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getMethodList"), &ALRosALRedBallTracker::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getPosition"), &ALRosALRedBallTracker::getPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getUsage"), &ALRosALRedBallTracker::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/isActive"), &ALRosALRedBallTracker::isActive, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/isNewData"), &ALRosALRedBallTracker::isNewData, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/ping"), &ALRosALRedBallTracker::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/setWholeBodyOn"), &ALRosALRedBallTracker::setWholeBodyOn, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/startTracker"), &ALRosALRedBallTracker::startTracker, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/stopTracker"), &ALRosALRedBallTracker::stopTracker, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/version"), &ALRosALRedBallTracker::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALRedBallTracker::exit(
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

bool ALRosALRedBallTracker::getBrokerName(
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

bool ALRosALRedBallTracker::getMethodList(
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

bool ALRosALRedBallTracker::getPosition(
    rosbridge::ALRedBallTrackerGetPosition::Request  &req,
    rosbridge::ALRedBallTrackerGetPosition::Response &res)
{
  try {
    res.value = fProxy->getPosition();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::getUsage(
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

bool ALRosALRedBallTracker::isActive(
    rosbridge::ALRedBallTrackerIsActive::Request  &req,
    rosbridge::ALRedBallTrackerIsActive::Response &res)
{
  try {
    res.value = fProxy->isActive();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::isNewData(
    rosbridge::ALRedBallTrackerIsNewData::Request  &req,
    rosbridge::ALRedBallTrackerIsNewData::Response &res)
{
  try {
    res.value = fProxy->isNewData();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::ping(
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

bool ALRosALRedBallTracker::setWholeBodyOn(
    rosbridge::ALRedBallTrackerSetWholeBodyOn::Request  &req,
    rosbridge::ALRedBallTrackerSetWholeBodyOn::Response &res)
{
  try {
    fProxy->setWholeBodyOn(req.pWholeBodyOn);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::startTracker(
    rosbridge::ALRedBallTrackerStartTracker::Request  &req,
    rosbridge::ALRedBallTrackerStartTracker::Response &res)
{
  try {
    fProxy->startTracker();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::stopTracker(
    rosbridge::ALRedBallTrackerStopTracker::Request  &req,
    rosbridge::ALRedBallTrackerStopTracker::Response &res)
{
  try {
    fProxy->stopTracker();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALRedBallTracker::version(
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
#include "alrosalredballtracker_cpp.inc"
}
