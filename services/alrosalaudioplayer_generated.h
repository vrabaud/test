/*
* Generated for ALAudioPlayer
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALAUDIOPLAYER_GENERATED_H
#define ALROS_ALROSALAUDIOPLAYER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALAudioPlayerGetMasterVolume.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALAudioPlayerGetVolume.h>
#include <rosbridge/ALAudioPlayerGoTo.h>
#include <rosbridge/ALAudioPlayerLoadFile.h>
#include <rosbridge/ALAudioPlayerPause.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALAudioPlayerPlay.h>
#include <rosbridge/ALAudioPlayerPlayInt.h>
#include <rosbridge/ALAudioPlayerPlayFile.h>
#include <rosbridge/ALAudioPlayerPlayFileString.h>
#include <rosbridge/ALAudioPlayerPlayFileFromPosition.h>
#include <rosbridge/ALAudioPlayerPlayFileFromPositionString.h>
#include <rosbridge/ALAudioPlayerPlayFileInLoop.h>
#include <rosbridge/ALAudioPlayerPlayFileInLoopString.h>
#include <rosbridge/ALAudioPlayerPlayInLoop.h>
#include <rosbridge/ALAudioPlayerPlayInLoopInt.h>
#include <rosbridge/ALAudioPlayerSetMasterVolume.h>
#include <rosbridge/ALAudioPlayerSetPanorama.h>
#include <rosbridge/ALAudioPlayerSetVolume.h>
#include <rosbridge/ALAudioPlayerStopAll.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalaudioplayer_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALAudioPlayerProxy;

  class ALRosALAudioPlayer {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMasterVolume(
          rosbridge::ALAudioPlayerGetMasterVolume::Request  &req,
          rosbridge::ALAudioPlayerGetMasterVolume::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool getVolume(
          rosbridge::ALAudioPlayerGetVolume::Request  &req,
          rosbridge::ALAudioPlayerGetVolume::Response &res);

      bool goTo(
          rosbridge::ALAudioPlayerGoTo::Request  &req,
          rosbridge::ALAudioPlayerGoTo::Response &res);

      bool loadFile(
          rosbridge::ALAudioPlayerLoadFile::Request  &req,
          rosbridge::ALAudioPlayerLoadFile::Response &res);

      bool pause(
          rosbridge::ALAudioPlayerPause::Request  &req,
          rosbridge::ALAudioPlayerPause::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool play(
          rosbridge::ALAudioPlayerPlay::Request  &req,
          rosbridge::ALAudioPlayerPlay::Response &res);

      bool playInt(
          rosbridge::ALAudioPlayerPlayInt::Request  &req,
          rosbridge::ALAudioPlayerPlayInt::Response &res);

      bool playFile(
          rosbridge::ALAudioPlayerPlayFile::Request  &req,
          rosbridge::ALAudioPlayerPlayFile::Response &res);

      bool playFileString(
          rosbridge::ALAudioPlayerPlayFileString::Request  &req,
          rosbridge::ALAudioPlayerPlayFileString::Response &res);

      bool playFileFromPosition(
          rosbridge::ALAudioPlayerPlayFileFromPosition::Request  &req,
          rosbridge::ALAudioPlayerPlayFileFromPosition::Response &res);

      bool playFileFromPositionString(
          rosbridge::ALAudioPlayerPlayFileFromPositionString::Request  &req,
          rosbridge::ALAudioPlayerPlayFileFromPositionString::Response &res);

      bool playFileInLoop(
          rosbridge::ALAudioPlayerPlayFileInLoop::Request  &req,
          rosbridge::ALAudioPlayerPlayFileInLoop::Response &res);

      bool playFileInLoopString(
          rosbridge::ALAudioPlayerPlayFileInLoopString::Request  &req,
          rosbridge::ALAudioPlayerPlayFileInLoopString::Response &res);

      bool playInLoop(
          rosbridge::ALAudioPlayerPlayInLoop::Request  &req,
          rosbridge::ALAudioPlayerPlayInLoop::Response &res);

      bool playInLoopInt(
          rosbridge::ALAudioPlayerPlayInLoopInt::Request  &req,
          rosbridge::ALAudioPlayerPlayInLoopInt::Response &res);

      bool setMasterVolume(
          rosbridge::ALAudioPlayerSetMasterVolume::Request  &req,
          rosbridge::ALAudioPlayerSetMasterVolume::Response &res);

      bool setPanorama(
          rosbridge::ALAudioPlayerSetPanorama::Request  &req,
          rosbridge::ALAudioPlayerSetPanorama::Response &res);

      bool setVolume(
          rosbridge::ALAudioPlayerSetVolume::Request  &req,
          rosbridge::ALAudioPlayerSetVolume::Response &res);

      bool stopAll(
          rosbridge::ALAudioPlayerStopAll::Request  &req,
          rosbridge::ALAudioPlayerStopAll::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalaudioplayer_h_declarations.inc"

      private:
        ALPtr<ALAudioPlayerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALAUDIOPLAYER_GENERATED_H

