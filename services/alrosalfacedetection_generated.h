/*
* Generated for ALFaceDetection
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALFACEDETECTION_GENERATED_H
#define ALROS_ALROSALFACEDETECTION_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALFaceDetectionClearDatabase.h>
#include <rosbridge/ALFaceDetectionEnableRecognition.h>
#include <rosbridge/ALFaceDetectionEnableTracking.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALExtractorGetCurrentPeriod.h>
#include <rosbridge/ALExtractorGetCurrentPrecision.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALExtractorGetMyPeriod.h>
#include <rosbridge/ALExtractorGetMyPrecision.h>
#include <rosbridge/ALExtractorGetOutputNames.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALFaceDetectionIsTrackingEnabled.h>
#include <rosbridge/ALFaceDetectionLearnFace.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALFaceDetectionReLearnFace.h>
#include <rosbridge/ALExtractorSubscribeString.h>
#include <rosbridge/ALExtractorSubscribe.h>
#include <rosbridge/ALExtractorUnsubscribe.h>
#include <rosbridge/ALExtractorUpdatePeriod.h>
#include <rosbridge/ALExtractorUpdatePrecision.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalfacedetection_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALFaceDetectionProxy;

  class ALRosALFaceDetection {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool clearDatabase(
          rosbridge::ALFaceDetectionClearDatabase::Request  &req,
          rosbridge::ALFaceDetectionClearDatabase::Response &res);

      bool enableRecognition(
          rosbridge::ALFaceDetectionEnableRecognition::Request  &req,
          rosbridge::ALFaceDetectionEnableRecognition::Response &res);

      bool enableTracking(
          rosbridge::ALFaceDetectionEnableTracking::Request  &req,
          rosbridge::ALFaceDetectionEnableTracking::Response &res);

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

      bool isTrackingEnabled(
          rosbridge::ALFaceDetectionIsTrackingEnabled::Request  &req,
          rosbridge::ALFaceDetectionIsTrackingEnabled::Response &res);

      bool learnFace(
          rosbridge::ALFaceDetectionLearnFace::Request  &req,
          rosbridge::ALFaceDetectionLearnFace::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool reLearnFace(
          rosbridge::ALFaceDetectionReLearnFace::Request  &req,
          rosbridge::ALFaceDetectionReLearnFace::Response &res);

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
#include "alrosalfacedetection_h_declarations.inc"

      private:
        ALPtr<ALFaceDetectionProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALFACEDETECTION_GENERATED_H

