/*
* Generated for ALFileManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalfilemanager_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alfilemanagerproxy.h>

namespace AL {

void ALRosALFileManager::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALFileManager"))
  {
    return;
  }
  fProxy = ALPtr<ALFileManagerProxy> (new ALFileManagerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/dataFileExists"), &ALRosALFileManager::dataFileExists, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/exit"), &ALRosALFileManager::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/fileExists"), &ALRosALFileManager::fileExists, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getBrokerName"), &ALRosALFileManager::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getFileCompletePath"), &ALRosALFileManager::getFileCompletePath, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getMethodList"), &ALRosALFileManager::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getSystemSharedFolderPath"), &ALRosALFileManager::getSystemSharedFolderPath, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getUsage"), &ALRosALFileManager::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getUserSharedFolderPath"), &ALRosALFileManager::getUserSharedFolderPath, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/ping"), &ALRosALFileManager::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/setUserSharedFolderPath"), &ALRosALFileManager::setUserSharedFolderPath, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/version"), &ALRosALFileManager::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALFileManager::dataFileExists(
    rosbridge::ALFileManagerDataFileExists::Request  &req,
    rosbridge::ALFileManagerDataFileExists::Response &res)
{
  try {
    res.value = fProxy->dataFileExists(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.dataFileExists failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::fileExists(
    rosbridge::ALFileManagerFileExists::Request  &req,
    rosbridge::ALFileManagerFileExists::Response &res)
{
  try {
    res.value = fProxy->fileExists(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.fileExists failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getFileCompletePath(
    rosbridge::ALFileManagerGetFileCompletePath::Request  &req,
    rosbridge::ALFileManagerGetFileCompletePath::Response &res)
{
  try {
    res.value = fProxy->getFileCompletePath(req.prefs);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getFileCompletePath failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getSystemSharedFolderPath(
    rosbridge::ALFileManagerGetSystemSharedFolderPath::Request  &req,
    rosbridge::ALFileManagerGetSystemSharedFolderPath::Response &res)
{
  try {
    res.value = fProxy->getSystemSharedFolderPath();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getSystemSharedFolderPath failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::getUserSharedFolderPath(
    rosbridge::ALFileManagerGetUserSharedFolderPath::Request  &req,
    rosbridge::ALFileManagerGetUserSharedFolderPath::Response &res)
{
  try {
    res.value = fProxy->getUserSharedFolderPath();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.getUserSharedFolderPath failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::setUserSharedFolderPath(
    rosbridge::ALFileManagerSetUserSharedFolderPath::Request  &req,
    rosbridge::ALFileManagerSetUserSharedFolderPath::Response &res)
{
  try {
    fProxy->setUserSharedFolderPath(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.setUserSharedFolderPath failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALFileManager::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFileManager.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalfilemanager_cpp.inc"
}
