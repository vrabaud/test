/*
* Generated for ALSpeechRecognition
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalspeechrecognition_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/alspeechrecognitionproxy.h>

namespace AL {

void ALRosALSpeechRecognition::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALSpeechRecognition"))
  {
    return;
  }
  fProxy = ALPtr<ALSpeechRecognitionProxy> (new ALSpeechRecognitionProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/exit"), &ALRosALSpeechRecognition::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getAvailableLanguages"), &ALRosALSpeechRecognition::getAvailableLanguages, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getBrokerName"), &ALRosALSpeechRecognition::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getCurrentPeriod"), &ALRosALSpeechRecognition::getCurrentPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getCurrentPrecision"), &ALRosALSpeechRecognition::getCurrentPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getLanguage"), &ALRosALSpeechRecognition::getLanguage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getMethodList"), &ALRosALSpeechRecognition::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getMyPeriod"), &ALRosALSpeechRecognition::getMyPeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getMyPrecision"), &ALRosALSpeechRecognition::getMyPrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getOutputNames"), &ALRosALSpeechRecognition::getOutputNames, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getParameter"), &ALRosALSpeechRecognition::getParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getPhoneticTranscription"), &ALRosALSpeechRecognition::getPhoneticTranscription, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getUsage"), &ALRosALSpeechRecognition::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/loadVocabulary"), &ALRosALSpeechRecognition::loadVocabulary, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/ping"), &ALRosALSpeechRecognition::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setAudioExpression"), &ALRosALSpeechRecognition::setAudioExpression, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setDebugMode"), &ALRosALSpeechRecognition::setDebugMode, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setLanguage"), &ALRosALSpeechRecognition::setLanguage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setParameter"), &ALRosALSpeechRecognition::setParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setVisualExpression"), &ALRosALSpeechRecognition::setVisualExpression, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/setWordListAsVocabulary"), &ALRosALSpeechRecognition::setWordListAsVocabulary, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/subscribeString"), &ALRosALSpeechRecognition::subscribeString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/subscribe"), &ALRosALSpeechRecognition::subscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/unsubscribe"), &ALRosALSpeechRecognition::unsubscribe, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/updatePeriod"), &ALRosALSpeechRecognition::updatePeriod, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/updatePrecision"), &ALRosALSpeechRecognition::updatePrecision, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/version"), &ALRosALSpeechRecognition::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALSpeechRecognition::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getAvailableLanguages(
    rosbridge::ALSpeechRecognitionGetAvailableLanguages::Request  &req,
    rosbridge::ALSpeechRecognitionGetAvailableLanguages::Response &res)
{
  try {
    res.value = fProxy->getAvailableLanguages();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getAvailableLanguages failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getCurrentPeriod(
    rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
    rosbridge::ALExtractorGetCurrentPeriod::Response &res)
{
  try {
    res.value = fProxy->getCurrentPeriod();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getCurrentPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getCurrentPrecision(
    rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
    rosbridge::ALExtractorGetCurrentPrecision::Response &res)
{
  try {
    res.value = fProxy->getCurrentPrecision();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getCurrentPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getLanguage(
    rosbridge::ALSpeechRecognitionGetLanguage::Request  &req,
    rosbridge::ALSpeechRecognitionGetLanguage::Response &res)
{
  try {
    res.value = fProxy->getLanguage();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getLanguage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getMyPeriod(
    rosbridge::ALExtractorGetMyPeriod::Request  &req,
    rosbridge::ALExtractorGetMyPeriod::Response &res)
{
  try {
    res.value = fProxy->getMyPeriod(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getMyPeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getMyPrecision(
    rosbridge::ALExtractorGetMyPrecision::Request  &req,
    rosbridge::ALExtractorGetMyPrecision::Response &res)
{
  try {
    res.value = fProxy->getMyPrecision(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getMyPrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getOutputNames(
    rosbridge::ALExtractorGetOutputNames::Request  &req,
    rosbridge::ALExtractorGetOutputNames::Response &res)
{
  try {
    res.value = fProxy->getOutputNames();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getOutputNames failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getParameter(
    rosbridge::ALSpeechRecognitionGetParameter::Request  &req,
    rosbridge::ALSpeechRecognitionGetParameter::Response &res)
{
  try {
    res.value = fProxy->getParameter(req.paramName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getParameter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getPhoneticTranscription(
    rosbridge::ALSpeechRecognitionGetPhoneticTranscription::Request  &req,
    rosbridge::ALSpeechRecognitionGetPhoneticTranscription::Response &res)
{
  try {
    res.value = fProxy->getPhoneticTranscription(req.word);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getPhoneticTranscription failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::loadVocabulary(
    rosbridge::ALSpeechRecognitionLoadVocabulary::Request  &req,
    rosbridge::ALSpeechRecognitionLoadVocabulary::Response &res)
{
  try {
    fProxy->loadVocabulary(req.vocabularyFile);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.loadVocabulary failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setAudioExpression(
    rosbridge::ALSpeechRecognitionSetAudioExpression::Request  &req,
    rosbridge::ALSpeechRecognitionSetAudioExpression::Response &res)
{
  try {
    fProxy->setAudioExpression(req.setOrNot);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setAudioExpression failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setDebugMode(
    rosbridge::ALSoundExtractorSetDebugMode::Request  &req,
    rosbridge::ALSoundExtractorSetDebugMode::Response &res)
{
  try {
    fProxy->setDebugMode(req.bSetOrUnset);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setDebugMode failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setLanguage(
    rosbridge::ALSpeechRecognitionSetLanguage::Request  &req,
    rosbridge::ALSpeechRecognitionSetLanguage::Response &res)
{
  try {
    fProxy->setLanguage(req.languageName);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setLanguage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setParameter(
    rosbridge::ALSpeechRecognitionSetParameter::Request  &req,
    rosbridge::ALSpeechRecognitionSetParameter::Response &res)
{
  try {
    fProxy->setParameter(req.paramName, req.paramValue);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setParameter failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setVisualExpression(
    rosbridge::ALSpeechRecognitionSetVisualExpression::Request  &req,
    rosbridge::ALSpeechRecognitionSetVisualExpression::Response &res)
{
  try {
    fProxy->setVisualExpression(req.setOrNot);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setVisualExpression failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::setWordListAsVocabulary(
    rosbridge::ALSpeechRecognitionSetWordListAsVocabulary::Request  &req,
    rosbridge::ALSpeechRecognitionSetWordListAsVocabulary::Response &res)
{
  try {
    fProxy->setWordListAsVocabulary(req.vocabulary);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.setWordListAsVocabulary failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::subscribeString(
    rosbridge::ALExtractorSubscribeString::Request  &req,
    rosbridge::ALExtractorSubscribeString::Response &res)
{
  try {
    fProxy->subscribe(req.name, req.period, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::subscribe(
    rosbridge::ALExtractorSubscribe::Request  &req,
    rosbridge::ALExtractorSubscribe::Response &res)
{
  try {
    fProxy->subscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.subscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::unsubscribe(
    rosbridge::ALExtractorUnsubscribe::Request  &req,
    rosbridge::ALExtractorUnsubscribe::Response &res)
{
  try {
    fProxy->unsubscribe(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.unsubscribe failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::updatePeriod(
    rosbridge::ALExtractorUpdatePeriod::Request  &req,
    rosbridge::ALExtractorUpdatePeriod::Response &res)
{
  try {
    fProxy->updatePeriod(req.name, req.period);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.updatePeriod failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::updatePrecision(
    rosbridge::ALExtractorUpdatePrecision::Request  &req,
    rosbridge::ALExtractorUpdatePrecision::Response &res)
{
  try {
    fProxy->updatePrecision(req.name, req.precision);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.updatePrecision failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALSpeechRecognition::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalspeechrecognition_cpp.inc"
}
