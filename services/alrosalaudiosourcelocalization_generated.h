/*
* Generated for ALAudioSourceLocalization
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALAUDIOSOURCELOCALIZATION_GENERATED_H
#define ALROS_ALROSALAUDIOSOURCELOCALIZATION_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALExtractorGetCurrentPeriod.h>
#include <rosbridge/ALExtractorGetCurrentPrecision.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALExtractorGetMyPeriod.h>
#include <rosbridge/ALExtractorGetMyPrecision.h>
#include <rosbridge/ALExtractorGetOutputNames.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALSoundExtractorSetDebugMode.h>
#include <rosbridge/ALAudioSourceLocalizationSetParameter.h>
#include <rosbridge/ALExtractorSubscribeString.h>
#include <rosbridge/ALExtractorSubscribe.h>
#include <rosbridge/ALExtractorUnsubscribe.h>
#include <rosbridge/ALExtractorUpdatePeriod.h>
#include <rosbridge/ALExtractorUpdatePrecision.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalaudiosourcelocalization_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALAudioSourceLocalizationProxy;

  class ALRosALAudioSourceLocalization {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getCurrentPeriod(
          rosbridge::ALExtractorGetCurrentPeriod::Request  &req,
          rosbridge::ALExtractorGetCurrentPeriod::Response &res);

      bool getCurrentPrecision(
          rosbridge::ALExtractorGetCurrentPrecision::Request  &req,
          rosbridge::ALExtractorGetCurrentPrecision::Response &res);

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

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setDebugMode(
          rosbridge::ALSoundExtractorSetDebugMode::Request  &req,
          rosbridge::ALSoundExtractorSetDebugMode::Response &res);

      bool setParameter(
          rosbridge::ALAudioSourceLocalizationSetParameter::Request  &req,
          rosbridge::ALAudioSourceLocalizationSetParameter::Response &res);

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
#include "alrosalaudiosourcelocalization_h_declarations.inc"

      private:
        ALPtr<ALAudioSourceLocalizationProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALAUDIOSOURCELOCALIZATION_GENERATED_H

