/*
* Generated for ALBehaviorManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalbehaviormanager_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/albehaviormanagerproxy.h>

namespace AL {

void ALRosALBehaviorManager::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALBehaviorManager"))
  {
    return;
  }
  fProxy = ALPtr<ALBehaviorManagerProxy> (new ALBehaviorManagerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/addDefaultBehavior"), &ALRosALBehaviorManager::addDefaultBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/exit"), &ALRosALBehaviorManager::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getBrokerName"), &ALRosALBehaviorManager::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getDefaultBehaviors"), &ALRosALBehaviorManager::getDefaultBehaviors, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getInstalledBehaviors"), &ALRosALBehaviorManager::getInstalledBehaviors, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getMethodList"), &ALRosALBehaviorManager::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getRunningBehaviors"), &ALRosALBehaviorManager::getRunningBehaviors, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getUsage"), &ALRosALBehaviorManager::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/isBehaviorInstalled"), &ALRosALBehaviorManager::isBehaviorInstalled, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/isBehaviorRunning"), &ALRosALBehaviorManager::isBehaviorRunning, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/ping"), &ALRosALBehaviorManager::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/playDefaultProject"), &ALRosALBehaviorManager::playDefaultProject, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/preloadBehavior"), &ALRosALBehaviorManager::preloadBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/removeBehavior"), &ALRosALBehaviorManager::removeBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/removeDefaultBehavior"), &ALRosALBehaviorManager::removeDefaultBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/runBehavior"), &ALRosALBehaviorManager::runBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/stopAllBehaviors"), &ALRosALBehaviorManager::stopAllBehaviors, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/stopBehavior"), &ALRosALBehaviorManager::stopBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/version"), &ALRosALBehaviorManager::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALBehaviorManager::addDefaultBehavior(
    rosbridge::ALBehaviorManagerAddDefaultBehavior::Request  &req,
    rosbridge::ALBehaviorManagerAddDefaultBehavior::Response &res)
{
  try {
    fProxy->addDefaultBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.addDefaultBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getDefaultBehaviors(
    rosbridge::ALBehaviorManagerGetDefaultBehaviors::Request  &req,
    rosbridge::ALBehaviorManagerGetDefaultBehaviors::Response &res)
{
  try {
    res.value = fProxy->getDefaultBehaviors();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getDefaultBehaviors failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getInstalledBehaviors(
    rosbridge::ALBehaviorManagerGetInstalledBehaviors::Request  &req,
    rosbridge::ALBehaviorManagerGetInstalledBehaviors::Response &res)
{
  try {
    res.value = fProxy->getInstalledBehaviors();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getInstalledBehaviors failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getRunningBehaviors(
    rosbridge::ALBehaviorManagerGetRunningBehaviors::Request  &req,
    rosbridge::ALBehaviorManagerGetRunningBehaviors::Response &res)
{
  try {
    res.value = fProxy->getRunningBehaviors();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getRunningBehaviors failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::isBehaviorInstalled(
    rosbridge::ALBehaviorManagerIsBehaviorInstalled::Request  &req,
    rosbridge::ALBehaviorManagerIsBehaviorInstalled::Response &res)
{
  try {
    res.value = fProxy->isBehaviorInstalled(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.isBehaviorInstalled failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::isBehaviorRunning(
    rosbridge::ALBehaviorManagerIsBehaviorRunning::Request  &req,
    rosbridge::ALBehaviorManagerIsBehaviorRunning::Response &res)
{
  try {
    res.value = fProxy->isBehaviorRunning(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.isBehaviorRunning failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::playDefaultProject(
    rosbridge::ALBehaviorManagerPlayDefaultProject::Request  &req,
    rosbridge::ALBehaviorManagerPlayDefaultProject::Response &res)
{
  try {
    fProxy->playDefaultProject();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.playDefaultProject failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::preloadBehavior(
    rosbridge::ALBehaviorManagerPreloadBehavior::Request  &req,
    rosbridge::ALBehaviorManagerPreloadBehavior::Response &res)
{
  try {
    res.value = fProxy->preloadBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.preloadBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::removeBehavior(
    rosbridge::ALBehaviorManagerRemoveBehavior::Request  &req,
    rosbridge::ALBehaviorManagerRemoveBehavior::Response &res)
{
  try {
    res.value = fProxy->removeBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.removeBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::removeDefaultBehavior(
    rosbridge::ALBehaviorManagerRemoveDefaultBehavior::Request  &req,
    rosbridge::ALBehaviorManagerRemoveDefaultBehavior::Response &res)
{
  try {
    fProxy->removeDefaultBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.removeDefaultBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::runBehavior(
    rosbridge::ALBehaviorManagerRunBehavior::Request  &req,
    rosbridge::ALBehaviorManagerRunBehavior::Response &res)
{
  try {
    fProxy->runBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.runBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::stopAllBehaviors(
    rosbridge::ALBehaviorManagerStopAllBehaviors::Request  &req,
    rosbridge::ALBehaviorManagerStopAllBehaviors::Response &res)
{
  try {
    fProxy->stopAllBehaviors();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.stopAllBehaviors failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::stopBehavior(
    rosbridge::ALBehaviorManagerStopBehavior::Request  &req,
    rosbridge::ALBehaviorManagerStopBehavior::Response &res)
{
  try {
    fProxy->stopBehavior(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.stopBehavior failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBehaviorManager::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalbehaviormanager_cpp.inc"
}
