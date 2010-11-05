/*
* Generated for ALTextToSpeech
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALTEXTTOSPEECH_GENERATED_H
#define ALROS_ALROSALTEXTTOSPEECH_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALTextToSpeechGetAvailableLanguages.h>
#include <rosbridge/ALTextToSpeechGetAvailableVoices.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALTextToSpeechGetLanguage.h>
#include <rosbridge/ALTextToSpeechGetLanguageEncoding.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALTextToSpeechGetParameter.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALTextToSpeechGetVoice.h>
#include <rosbridge/ALTextToSpeechGetVolume.h>
#include <rosbridge/ALTextToSpeechLoadVoicePreference.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALTextToSpeechSay.h>
#include <rosbridge/ALTextToSpeechSayToFile.h>
#include <rosbridge/ALTextToSpeechSayToFileAndPlay.h>
#include <rosbridge/ALTextToSpeechSetLanguage.h>
#include <rosbridge/ALTextToSpeechSetParameter.h>
#include <rosbridge/ALTextToSpeechSetVoice.h>
#include <rosbridge/ALTextToSpeechSetVolume.h>
#include <rosbridge/ALTextToSpeechStopAll.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosaltexttospeech_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALTextToSpeechProxy;

  class ALRosALTextToSpeech {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getAvailableLanguages(
          rosbridge::ALTextToSpeechGetAvailableLanguages::Request  &req,
          rosbridge::ALTextToSpeechGetAvailableLanguages::Response &res);

      bool getAvailableVoices(
          rosbridge::ALTextToSpeechGetAvailableVoices::Request  &req,
          rosbridge::ALTextToSpeechGetAvailableVoices::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getLanguage(
          rosbridge::ALTextToSpeechGetLanguage::Request  &req,
          rosbridge::ALTextToSpeechGetLanguage::Response &res);

      bool getLanguageEncoding(
          rosbridge::ALTextToSpeechGetLanguageEncoding::Request  &req,
          rosbridge::ALTextToSpeechGetLanguageEncoding::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getParameter(
          rosbridge::ALTextToSpeechGetParameter::Request  &req,
          rosbridge::ALTextToSpeechGetParameter::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool getVoice(
          rosbridge::ALTextToSpeechGetVoice::Request  &req,
          rosbridge::ALTextToSpeechGetVoice::Response &res);

      bool getVolume(
          rosbridge::ALTextToSpeechGetVolume::Request  &req,
          rosbridge::ALTextToSpeechGetVolume::Response &res);

      bool loadVoicePreference(
          rosbridge::ALTextToSpeechLoadVoicePreference::Request  &req,
          rosbridge::ALTextToSpeechLoadVoicePreference::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool say(
          rosbridge::ALTextToSpeechSay::Request  &req,
          rosbridge::ALTextToSpeechSay::Response &res);

      bool sayToFile(
          rosbridge::ALTextToSpeechSayToFile::Request  &req,
          rosbridge::ALTextToSpeechSayToFile::Response &res);

      bool sayToFileAndPlay(
          rosbridge::ALTextToSpeechSayToFileAndPlay::Request  &req,
          rosbridge::ALTextToSpeechSayToFileAndPlay::Response &res);

      bool setLanguage(
          rosbridge::ALTextToSpeechSetLanguage::Request  &req,
          rosbridge::ALTextToSpeechSetLanguage::Response &res);

      bool setParameter(
          rosbridge::ALTextToSpeechSetParameter::Request  &req,
          rosbridge::ALTextToSpeechSetParameter::Response &res);

      bool setVoice(
          rosbridge::ALTextToSpeechSetVoice::Request  &req,
          rosbridge::ALTextToSpeechSetVoice::Response &res);

      bool setVolume(
          rosbridge::ALTextToSpeechSetVolume::Request  &req,
          rosbridge::ALTextToSpeechSetVolume::Response &res);

      bool stopAll(
          rosbridge::ALTextToSpeechStopAll::Request  &req,
          rosbridge::ALTextToSpeechStopAll::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosaltexttospeech_h_declarations.inc"

      private:
        ALPtr<ALTextToSpeechProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALTEXTTOSPEECH_GENERATED_H

