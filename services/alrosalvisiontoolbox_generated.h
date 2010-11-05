/*
* Generated for ALVisionToolbox
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALVISIONTOOLBOX_GENERATED_H
#define ALROS_ALROSALVISIONTOOLBOX_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALVisionToolboxBacklighting.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALVisionToolboxHalfPress.h>
#include <rosbridge/ALVisionToolboxIsItDark.h>
#include <rosbridge/ALVisionToolboxIsVideoRecording.h>
#include <rosbridge/ALVisionToolboxLogTPRInstanceInfo.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALVisionToolboxSetWhiteBalance.h>
#include <rosbridge/ALVisionToolboxStartVideoRecord.h>
#include <rosbridge/ALVisionToolboxStartVideoRecord_adv.h>
#include <rosbridge/ALVisionToolboxStopTPR.h>
#include <rosbridge/ALVisionToolboxTakePicture.h>
#include <rosbridge/ALVisionToolboxTakePictureRegularly.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalvisiontoolbox_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALVisionToolboxProxy;

  class ALRosALVisionToolbox {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool backlighting(
          rosbridge::ALVisionToolboxBacklighting::Request  &req,
          rosbridge::ALVisionToolboxBacklighting::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool halfPress(
          rosbridge::ALVisionToolboxHalfPress::Request  &req,
          rosbridge::ALVisionToolboxHalfPress::Response &res);

      bool isItDark(
          rosbridge::ALVisionToolboxIsItDark::Request  &req,
          rosbridge::ALVisionToolboxIsItDark::Response &res);

      bool isVideoRecording(
          rosbridge::ALVisionToolboxIsVideoRecording::Request  &req,
          rosbridge::ALVisionToolboxIsVideoRecording::Response &res);

      bool logTPRInstanceInfo(
          rosbridge::ALVisionToolboxLogTPRInstanceInfo::Request  &req,
          rosbridge::ALVisionToolboxLogTPRInstanceInfo::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setWhiteBalance(
          rosbridge::ALVisionToolboxSetWhiteBalance::Request  &req,
          rosbridge::ALVisionToolboxSetWhiteBalance::Response &res);

      bool startVideoRecord(
          rosbridge::ALVisionToolboxStartVideoRecord::Request  &req,
          rosbridge::ALVisionToolboxStartVideoRecord::Response &res);

      bool startVideoRecord_adv(
          rosbridge::ALVisionToolboxStartVideoRecord_adv::Request  &req,
          rosbridge::ALVisionToolboxStartVideoRecord_adv::Response &res);

      bool stopTPR(
          rosbridge::ALVisionToolboxStopTPR::Request  &req,
          rosbridge::ALVisionToolboxStopTPR::Response &res);

      bool takePicture(
          rosbridge::ALVisionToolboxTakePicture::Request  &req,
          rosbridge::ALVisionToolboxTakePicture::Response &res);

      bool takePictureRegularly(
          rosbridge::ALVisionToolboxTakePictureRegularly::Request  &req,
          rosbridge::ALVisionToolboxTakePictureRegularly::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalvisiontoolbox_h_declarations.inc"

      private:
        ALPtr<ALVisionToolboxProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALVISIONTOOLBOX_GENERATED_H

