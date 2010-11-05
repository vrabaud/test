/*
* Generated for ALFrameManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalframemanager_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alframemanagerproxy.h>

namespace AL {

void ALRosALFrameManager::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALFrameManager"))
  {
    return;
  }
  fProxy = ALPtr<ALFrameManagerProxy> (new ALFrameManagerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/cleanBehaviors"), &ALRosALFrameManager::cleanBehaviors, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/completeBehavior"), &ALRosALFrameManager::completeBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/createAndPlayTimeline"), &ALRosALFrameManager::createAndPlayTimeline, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/deleteBehavior"), &ALRosALFrameManager::deleteBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/exit"), &ALRosALFrameManager::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/exitBehavior"), &ALRosALFrameManager::exitBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getBehaviorPath"), &ALRosALFrameManager::getBehaviorPath, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getBrokerName"), &ALRosALFrameManager::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getMethodList"), &ALRosALFrameManager::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getMotionLength"), &ALRosALFrameManager::getMotionLength, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getTimelineFps"), &ALRosALFrameManager::getTimelineFps, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getUsage"), &ALRosALFrameManager::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/gotoAndPlayString"), &ALRosALFrameManager::gotoAndPlayString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/gotoAndPlay"), &ALRosALFrameManager::gotoAndPlay, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/gotoAndStopString"), &ALRosALFrameManager::gotoAndStopString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/gotoAndStop"), &ALRosALFrameManager::gotoAndStop, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/newBehavior"), &ALRosALFrameManager::newBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/newBehaviorFromChoregraphe"), &ALRosALFrameManager::newBehaviorFromChoregraphe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/newBehaviorFromFile"), &ALRosALFrameManager::newBehaviorFromFile, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onPythonError"), &ALRosALFrameManager::onPythonError, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onPythonPrint"), &ALRosALFrameManager::onPythonPrint, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onRubyError"), &ALRosALFrameManager::onRubyError, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onRubyPrint"), &ALRosALFrameManager::onRubyPrint, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onUrbiError"), &ALRosALFrameManager::onUrbiError, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/onUrbiPrint"), &ALRosALFrameManager::onUrbiPrint, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/ping"), &ALRosALFrameManager::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/playBehavior"), &ALRosALFrameManager::playBehavior, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/playDefaultProject"), &ALRosALFrameManager::playDefaultProject, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/playTimeline"), &ALRosALFrameManager::playTimeline, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/setTimelineFps"), &ALRosALFrameManager::setTimelineFps, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/stopTimeline"), &ALRosALFrameManager::stopTimeline, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/version"), &ALRosALFrameManager::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALFrameManager::cleanBehaviors(
    rosbridge::ALFrameManagerCleanBehaviors::Request  &req,
    rosbridge::ALFrameManagerCleanBehaviors::Response &res)
{
  try {
    fProxy->cleanBehaviors();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::completeBehavior(
    rosbridge::ALFrameManagerCompleteBehavior::Request  &req,
    rosbridge::ALFrameManagerCompleteBehavior::Response &res)
{
  try {
    fProxy->completeBehavior(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::createAndPlayTimeline(
    rosbridge::ALFrameManagerCreateAndPlayTimeline::Request  &req,
    rosbridge::ALFrameManagerCreateAndPlayTimeline::Response &res)
{
  try {
    res.value = fProxy->createAndPlayTimeline(req.xmlFile);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::deleteBehavior(
    rosbridge::ALFrameManagerDeleteBehavior::Request  &req,
    rosbridge::ALFrameManagerDeleteBehavior::Response &res)
{
  try {
    fProxy->deleteBehavior(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::exit(
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

bool ALRosALFrameManager::exitBehavior(
    rosbridge::ALFrameManagerExitBehavior::Request  &req,
    rosbridge::ALFrameManagerExitBehavior::Response &res)
{
  try {
    fProxy->exitBehavior(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::getBehaviorPath(
    rosbridge::ALFrameManagerGetBehaviorPath::Request  &req,
    rosbridge::ALFrameManagerGetBehaviorPath::Response &res)
{
  try {
    res.value = fProxy->getBehaviorPath(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::getBrokerName(
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

bool ALRosALFrameManager::getMethodList(
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

bool ALRosALFrameManager::getMotionLength(
    rosbridge::ALFrameManagerGetMotionLength::Request  &req,
    rosbridge::ALFrameManagerGetMotionLength::Response &res)
{
  try {
    res.value = fProxy->getMotionLength(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::getTimelineFps(
    rosbridge::ALFrameManagerGetTimelineFps::Request  &req,
    rosbridge::ALFrameManagerGetTimelineFps::Response &res)
{
  try {
    res.value = fProxy->getTimelineFps(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::getUsage(
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

bool ALRosALFrameManager::gotoAndPlayString(
    rosbridge::ALFrameManagerGotoAndPlayString::Request  &req,
    rosbridge::ALFrameManagerGotoAndPlayString::Response &res)
{
  try {
    fProxy->gotoAndPlay(req.id, req.frame);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::gotoAndPlay(
    rosbridge::ALFrameManagerGotoAndPlay::Request  &req,
    rosbridge::ALFrameManagerGotoAndPlay::Response &res)
{
  try {
    fProxy->gotoAndPlay(req.id, req.frame);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::gotoAndStopString(
    rosbridge::ALFrameManagerGotoAndStopString::Request  &req,
    rosbridge::ALFrameManagerGotoAndStopString::Response &res)
{
  try {
    fProxy->gotoAndStop(req.id, req.frame);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::gotoAndStop(
    rosbridge::ALFrameManagerGotoAndStop::Request  &req,
    rosbridge::ALFrameManagerGotoAndStop::Response &res)
{
  try {
    fProxy->gotoAndStop(req.id, req.frame);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::newBehavior(
    rosbridge::ALFrameManagerNewBehavior::Request  &req,
    rosbridge::ALFrameManagerNewBehavior::Response &res)
{
  try {
    res.value = fProxy->newBehavior(req.path, req.xmlFile);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::newBehaviorFromChoregraphe(
    rosbridge::ALFrameManagerNewBehaviorFromChoregraphe::Request  &req,
    rosbridge::ALFrameManagerNewBehaviorFromChoregraphe::Response &res)
{
  try {
    res.value = fProxy->newBehaviorFromChoregraphe();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::newBehaviorFromFile(
    rosbridge::ALFrameManagerNewBehaviorFromFile::Request  &req,
    rosbridge::ALFrameManagerNewBehaviorFromFile::Response &res)
{
  try {
    res.value = fProxy->newBehaviorFromFile(req.xmlFilePath, req.path);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onPythonError(
    rosbridge::ALFrameManagerOnPythonError::Request  &req,
    rosbridge::ALFrameManagerOnPythonError::Response &res)
{
  try {
    fProxy->onPythonError(req.boxname, req.methodname, req.error);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onPythonPrint(
    rosbridge::ALFrameManagerOnPythonPrint::Request  &req,
    rosbridge::ALFrameManagerOnPythonPrint::Response &res)
{
  try {
    fProxy->onPythonPrint(req.message);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onRubyError(
    rosbridge::ALFrameManagerOnRubyError::Request  &req,
    rosbridge::ALFrameManagerOnRubyError::Response &res)
{
  try {
    fProxy->onRubyError(req.boxname, req.methodname, req.error);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onRubyPrint(
    rosbridge::ALFrameManagerOnRubyPrint::Request  &req,
    rosbridge::ALFrameManagerOnRubyPrint::Response &res)
{
  try {
    fProxy->onRubyPrint(req.message);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onUrbiError(
    rosbridge::ALFrameManagerOnUrbiError::Request  &req,
    rosbridge::ALFrameManagerOnUrbiError::Response &res)
{
  try {
    fProxy->onUrbiError(req.boxname, req.methodname, req.location, req.error);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::onUrbiPrint(
    rosbridge::ALFrameManagerOnUrbiPrint::Request  &req,
    rosbridge::ALFrameManagerOnUrbiPrint::Response &res)
{
  try {
    fProxy->onUrbiPrint(req.message);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::ping(
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

bool ALRosALFrameManager::playBehavior(
    rosbridge::ALFrameManagerPlayBehavior::Request  &req,
    rosbridge::ALFrameManagerPlayBehavior::Response &res)
{
  try {
    fProxy->playBehavior(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::playDefaultProject(
    rosbridge::ALFrameManagerPlayDefaultProject::Request  &req,
    rosbridge::ALFrameManagerPlayDefaultProject::Response &res)
{
  try {
    fProxy->playDefaultProject();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::playTimeline(
    rosbridge::ALFrameManagerPlayTimeline::Request  &req,
    rosbridge::ALFrameManagerPlayTimeline::Response &res)
{
  try {
    fProxy->playTimeline(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::setTimelineFps(
    rosbridge::ALFrameManagerSetTimelineFps::Request  &req,
    rosbridge::ALFrameManagerSetTimelineFps::Response &res)
{
  try {
    fProxy->setTimelineFps(req.id, req.fps);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::stopTimeline(
    rosbridge::ALFrameManagerStopTimeline::Request  &req,
    rosbridge::ALFrameManagerStopTimeline::Response &res)
{
  try {
    fProxy->stopTimeline(req.id);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALFrameManager::version(
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
#include "alrosalframemanager_cpp.inc"
}
