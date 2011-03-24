/*
* Generated for ALVideoDevice
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALVIDEODEVICE_GENERATED_H
#define ALROS_ALROSALVIDEODEVICE_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALVisionVideoInputGetActiveCamera.h>
#include <rosbridge/ALVisionVideoInputGetAngPosFromImgPos.h>
#include <rosbridge/ALVisionVideoInputGetAngSizeFromImgSize.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALVisionVideoInputGetGVMColorSpace.h>
#include <rosbridge/ALVisionVideoInputGetGVMFrameRate.h>
#include <rosbridge/ALVisionVideoInputGetGVMResolution.h>
#include <rosbridge/ALVisionVideoInputGetImgInfoFromAngInfo.h>
#include <rosbridge/ALVisionVideoInputGetImgInfoFromAngInfoWithRes.h>
#include <rosbridge/ALVisionVideoInputGetImgPosFromAngPos.h>
#include <rosbridge/ALVisionVideoInputGetImgSizeFromAngSize.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALVisionVideoInputGetParam.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALVisionVideoInputGetVIMColorSpace.h>
#include <rosbridge/ALVisionVideoInputGetVIMFrameRate.h>
#include <rosbridge/ALVisionVideoInputGetVIMResolution.h>
#include <rosbridge/ALVisionVideoInputIsFrameGrabberOff.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALVisionVideoInputRecordVideo.h>
#include <rosbridge/ALVisionVideoInputReleaseDirectRawImage.h>
#include <rosbridge/ALVisionVideoInputReleaseImage.h>
#include <rosbridge/ALVisionVideoInputSetColorSpace.h>
#include <rosbridge/ALVisionVideoInputSetFrameRate.h>
#include <rosbridge/ALVisionVideoInputSetParam.h>
#include <rosbridge/ALVisionVideoInputSetParamDefault.h>
#include <rosbridge/ALVisionVideoInputSetResolution.h>
#include <rosbridge/ALVisionVideoInputSizesToResolution.h>
#include <rosbridge/ALVisionVideoInputStartFrameGrabber.h>
#include <rosbridge/ALVisionVideoInputStopFrameGrabber.h>
#include <rosbridge/ALVisionVideoInputStopVideo.h>
#include <rosbridge/ALVisionVideoInputSubscribe.h>
#include <rosbridge/ALVisionVideoInputUnsubscribe.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalvideodevice_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALVideoDeviceProxy;

  class ALRosALVideoDevice {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getActiveCamera(
          rosbridge::ALVisionVideoInputGetActiveCamera::Request  &req,
          rosbridge::ALVisionVideoInputGetActiveCamera::Response &res);

      bool getAngPosFromImgPos(
          rosbridge::ALVisionVideoInputGetAngPosFromImgPos::Request  &req,
          rosbridge::ALVisionVideoInputGetAngPosFromImgPos::Response &res);

      bool getAngSizeFromImgSize(
          rosbridge::ALVisionVideoInputGetAngSizeFromImgSize::Request  &req,
          rosbridge::ALVisionVideoInputGetAngSizeFromImgSize::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getGVMColorSpace(
          rosbridge::ALVisionVideoInputGetGVMColorSpace::Request  &req,
          rosbridge::ALVisionVideoInputGetGVMColorSpace::Response &res);

      bool getGVMFrameRate(
          rosbridge::ALVisionVideoInputGetGVMFrameRate::Request  &req,
          rosbridge::ALVisionVideoInputGetGVMFrameRate::Response &res);

      bool getGVMResolution(
          rosbridge::ALVisionVideoInputGetGVMResolution::Request  &req,
          rosbridge::ALVisionVideoInputGetGVMResolution::Response &res);

      bool getImgInfoFromAngInfo(
          rosbridge::ALVisionVideoInputGetImgInfoFromAngInfo::Request  &req,
          rosbridge::ALVisionVideoInputGetImgInfoFromAngInfo::Response &res);

      bool getImgInfoFromAngInfoWithRes(
          rosbridge::ALVisionVideoInputGetImgInfoFromAngInfoWithRes::Request  &req,
          rosbridge::ALVisionVideoInputGetImgInfoFromAngInfoWithRes::Response &res);

      bool getImgPosFromAngPos(
          rosbridge::ALVisionVideoInputGetImgPosFromAngPos::Request  &req,
          rosbridge::ALVisionVideoInputGetImgPosFromAngPos::Response &res);

      bool getImgSizeFromAngSize(
          rosbridge::ALVisionVideoInputGetImgSizeFromAngSize::Request  &req,
          rosbridge::ALVisionVideoInputGetImgSizeFromAngSize::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getParam(
          rosbridge::ALVisionVideoInputGetParam::Request  &req,
          rosbridge::ALVisionVideoInputGetParam::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool getVIMColorSpace(
          rosbridge::ALVisionVideoInputGetVIMColorSpace::Request  &req,
          rosbridge::ALVisionVideoInputGetVIMColorSpace::Response &res);

      bool getVIMFrameRate(
          rosbridge::ALVisionVideoInputGetVIMFrameRate::Request  &req,
          rosbridge::ALVisionVideoInputGetVIMFrameRate::Response &res);

      bool getVIMResolution(
          rosbridge::ALVisionVideoInputGetVIMResolution::Request  &req,
          rosbridge::ALVisionVideoInputGetVIMResolution::Response &res);

      bool isFrameGrabberOff(
          rosbridge::ALVisionVideoInputIsFrameGrabberOff::Request  &req,
          rosbridge::ALVisionVideoInputIsFrameGrabberOff::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool recordVideo(
          rosbridge::ALVisionVideoInputRecordVideo::Request  &req,
          rosbridge::ALVisionVideoInputRecordVideo::Response &res);

      bool releaseDirectRawImage(
          rosbridge::ALVisionVideoInputReleaseDirectRawImage::Request  &req,
          rosbridge::ALVisionVideoInputReleaseDirectRawImage::Response &res);

      bool releaseImage(
          rosbridge::ALVisionVideoInputReleaseImage::Request  &req,
          rosbridge::ALVisionVideoInputReleaseImage::Response &res);

      bool setColorSpace(
          rosbridge::ALVisionVideoInputSetColorSpace::Request  &req,
          rosbridge::ALVisionVideoInputSetColorSpace::Response &res);

      bool setFrameRate(
          rosbridge::ALVisionVideoInputSetFrameRate::Request  &req,
          rosbridge::ALVisionVideoInputSetFrameRate::Response &res);

      bool setParam(
          rosbridge::ALVisionVideoInputSetParam::Request  &req,
          rosbridge::ALVisionVideoInputSetParam::Response &res);

      bool setParamDefault(
          rosbridge::ALVisionVideoInputSetParamDefault::Request  &req,
          rosbridge::ALVisionVideoInputSetParamDefault::Response &res);

      bool setResolution(
          rosbridge::ALVisionVideoInputSetResolution::Request  &req,
          rosbridge::ALVisionVideoInputSetResolution::Response &res);

      bool sizesToResolution(
          rosbridge::ALVisionVideoInputSizesToResolution::Request  &req,
          rosbridge::ALVisionVideoInputSizesToResolution::Response &res);

      bool startFrameGrabber(
          rosbridge::ALVisionVideoInputStartFrameGrabber::Request  &req,
          rosbridge::ALVisionVideoInputStartFrameGrabber::Response &res);

      bool stopFrameGrabber(
          rosbridge::ALVisionVideoInputStopFrameGrabber::Request  &req,
          rosbridge::ALVisionVideoInputStopFrameGrabber::Response &res);

      bool stopVideo(
          rosbridge::ALVisionVideoInputStopVideo::Request  &req,
          rosbridge::ALVisionVideoInputStopVideo::Response &res);

      bool subscribe(
          rosbridge::ALVisionVideoInputSubscribe::Request  &req,
          rosbridge::ALVisionVideoInputSubscribe::Response &res);

      bool unsubscribe(
          rosbridge::ALVisionVideoInputUnsubscribe::Request  &req,
          rosbridge::ALVisionVideoInputUnsubscribe::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalvideodevice_h_declarations.inc"

      private:
        ALPtr<ALVideoDeviceProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALVIDEODEVICE_GENERATED_H

