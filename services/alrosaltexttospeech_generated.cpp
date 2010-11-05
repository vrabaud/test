/*
* Generated for ALTextToSpeech
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosaltexttospeech_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/altexttospeechproxy.h>

namespace AL {

void ALRosALTextToSpeech::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALTextToSpeech"))
  {
    return;
  }
  fProxy = ALPtr<ALTextToSpeechProxy> (new ALTextToSpeechProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/exit"), &ALRosALTextToSpeech::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getAvailableLanguages"), &ALRosALTextToSpeech::getAvailableLanguages, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getAvailableVoices"), &ALRosALTextToSpeech::getAvailableVoices, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getBrokerName"), &ALRosALTextToSpeech::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getLanguage"), &ALRosALTextToSpeech::getLanguage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getLanguageEncoding"), &ALRosALTextToSpeech::getLanguageEncoding, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getMethodList"), &ALRosALTextToSpeech::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getParameter"), &ALRosALTextToSpeech::getParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getUsage"), &ALRosALTextToSpeech::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getVoice"), &ALRosALTextToSpeech::getVoice, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getVolume"), &ALRosALTextToSpeech::getVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/loadVoicePreference"), &ALRosALTextToSpeech::loadVoicePreference, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/ping"), &ALRosALTextToSpeech::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/say"), &ALRosALTextToSpeech::say, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/sayToFile"), &ALRosALTextToSpeech::sayToFile, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/sayToFileAndPlay"), &ALRosALTextToSpeech::sayToFileAndPlay, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/setLanguage"), &ALRosALTextToSpeech::setLanguage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/setParameter"), &ALRosALTextToSpeech::setParameter, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/setVoice"), &ALRosALTextToSpeech::setVoice, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/setVolume"), &ALRosALTextToSpeech::setVolume, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/stopAll"), &ALRosALTextToSpeech::stopAll, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/version"), &ALRosALTextToSpeech::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALTextToSpeech::exit(
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

bool ALRosALTextToSpeech::getAvailableLanguages(
    rosbridge::ALTextToSpeechGetAvailableLanguages::Request  &req,
    rosbridge::ALTextToSpeechGetAvailableLanguages::Response &res)
{
  try {
    res.value = fProxy->getAvailableLanguages();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getAvailableVoices(
    rosbridge::ALTextToSpeechGetAvailableVoices::Request  &req,
    rosbridge::ALTextToSpeechGetAvailableVoices::Response &res)
{
  try {
    res.value = fProxy->getAvailableVoices();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getBrokerName(
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

bool ALRosALTextToSpeech::getLanguage(
    rosbridge::ALTextToSpeechGetLanguage::Request  &req,
    rosbridge::ALTextToSpeechGetLanguage::Response &res)
{
  try {
    res.value = fProxy->getLanguage();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getLanguageEncoding(
    rosbridge::ALTextToSpeechGetLanguageEncoding::Request  &req,
    rosbridge::ALTextToSpeechGetLanguageEncoding::Response &res)
{
  try {
    res.value = fProxy->getLanguageEncoding(req.pLanguage);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getMethodList(
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

bool ALRosALTextToSpeech::getParameter(
    rosbridge::ALTextToSpeechGetParameter::Request  &req,
    rosbridge::ALTextToSpeechGetParameter::Response &res)
{
  try {
    res.value = fProxy->getParameter(req.pParameterName);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getUsage(
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

bool ALRosALTextToSpeech::getVoice(
    rosbridge::ALTextToSpeechGetVoice::Request  &req,
    rosbridge::ALTextToSpeechGetVoice::Response &res)
{
  try {
    res.value = fProxy->getVoice();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::getVolume(
    rosbridge::ALTextToSpeechGetVolume::Request  &req,
    rosbridge::ALTextToSpeechGetVolume::Response &res)
{
  try {
    res.value = fProxy->getVolume();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::loadVoicePreference(
    rosbridge::ALTextToSpeechLoadVoicePreference::Request  &req,
    rosbridge::ALTextToSpeechLoadVoicePreference::Response &res)
{
  try {
    fProxy->loadVoicePreference(req.pPreferenceName);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::ping(
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

bool ALRosALTextToSpeech::say(
    rosbridge::ALTextToSpeechSay::Request  &req,
    rosbridge::ALTextToSpeechSay::Response &res)
{
  try {
    res.value = fProxy->say(req.stringToSay);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::sayToFile(
    rosbridge::ALTextToSpeechSayToFile::Request  &req,
    rosbridge::ALTextToSpeechSayToFile::Response &res)
{
  try {
    res.value = fProxy->sayToFile(req.pStringToSay, req.pFileName);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::sayToFileAndPlay(
    rosbridge::ALTextToSpeechSayToFileAndPlay::Request  &req,
    rosbridge::ALTextToSpeechSayToFileAndPlay::Response &res)
{
  try {
    res.value = fProxy->sayToFileAndPlay(req.pStringToSay);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::setLanguage(
    rosbridge::ALTextToSpeechSetLanguage::Request  &req,
    rosbridge::ALTextToSpeechSetLanguage::Response &res)
{
  try {
    fProxy->setLanguage(req.pLanguage);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::setParameter(
    rosbridge::ALTextToSpeechSetParameter::Request  &req,
    rosbridge::ALTextToSpeechSetParameter::Response &res)
{
  try {
    fProxy->setParameter(req.pEffectName, req.pEffectValue);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::setVoice(
    rosbridge::ALTextToSpeechSetVoice::Request  &req,
    rosbridge::ALTextToSpeechSetVoice::Response &res)
{
  try {
    fProxy->setVoice(req.pVoiceID);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::setVolume(
    rosbridge::ALTextToSpeechSetVolume::Request  &req,
    rosbridge::ALTextToSpeechSetVolume::Response &res)
{
  try {
    fProxy->setVolume(req.volume);
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::stopAll(
    rosbridge::ALTextToSpeechStopAll::Request  &req,
    rosbridge::ALTextToSpeechStopAll::Response &res)
{
  try {
    fProxy->stopAll();
    return true;
  } catch(const ALError& e) {
    return false;
  }
}

bool ALRosALTextToSpeech::version(
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
#include "alrosaltexttospeech_cpp.inc"
}
