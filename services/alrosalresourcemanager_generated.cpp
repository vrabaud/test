/*
* Generated for ALResourceManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalresourcemanager_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alresourcemanagerproxy.h>

namespace AL {

void ALRosALResourceManager::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALResourceManager"))
  {
    return;
  }
  fProxy = ALPtr<ALResourceManagerProxy> (new ALResourceManagerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/areResourcesFree"), &ALRosALResourceManager::areResourcesFree, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/areResourcesOwnedBy"), &ALRosALResourceManager::areResourcesOwnedBy, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/createResource"), &ALRosALResourceManager::createResource, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/enableStateResource"), &ALRosALResourceManager::enableStateResource, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/exit"), &ALRosALResourceManager::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/getBrokerName"), &ALRosALResourceManager::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/getMethodList"), &ALRosALResourceManager::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/getUsage"), &ALRosALResourceManager::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/ping"), &ALRosALResourceManager::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/releaseResource"), &ALRosALResourceManager::releaseResource, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/releaseResources"), &ALRosALResourceManager::releaseResources, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/version"), &ALRosALResourceManager::version, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALResourceManager/waitForResource"), &ALRosALResourceManager::waitForResource, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALResourceManager::areResourcesFree(
    rosbridge::ALResourceManagerAreResourcesFree::Request  &req,
    rosbridge::ALResourceManagerAreResourcesFree::Response &res)
{
  try {
    res.value = fProxy->areResourcesFree(req.resourceNames);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.areResourcesFree failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::areResourcesOwnedBy(
    rosbridge::ALResourceManagerAreResourcesOwnedBy::Request  &req,
    rosbridge::ALResourceManagerAreResourcesOwnedBy::Response &res)
{
  try {
    res.value = fProxy->areResourcesOwnedBy(req.resourceNameList, req.ownerName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.areResourcesOwnedBy failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::createResource(
    rosbridge::ALResourceManagerCreateResource::Request  &req,
    rosbridge::ALResourceManagerCreateResource::Response &res)
{
  try {
    fProxy->createResource(req.resourceName, req.parentResourceName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.createResource failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::enableStateResource(
    rosbridge::ALResourceManagerEnableStateResource::Request  &req,
    rosbridge::ALResourceManagerEnableStateResource::Response &res)
{
  try {
    fProxy->enableStateResource(req.resourceName, req.enabled);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.enableStateResource failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::releaseResource(
    rosbridge::ALResourceManagerReleaseResource::Request  &req,
    rosbridge::ALResourceManagerReleaseResource::Response &res)
{
  try {
    fProxy->releaseResource(req.resourceName, req.ownerName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.releaseResource failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::releaseResources(
    rosbridge::ALResourceManagerReleaseResources::Request  &req,
    rosbridge::ALResourceManagerReleaseResources::Response &res)
{
  try {
    fProxy->releaseResources(req.resourceNames, req.ownerName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.releaseResources failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.version failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALResourceManager::waitForResource(
    rosbridge::ALResourceManagerWaitForResource::Request  &req,
    rosbridge::ALResourceManagerWaitForResource::Response &res)
{
  try {
    fProxy->waitForResource(req.ressourceName, req.ownerName, req.callbackName, req.timeoutSeconds);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALResourceManager.waitForResource failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalresourcemanager_cpp.inc"
}
