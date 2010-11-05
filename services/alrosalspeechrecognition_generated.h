/*
* Generated for ALSpeechRecognition
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALSPEECHRECOGNITION_GENERATED_H
#define ALROS_ALROSALSPEECHRECOGNITION_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALSpeechRecognitionGetAvailableLanguages.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALExtractorGetCurrentPeriod.h>
#include <rosbridge/ALExtractorGetCurrentPrecision.h>
#include <rosbridge/ALSpeechRecognitionGetLanguage.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALExtractorGetMyPeriod.h>
#include <rosbridge/ALExtractorGetMyPrecision.h>
#include <rosbridge/ALExtractorGetOutputNames.h>
#include <rosbridge/ALSpeechRecognitionGetParameter.h>
#include <rosbridge/ALSpeechRecognitionGetPhoneticTranscription.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALSpeechRecognitionLoadVocabulary.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALSpeechRecognitionSetAudioExpression.h>
#include <rosbridge/ALSoundExtractorSetDebugMode.h>
#include <rosbridge/ALSpeechRecognitionSetLanguage.h>
#include <rosbridge/ALSpeechRecognitionSetParameter.h>
#include <rosbridge/ALSpeechRecognitionSetVisualExpression.h>
#include <rosbridge/ALSpeechRecognitionSetWordListAsVocabulary.h>
#include <rosbridge/ALExtractorSubscribeString.h>
#include <rosbridge/ALExtractorSubscribe.h>
#include <rosbridge/ALExtractorUnsubscribe.h>
#include <rosbridge/ALExtractorUpdatePeriod.h>
#include <rosbridge/ALExtractorUpdatePrecision.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalspeechrecognition_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALSpeechRecognitionProxy;

  class ALRosALSpeechRecognition {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getAvailableLanguages(
          rosbridge::ALSpeechRecognitionGetAvailableLanguages::Request  &req,
          rosbridge::ALSpeechRecognitionGetAvailableLanguages::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getCurrentPeriod(
          rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
          rosbridge::ALExtractorGetCurrentPeriod::Response &res);

      bool getCurrentPrecision(
          rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
          rosbridge::ALExtractorGetCurrentPrecision::Response &res);

      bool getLanguage(
          rosbridge::ALSpeechRecognitionGetLanguage::Request  &req,
          rosbridge::ALSpeechRecognitionGetLanguage::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getMyPeriod(
          rosbridge::ALExtractorGetMyPeriod::Request  &req,
          rosbridge::ALExtractorGetMyPeriod::Response &res);

      bool getMyPrecision(
          rosbridge::ALExtractorGetMyPrecision::Request  &req,
          rosbridge::ALExtractorGetMyPrecision::Response &res);

      bool getOutputNames(
          rosbridge::ALExtractorGetOutputNames::Request  &req,
          rosbridge::ALExtractorGetOutputNames::Response &res);

      bool getParameter(
          rosbridge::ALSpeechRecognitionGetParameter::Request  &req,
          rosbridge::ALSpeechRecognitionGetParameter::Response &res);

      bool getPhoneticTranscription(
          rosbridge::ALSpeechRecognitionGetPhoneticTranscription::Request  &req,
          rosbridge::ALSpeechRecognitionGetPhoneticTranscription::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool loadVocabulary(
          rosbridge::ALSpeechRecognitionLoadVocabulary::Request  &req,
          rosbridge::ALSpeechRecognitionLoadVocabulary::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setAudioExpression(
          rosbridge::ALSpeechRecognitionSetAudioExpression::Request  &req,
          rosbridge::ALSpeechRecognitionSetAudioExpression::Response &res);

      bool setDebugMode(
          rosbridge::ALSoundExtractorSetDebugMode::Request  &req,
          rosbridge::ALSoundExtractorSetDebugMode::Response &res);

      bool setLanguage(
          rosbridge::ALSpeechRecognitionSetLanguage::Request  &req,
          rosbridge::ALSpeechRecognitionSetLanguage::Response &res);

      bool setParameter(
          rosbridge::ALSpeechRecognitionSetParameter::Request  &req,
          rosbridge::ALSpeechRecognitionSetParameter::Response &res);

      bool setVisualExpression(
          rosbridge::ALSpeechRecognitionSetVisualExpression::Request  &req,
          rosbridge::ALSpeechRecognitionSetVisualExpression::Response &res);

      bool setWordListAsVocabulary(
          rosbridge::ALSpeechRecognitionSetWordListAsVocabulary::Request  &req,
          rosbridge::ALSpeechRecognitionSetWordListAsVocabulary::Response &res);

      bool subscribeString(
          rosbridge::ALExtractorSubscribeString::Request  &req,
          rosbridge::ALExtractorSubscribeString::Response &res);

      bool subscribe(
          rosbridge::ALExtractorSubscribe::Request  &req,
          rosbridge::ALExtractorSubscribe::Response &res);

      bool unsubscribe(
          rosbridge::ALExtractorUnsubscribe::Request  &req,
          rosbridge::ALExtractorUnsubscribe::Response &res);

      bool updatePeriod(
          rosbridge::ALExtractorUpdatePeriod::Request  &req,
          rosbridge::ALExtractorUpdatePeriod::Response &res);

      bool updatePrecision(
          rosbridge::ALExtractorUpdatePrecision::Request  &req,
          rosbridge::ALExtractorUpdatePrecision::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalspeechrecognition_h_declarations.inc"

      private:
        ALPtr<ALSpeechRecognitionProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALSPEECHRECOGNITION_GENERATED_H

