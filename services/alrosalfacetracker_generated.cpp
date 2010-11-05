/*
* Generated for ALFaceTracker
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalfacetracker_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alfacetrackerproxy.h>

namespace AL {

void ALRosALFaceTracker::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALFaceTracker"))
  {
    return;
  }
  fProxy = ALPtr<ALFaceTrackerProxy> (new ALFaceTrackerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/exit"), &ALRosALFaceTracker::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/getBrokerName"), &ALRosALFaceTracker::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/getMethodList"), &ALRosALFaceTracker::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/getPosition"), &ALRosALFaceTracker::getPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/getUsage"), &ALRosALFaceTracker::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/isActive"), &ALRosALFaceTracker::isActive, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/isNewData"), &ALRosALFaceTracker::isNewData, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/ping"), &ALRosALFaceTracker::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/setWholeBodyOn"), &ALRosALFaceTracker::setWholeBodyOn, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/startTracker"), &ALRosALFaceTracker::startTracker, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/stopTracker"), &ALRosALFaceTracker::stopTracker, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceTracker/version"), &ALRosALFaceTracker::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALFaceTracker::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::getPosition(
    rosbridge::ALFaceTrackerGetPosition::Request  &req,
    rosbridge::ALFaceTrackerGetPosition::Response &res)
{
  try {
    res.value = fProxy->getPosition();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.getPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::isActive(
    rosbridge::ALFaceTrackerIsActive::Request  &req,
    rosbridge::ALFaceTrackerIsActive::Response &res)
{
  try {
    res.value = fProxy->isActive();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.isActive failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::isNewData(
    rosbridge::ALFaceTrackerIsNewData::Request  &req,
    rosbridge::ALFaceTrackerIsNewData::Response &res)
{
  try {
    res.value = fProxy->isNewData();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.isNewData failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::setWholeBodyOn(
    rosbridge::ALFaceTrackerSetWholeBodyOn::Request  &req,
    rosbridge::ALFaceTrackerSetWholeBodyOn::Response &res)
{
  try {
    fProxy->setWholeBodyOn(req.pWholeBodyOn);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.setWholeBodyOn failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::startTracker(
    rosbridge::ALFaceTrackerStartTracker::Request  &req,
    rosbridge::ALFaceTrackerStartTracker::Response &res)
{
  try {
    fProxy->startTracker();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.startTracker failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::stopTracker(
    rosbridge::ALFaceTrackerStopTracker::Request  &req,
    rosbridge::ALFaceTrackerStopTracker::Response &res)
{
  try {
    fProxy->stopTracker();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.stopTracker failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFaceTracker::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceTracker.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalfacetracker_cpp.inc"
}
