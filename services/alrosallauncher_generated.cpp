/*
* Generated for ALLauncher
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosallauncher_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/allauncherproxy.h>

namespace AL {

void ALRosALLauncher::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALLauncher"))
  {
    return;
  }
  fProxy = ALPtr<ALLauncherProxy> (new ALLauncherProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/exit"), &ALRosALLauncher::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getBrokerName"), &ALRosALLauncher::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getGlobalModuleList"), &ALRosALLauncher::getGlobalModuleList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getMethodList"), &ALRosALLauncher::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getUsage"), &ALRosALLauncher::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/isModulePresent"), &ALRosALLauncher::isModulePresent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/launchExecutable"), &ALRosALLauncher::launchExecutable, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/launchLocal"), &ALRosALLauncher::launchLocal, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/launchPythonModule"), &ALRosALLauncher::launchPythonModule, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/launchScript"), &ALRosALLauncher::launchScript, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/ping"), &ALRosALLauncher::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/version"), &ALRosALLauncher::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALLauncher::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::getGlobalModuleList(
    rosbridge::ALLauncherGetGlobalModuleList::Request  &req,
    rosbridge::ALLauncherGetGlobalModuleList::Response &res)
{
  try {
    res.value = fProxy->getGlobalModuleList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.getGlobalModuleList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::isModulePresent(
    rosbridge::ALLauncherIsModulePresent::Request  &req,
    rosbridge::ALLauncherIsModulePresent::Response &res)
{
  try {
    res.value = fProxy->isModulePresent(req.strPartOfModuleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.isModulePresent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::launchExecutable(
    rosbridge::ALLauncherLaunchExecutable::Request  &req,
    rosbridge::ALLauncherLaunchExecutable::Response &res)
{
  try {
    res.value = fProxy->launchExecutable(req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.launchExecutable failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::launchLocal(
    rosbridge::ALLauncherLaunchLocal::Request  &req,
    rosbridge::ALLauncherLaunchLocal::Response &res)
{
  try {
    res.value = fProxy->launchLocal(req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.launchLocal failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::launchPythonModule(
    rosbridge::ALLauncherLaunchPythonModule::Request  &req,
    rosbridge::ALLauncherLaunchPythonModule::Response &res)
{
  try {
    res.value = fProxy->launchPythonModule(req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.launchPythonModule failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::launchScript(
    rosbridge::ALLauncherLaunchScript::Request  &req,
    rosbridge::ALLauncherLaunchScript::Response &res)
{
  try {
    res.value = fProxy->launchScript(req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.launchScript failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLauncher::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLauncher.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosallauncher_cpp.inc"
}
