/*
* Generated for ALMemory
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalmemory_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/almemoryproxy.h>

namespace AL {

void ALRosALMemory::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALMemory"))
  {
    return;
  }
  fProxy = ALPtr<ALMemoryProxy> (new ALMemoryProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/declareEventString"), &ALRosALMemory::declareEventString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/declareEvent"), &ALRosALMemory::declareEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/exit"), &ALRosALMemory::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getBrokerName"), &ALRosALMemory::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getEventList"), &ALRosALMemory::getEventList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getExtractorEvent"), &ALRosALMemory::getExtractorEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getMethodList"), &ALRosALMemory::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getMicroEventList"), &ALRosALMemory::getMicroEventList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getSubscribers"), &ALRosALMemory::getSubscribers, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getType"), &ALRosALMemory::getType, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getUsage"), &ALRosALMemory::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertDataInt"), &ALRosALMemory::insertDataInt, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertDataFloat"), &ALRosALMemory::insertDataFloat, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertDataString"), &ALRosALMemory::insertDataString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/ping"), &ALRosALMemory::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/removeData"), &ALRosALMemory::removeData, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/removeMicroEvent"), &ALRosALMemory::removeMicroEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/subscribeToEvent"), &ALRosALMemory::subscribeToEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/subscribeToEventString"), &ALRosALMemory::subscribeToEventString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/subscribeToMicroEvent"), &ALRosALMemory::subscribeToMicroEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/unregisterModuleReference"), &ALRosALMemory::unregisterModuleReference, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/unsubscribeOnDataChange"), &ALRosALMemory::unsubscribeOnDataChange, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/unsubscribeToEvent"), &ALRosALMemory::unsubscribeToEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/unsubscribeToMicroEvent"), &ALRosALMemory::unsubscribeToMicroEvent, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/version"), &ALRosALMemory::version, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/waitOnCondition"), &ALRosALMemory::waitOnCondition, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/waitSynchronizer"), &ALRosALMemory::waitSynchronizer, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALMemory::declareEventString(
    rosbridge::ALMemoryDeclareEventString::Request  &req,
    rosbridge::ALMemoryDeclareEventString::Response &res)
{
  try {
    fProxy->declareEvent(req.eventName, req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.declareEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::declareEvent(
    rosbridge::ALMemoryDeclareEvent::Request  &req,
    rosbridge::ALMemoryDeclareEvent::Response &res)
{
  try {
    fProxy->declareEvent(req.eventName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.declareEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getEventList(
    rosbridge::ALMemoryGetEventList::Request  &req,
    rosbridge::ALMemoryGetEventList::Response &res)
{
  try {
    res.value = fProxy->getEventList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getEventList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getExtractorEvent(
    rosbridge::ALMemoryGetExtractorEvent::Request  &req,
    rosbridge::ALMemoryGetExtractorEvent::Response &res)
{
  try {
    res.value = fProxy->getExtractorEvent(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getExtractorEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getMicroEventList(
    rosbridge::ALMemoryGetMicroEventList::Request  &req,
    rosbridge::ALMemoryGetMicroEventList::Response &res)
{
  try {
    res.value = fProxy->getMicroEventList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getMicroEventList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getSubscribers(
    rosbridge::ALMemoryGetSubscribers::Request  &req,
    rosbridge::ALMemoryGetSubscribers::Response &res)
{
  try {
    res.value = fProxy->getSubscribers(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getSubscribers failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getType(
    rosbridge::ALMemoryGetType::Request  &req,
    rosbridge::ALMemoryGetType::Response &res)
{
  try {
    res.value = fProxy->getType(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getType failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::insertDataInt(
    rosbridge::ALMemoryInsertDataInt::Request  &req,
    rosbridge::ALMemoryInsertDataInt::Response &res)
{
  try {
    fProxy->insertData(req.name, req.data);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.insertData failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::insertDataFloat(
    rosbridge::ALMemoryInsertDataFloat::Request  &req,
    rosbridge::ALMemoryInsertDataFloat::Response &res)
{
  try {
    fProxy->insertData(req.name, req.data);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.insertData failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::insertDataString(
    rosbridge::ALMemoryInsertDataString::Request  &req,
    rosbridge::ALMemoryInsertDataString::Response &res)
{
  try {
    fProxy->insertData(req.name, req.data);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.insertData failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::removeData(
    rosbridge::ALMemoryRemoveData::Request  &req,
    rosbridge::ALMemoryRemoveData::Response &res)
{
  try {
    fProxy->removeData(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.removeData failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::removeMicroEvent(
    rosbridge::ALMemoryRemoveMicroEvent::Request  &req,
    rosbridge::ALMemoryRemoveMicroEvent::Response &res)
{
  try {
    fProxy->removeMicroEvent(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.removeMicroEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::subscribeToEvent(
    rosbridge::ALMemorySubscribeToEvent::Request  &req,
    rosbridge::ALMemorySubscribeToEvent::Response &res)
{
  try {
    fProxy->subscribeToEvent(req.name, req.moduleName, req.callback);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.subscribeToEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::subscribeToEventString(
    rosbridge::ALMemorySubscribeToEventString::Request  &req,
    rosbridge::ALMemorySubscribeToEventString::Response &res)
{
  try {
    fProxy->subscribeToEvent(req.name, req.moduleName, req.message, req.callback);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.subscribeToEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::subscribeToMicroEvent(
    rosbridge::ALMemorySubscribeToMicroEvent::Request  &req,
    rosbridge::ALMemorySubscribeToMicroEvent::Response &res)
{
  try {
    fProxy->subscribeToMicroEvent(req.name, req.moduleName, req.message, req.callback);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.subscribeToMicroEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::unregisterModuleReference(
    rosbridge::ALMemoryUnregisterModuleReference::Request  &req,
    rosbridge::ALMemoryUnregisterModuleReference::Response &res)
{
  try {
    fProxy->unregisterModuleReference(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.unregisterModuleReference failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::unsubscribeOnDataChange(
    rosbridge::ALMemoryUnsubscribeOnDataChange::Request  &req,
    rosbridge::ALMemoryUnsubscribeOnDataChange::Response &res)
{
  try {
    fProxy->unsubscribeOnDataChange(req.name, req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.unsubscribeOnDataChange failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::unsubscribeToEvent(
    rosbridge::ALMemoryUnsubscribeToEvent::Request  &req,
    rosbridge::ALMemoryUnsubscribeToEvent::Response &res)
{
  try {
    fProxy->unsubscribeToEvent(req.name, req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.unsubscribeToEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::unsubscribeToMicroEvent(
    rosbridge::ALMemoryUnsubscribeToMicroEvent::Request  &req,
    rosbridge::ALMemoryUnsubscribeToMicroEvent::Response &res)
{
  try {
    fProxy->unsubscribeToMicroEvent(req.name, req.moduleName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.unsubscribeToMicroEvent failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.version failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::waitOnCondition(
    rosbridge::ALMemoryWaitOnCondition::Request  &req,
    rosbridge::ALMemoryWaitOnCondition::Response &res)
{
  try {
    fProxy->waitOnCondition(req.dataName, req.condition);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.waitOnCondition failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::waitSynchronizer(
    rosbridge::ALMemoryWaitSynchronizer::Request  &req,
    rosbridge::ALMemoryWaitSynchronizer::Response &res)
{
  try {
    fProxy->waitSynchronizer(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.waitSynchronizer failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalmemory_cpp.inc"
}
