/*
* Generated for ALInfrared
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalinfrared_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alinfraredproxy.h>

namespace AL {

void ALRosALInfrared::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALInfrared"))
  {
    return;
  }
  fProxy = ALPtr<ALInfraredProxy> (new ALInfraredProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordAddKey"), &ALRosALInfrared::confRemoteRecordAddKey, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordCancel"), &ALRosALInfrared::confRemoteRecordCancel, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordGetStatus"), &ALRosALInfrared::confRemoteRecordGetStatus, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordNext"), &ALRosALInfrared::confRemoteRecordNext, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordSave"), &ALRosALInfrared::confRemoteRecordSave, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/confRemoteRecordStart"), &ALRosALInfrared::confRemoteRecordStart, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/exit"), &ALRosALInfrared::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/getBrokerName"), &ALRosALInfrared::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/getMethodList"), &ALRosALInfrared::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/getUsage"), &ALRosALInfrared::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/initReception"), &ALRosALInfrared::initReception, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/ping"), &ALRosALInfrared::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/send32"), &ALRosALInfrared::send32, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/send32Int"), &ALRosALInfrared::send32Int, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/send8"), &ALRosALInfrared::send8, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/sendIpAddress"), &ALRosALInfrared::sendIpAddress, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/sendRemoteKey"), &ALRosALInfrared::sendRemoteKey, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALInfrared/version"), &ALRosALInfrared::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALInfrared::confRemoteRecordAddKey(
    rosbridge::ALInfraredConfRemoteRecordAddKey::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordAddKey::Response &res)
{
  try {
    res.value = fProxy->confRemoteRecordAddKey(req.Keyname);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::confRemoteRecordCancel(
    rosbridge::ALInfraredConfRemoteRecordCancel::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordCancel::Response &res)
{
  try {
    res.value = fProxy->confRemoteRecordCancel();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::confRemoteRecordGetStatus(
    rosbridge::ALInfraredConfRemoteRecordGetStatus::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordGetStatus::Response &res)
{
  try {
    res.value = fProxy->confRemoteRecordGetStatus();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::confRemoteRecordNext(
    rosbridge::ALInfraredConfRemoteRecordNext::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordNext::Response &res)
{
  try {
    res.value = fProxy->confRemoteRecordNext();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::confRemoteRecordSave(
    rosbridge::ALInfraredConfRemoteRecordSave::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordSave::Response &res)
{
  try {
    fProxy->confRemoteRecordSave();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::confRemoteRecordStart(
    rosbridge::ALInfraredConfRemoteRecordStart::Request  &req,
    rosbridge::ALInfraredConfRemoteRecordStart::Response &res)
{
  try {
    fProxy->confRemoteRecordStart(req.Rm_name);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::exit(
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

bool ALRosALInfrared::getBrokerName(
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

bool ALRosALInfrared::getMethodList(
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

bool ALRosALInfrared::getUsage(
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

bool ALRosALInfrared::initReception(
    rosbridge::ALInfraredInitReception::Request  &req,
    rosbridge::ALInfraredInitReception::Response &res)
{
  try {
    fProxy->initReception(req.RepeatThreshold);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::ping(
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

bool ALRosALInfrared::send32(
    rosbridge::ALInfraredSend32::Request  &req,
    rosbridge::ALInfraredSend32::Response &res)
{
  try {
    fProxy->send32(req.Data_IR);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::send32Int(
    rosbridge::ALInfraredSend32Int::Request  &req,
    rosbridge::ALInfraredSend32Int::Response &res)
{
  try {
    fProxy->send32(req.Octet1, req.Octet2, req.Octet3, req.Octet4);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::send8(
    rosbridge::ALInfraredSend8::Request  &req,
    rosbridge::ALInfraredSend8::Response &res)
{
  try {
    fProxy->send8(req.Octet);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::sendIpAddress(
    rosbridge::ALInfraredSendIpAddress::Request  &req,
    rosbridge::ALInfraredSendIpAddress::Response &res)
{
  try {
    fProxy->sendIpAddress(req.IP);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::sendRemoteKey(
    rosbridge::ALInfraredSendRemoteKey::Request  &req,
    rosbridge::ALInfraredSendRemoteKey::Response &res)
{
  try {
    fProxy->sendRemoteKey(req.Remote, req.Key);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALInfrared::version(
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
#include "alrosalinfrared_cpp.inc"
}
