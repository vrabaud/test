/*
* Generated for ALMotion
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalmotion_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/almotionproxy.h>

namespace AL {

void ALRosALMotion::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALMotion"))
  {
    return;
  }
  fProxy = ALPtr<ALMotionProxy> (new ALMotionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/areResourcesAvailable"), &ALRosALMotion::areResourcesAvailable, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/changePosition"), &ALRosALMotion::changePosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/changeTransform"), &ALRosALMotion::changeTransform, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/closeHand"), &ALRosALMotion::closeHand, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/exit"), &ALRosALMotion::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getBrokerName"), &ALRosALMotion::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getCOM"), &ALRosALMotion::getCOM, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getJointNames"), &ALRosALMotion::getJointNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getMass"), &ALRosALMotion::getMass, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getMethodList"), &ALRosALMotion::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getPosition"), &ALRosALMotion::getPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getRobotPosition"), &ALRosALMotion::getRobotPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getRobotVelocity"), &ALRosALMotion::getRobotVelocity, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getSummary"), &ALRosALMotion::getSummary, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getTransform"), &ALRosALMotion::getTransform, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getUsage"), &ALRosALMotion::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/killAll"), &ALRosALMotion::killAll, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/killTask"), &ALRosALMotion::killTask, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/killTasksUsingResources"), &ALRosALMotion::killTasksUsingResources, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/killWalk"), &ALRosALMotion::killWalk, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/openHand"), &ALRosALMotion::openHand, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/ping"), &ALRosALMotion::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setPosition"), &ALRosALMotion::setPosition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setTransform"), &ALRosALMotion::setTransform, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setWalkArmsEnable"), &ALRosALMotion::setWalkArmsEnable, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setWalkTargetVelocity"), &ALRosALMotion::setWalkTargetVelocity, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/stepTo"), &ALRosALMotion::stepTo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/updateTrackerTarget"), &ALRosALMotion::updateTrackerTarget, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/version"), &ALRosALMotion::version, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/waitUntilWalkIsFinished"), &ALRosALMotion::waitUntilWalkIsFinished, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/walkIsActive"), &ALRosALMotion::walkIsActive, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/walkTo"), &ALRosALMotion::walkTo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/wbEnable"), &ALRosALMotion::wbEnable, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/wbEnableBalanceConstraint"), &ALRosALMotion::wbEnableBalanceConstraint, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/wbEnableEffectorControl"), &ALRosALMotion::wbEnableEffectorControl, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/wbFootState"), &ALRosALMotion::wbFootState, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALMotion::areResourcesAvailable(
    rosbridge::ALMotionAreResourcesAvailable::Request  &req,
    rosbridge::ALMotionAreResourcesAvailable::Response &res)
{
  try {
    res.value = fProxy->areResourcesAvailable(req.resourceNames);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.areResourcesAvailable failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::changePosition(
    rosbridge::ALMotionChangePosition::Request  &req,
    rosbridge::ALMotionChangePosition::Response &res)
{
  try {
    fProxy->changePosition(req.effectorName, req.space, req.positionChange, req.fractionMaxSpeed, req.axisMask);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.changePosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::changeTransform(
    rosbridge::ALMotionChangeTransform::Request  &req,
    rosbridge::ALMotionChangeTransform::Response &res)
{
  try {
    fProxy->changeTransform(req.chainName, req.space, req.transform, req.fractionMaxSpeed, req.axisMask);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.changeTransform failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::closeHand(
    rosbridge::ALMotionCloseHand::Request  &req,
    rosbridge::ALMotionCloseHand::Response &res)
{
  try {
    fProxy->closeHand(req.handName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.closeHand failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getCOM(
    rosbridge::ALMotionGetCOM::Request  &req,
    rosbridge::ALMotionGetCOM::Response &res)
{
  try {
    res.value = fProxy->getCOM(req.pName, req.pSpace, req.pUseSensorValues);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getCOM failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getJointNames(
    rosbridge::ALMotionGetJointNames::Request  &req,
    rosbridge::ALMotionGetJointNames::Response &res)
{
  try {
    res.value = fProxy->getJointNames(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getJointNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getMass(
    rosbridge::ALMotionGetMass::Request  &req,
    rosbridge::ALMotionGetMass::Response &res)
{
  try {
    res.value = fProxy->getMass(req.pName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getMass failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getPosition(
    rosbridge::ALMotionGetPosition::Request  &req,
    rosbridge::ALMotionGetPosition::Response &res)
{
  try {
    res.value = fProxy->getPosition(req.name, req.space, req.useSensorValues);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getRobotPosition(
    rosbridge::ALMotionGetRobotPosition::Request  &req,
    rosbridge::ALMotionGetRobotPosition::Response &res)
{
  try {
    res.value = fProxy->getRobotPosition(req.useSensors);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getRobotPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getRobotVelocity(
    rosbridge::ALMotionGetRobotVelocity::Request  &req,
    rosbridge::ALMotionGetRobotVelocity::Response &res)
{
  try {
    res.value = fProxy->getRobotVelocity();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getRobotVelocity failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getSummary(
    rosbridge::ALMotionGetSummary::Request  &req,
    rosbridge::ALMotionGetSummary::Response &res)
{
  try {
    res.value = fProxy->getSummary();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getSummary failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getTransform(
    rosbridge::ALMotionGetTransform::Request  &req,
    rosbridge::ALMotionGetTransform::Response &res)
{
  try {
    res.value = fProxy->getTransform(req.name, req.space, req.useSensorValues);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getTransform failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::killAll(
    rosbridge::ALMotionKillAll::Request  &req,
    rosbridge::ALMotionKillAll::Response &res)
{
  try {
    fProxy->killAll();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.killAll failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::killTask(
    rosbridge::ALMotionKillTask::Request  &req,
    rosbridge::ALMotionKillTask::Response &res)
{
  try {
    res.value = fProxy->killTask(req.motionTaskID);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.killTask failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::killTasksUsingResources(
    rosbridge::ALMotionKillTasksUsingResources::Request  &req,
    rosbridge::ALMotionKillTasksUsingResources::Response &res)
{
  try {
    fProxy->killTasksUsingResources(req.resourceNames);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.killTasksUsingResources failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::killWalk(
    rosbridge::ALMotionKillWalk::Request  &req,
    rosbridge::ALMotionKillWalk::Response &res)
{
  try {
    fProxy->killWalk();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.killWalk failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::openHand(
    rosbridge::ALMotionOpenHand::Request  &req,
    rosbridge::ALMotionOpenHand::Response &res)
{
  try {
    fProxy->openHand(req.handName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.openHand failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::setPosition(
    rosbridge::ALMotionSetPosition::Request  &req,
    rosbridge::ALMotionSetPosition::Response &res)
{
  try {
    fProxy->setPosition(req.chainName, req.space, req.position, req.fractionMaxSpeed, req.axisMask);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.setPosition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::setTransform(
    rosbridge::ALMotionSetTransform::Request  &req,
    rosbridge::ALMotionSetTransform::Response &res)
{
  try {
    fProxy->setTransform(req.chainName, req.space, req.transform, req.fractionMaxSpeed, req.axisMask);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.setTransform failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::setWalkArmsEnable(
    rosbridge::ALMotionSetWalkArmsEnable::Request  &req,
    rosbridge::ALMotionSetWalkArmsEnable::Response &res)
{
  try {
    fProxy->setWalkArmsEnable(req.leftArmEnable, req.rightArmEnable);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.setWalkArmsEnable failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::setWalkTargetVelocity(
    rosbridge::ALMotionSetWalkTargetVelocity::Request  &req,
    rosbridge::ALMotionSetWalkTargetVelocity::Response &res)
{
  try {
    fProxy->setWalkTargetVelocity(req.x, req.y, req.theta, req.frequency);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.setWalkTargetVelocity failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::stepTo(
    rosbridge::ALMotionStepTo::Request  &req,
    rosbridge::ALMotionStepTo::Response &res)
{
  try {
    fProxy->stepTo(req.legName, req.x, req.y, req.theta);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.stepTo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::updateTrackerTarget(
    rosbridge::ALMotionUpdateTrackerTarget::Request  &req,
    rosbridge::ALMotionUpdateTrackerTarget::Response &res)
{
  try {
    fProxy->updateTrackerTarget(req.pTargetPositionWy, req.pTargetPositionWz, req.pTimeSinceDetectionMs, req.pUseOfWholeBody);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.updateTrackerTarget failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.version failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::waitUntilWalkIsFinished(
    rosbridge::ALMotionWaitUntilWalkIsFinished::Request  &req,
    rosbridge::ALMotionWaitUntilWalkIsFinished::Response &res)
{
  try {
    fProxy->waitUntilWalkIsFinished();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.waitUntilWalkIsFinished failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::walkIsActive(
    rosbridge::ALMotionWalkIsActive::Request  &req,
    rosbridge::ALMotionWalkIsActive::Response &res)
{
  try {
    res.value = fProxy->walkIsActive();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.walkIsActive failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::walkTo(
    rosbridge::ALMotionWalkTo::Request  &req,
    rosbridge::ALMotionWalkTo::Response &res)
{
  try {
    fProxy->walkTo(req.x, req.y, req.theta);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.walkTo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::wbEnable(
    rosbridge::ALMotionWbEnable::Request  &req,
    rosbridge::ALMotionWbEnable::Response &res)
{
  try {
    fProxy->wbEnable(req.isEnabled);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.wbEnable failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::wbEnableBalanceConstraint(
    rosbridge::ALMotionWbEnableBalanceConstraint::Request  &req,
    rosbridge::ALMotionWbEnableBalanceConstraint::Response &res)
{
  try {
    fProxy->wbEnableBalanceConstraint(req.isEnable, req.supportLeg);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.wbEnableBalanceConstraint failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::wbEnableEffectorControl(
    rosbridge::ALMotionWbEnableEffectorControl::Request  &req,
    rosbridge::ALMotionWbEnableEffectorControl::Response &res)
{
  try {
    fProxy->wbEnableEffectorControl(req.effectorName, req.isEnabled);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.wbEnableEffectorControl failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMotion::wbFootState(
    rosbridge::ALMotionWbFootState::Request  &req,
    rosbridge::ALMotionWbFootState::Response &res)
{
  try {
    fProxy->wbFootState(req.stateName, req.supportLeg);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.wbFootState failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalmotion_cpp.inc"
}
