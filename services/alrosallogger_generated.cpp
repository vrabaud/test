/*
* Generated for ALLogger
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosallogger_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alloggerproxy.h>

namespace AL {

void ALRosALLogger::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALLogger"))
  {
    return;
  }
  fProxy = ALPtr<ALLoggerProxy> (new ALLoggerProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/debug"), &ALRosALLogger::debug, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/error"), &ALRosALLogger::error, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/exit"), &ALRosALLogger::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/fatal"), &ALRosALLogger::fatal, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/getBrokerName"), &ALRosALLogger::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/getMethodList"), &ALRosALLogger::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/getUsage"), &ALRosALLogger::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/info"), &ALRosALLogger::info, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/logInFile"), &ALRosALLogger::logInFile, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/logInForwarder"), &ALRosALLogger::logInForwarder, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/logInStd"), &ALRosALLogger::logInStd, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/logInSys"), &ALRosALLogger::logInSys, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/lowDebug"), &ALRosALLogger::lowDebug, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/lowInfo"), &ALRosALLogger::lowInfo, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/ping"), &ALRosALLogger::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/removeHandler"), &ALRosALLogger::removeHandler, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/separator"), &ALRosALLogger::separator, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/setFilter"), &ALRosALLogger::setFilter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/setVerbosity"), &ALRosALLogger::setVerbosity, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/version"), &ALRosALLogger::version, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLogger/warn"), &ALRosALLogger::warn, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALLogger::debug(
    rosbridge::ALLoggerDebug::Request  &req,
    rosbridge::ALLoggerDebug::Response &res)
{
  try {
    fProxy->debug(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.debug failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::error(
    rosbridge::ALLoggerError::Request  &req,
    rosbridge::ALLoggerError::Response &res)
{
  try {
    fProxy->error(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.error failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::fatal(
    rosbridge::ALLoggerFatal::Request  &req,
    rosbridge::ALLoggerFatal::Response &res)
{
  try {
    fProxy->fatal(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.fatal failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::info(
    rosbridge::ALLoggerInfo::Request  &req,
    rosbridge::ALLoggerInfo::Response &res)
{
  try {
    fProxy->info(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.info failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::logInFile(
    rosbridge::ALLoggerLogInFile::Request  &req,
    rosbridge::ALLoggerLogInFile::Response &res)
{
  try {
    fProxy->logInFile(req.fileName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.logInFile failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::logInForwarder(
    rosbridge::ALLoggerLogInForwarder::Request  &req,
    rosbridge::ALLoggerLogInForwarder::Response &res)
{
  try {
    fProxy->logInForwarder(req.inputAddress);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.logInForwarder failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::logInStd(
    rosbridge::ALLoggerLogInStd::Request  &req,
    rosbridge::ALLoggerLogInStd::Response &res)
{
  try {
    fProxy->logInStd();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.logInStd failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::logInSys(
    rosbridge::ALLoggerLogInSys::Request  &req,
    rosbridge::ALLoggerLogInSys::Response &res)
{
  try {
    fProxy->logInSys();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.logInSys failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::lowDebug(
    rosbridge::ALLoggerLowDebug::Request  &req,
    rosbridge::ALLoggerLowDebug::Response &res)
{
  try {
    fProxy->lowDebug(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.lowDebug failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::lowInfo(
    rosbridge::ALLoggerLowInfo::Request  &req,
    rosbridge::ALLoggerLowInfo::Response &res)
{
  try {
    fProxy->lowInfo(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.lowInfo failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::removeHandler(
    rosbridge::ALLoggerRemoveHandler::Request  &req,
    rosbridge::ALLoggerRemoveHandler::Response &res)
{
  try {
    fProxy->removeHandler(req.id);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.removeHandler failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::separator(
    rosbridge::ALLoggerSeparator::Request  &req,
    rosbridge::ALLoggerSeparator::Response &res)
{
  try {
    fProxy->separator();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.separator failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::setFilter(
    rosbridge::ALLoggerSetFilter::Request  &req,
    rosbridge::ALLoggerSetFilter::Response &res)
{
  try {
    fProxy->setFilter(req.filter);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.setFilter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::setVerbosity(
    rosbridge::ALLoggerSetVerbosity::Request  &req,
    rosbridge::ALLoggerSetVerbosity::Response &res)
{
  try {
    fProxy->setVerbosity(req.verbosity);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.setVerbosity failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.version failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALLogger::warn(
    rosbridge::ALLoggerWarn::Request  &req,
    rosbridge::ALLoggerWarn::Response &res)
{
  try {
    fProxy->warn(req.moduleName, req.message);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLogger.warn failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosallogger_cpp.inc"
}
