/*
* Generated for ALAudioDevice
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALAUDIODEVICE_GENERATED_H
#define ALROS_ALROSALAUDIODEVICE_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALAudioDeviceDisableEnergyComputation.h>
#include <rosbridge/ALAudioDeviceEnableEnergyComputation.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALAudioDeviceGetFrontMicEnergy.h>
#include <rosbridge/ALAudioDeviceGetLeftMicEnergy.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALAudioDeviceGetOutputVolume.h>
#include <rosbridge/ALAudioDeviceGetParameter.h>
#include <rosbridge/ALAudioDeviceGetRearMicEnergy.h>
#include <rosbridge/ALAudioDeviceGetRightMicEnergy.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALAudioDevicePlaySine.h>
#include <rosbridge/ALAudioDeviceResetAudio.h>
#include <rosbridge/ALAudioDeviceSendLocalBufferToOutput.h>
#include <rosbridge/ALAudioDeviceSetFileAsInput.h>
#include <rosbridge/ALAudioDeviceSetOutputVolume.h>
#include <rosbridge/ALAudioDeviceSetParameter.h>
#include <rosbridge/ALAudioDeviceStartMicrophonesRecording.h>
#include <rosbridge/ALAudioDeviceStopAudioOut.h>
#include <rosbridge/ALAudioDeviceStopMicrophonesRecording.h>
#include <rosbridge/ALAudioDeviceSubscribeRemoteModule.h>
#include <rosbridge/ALAudioDeviceUnSubscribeRemoteModule.h>
#include <rosbridge/ALModuleVersion.h>
#include <rosbridge/ALAudioDeviceWaitSynchronizer.h>

// non generated code included
#include "alrosalaudiodevice_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALAudioDeviceProxy;

  class ALRosALAudioDevice {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool disableEnergyComputation(
          rosbridge::ALAudioDeviceDisableEnergyComputation::Request  &req,
          rosbridge::ALAudioDeviceDisableEnergyComputation::Response &res);

      bool enableEnergyComputation(
          rosbridge::ALAudioDeviceEnableEnergyComputation::Request  &req,
          rosbridge::ALAudioDeviceEnableEnergyComputation::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getFrontMicEnergy(
          rosbridge::ALAudioDeviceGetFrontMicEnergy::Request  &req,
          rosbridge::ALAudioDeviceGetFrontMicEnergy::Response &res);

      bool getLeftMicEnergy(
          rosbridge::ALAudioDeviceGetLeftMicEnergy::Request  &req,
          rosbridge::ALAudioDeviceGetLeftMicEnergy::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getOutputVolume(
          rosbridge::ALAudioDeviceGetOutputVolume::Request  &req,
          rosbridge::ALAudioDeviceGetOutputVolume::Response &res);

      bool getParameter(
          rosbridge::ALAudioDeviceGetParameter::Request  &req,
          rosbridge::ALAudioDeviceGetParameter::Response &res);

      bool getRearMicEnergy(
          rosbridge::ALAudioDeviceGetRearMicEnergy::Request  &req,
          rosbridge::ALAudioDeviceGetRearMicEnergy::Response &res);

      bool getRightMicEnergy(
          rosbridge::ALAudioDeviceGetRightMicEnergy::Request  &req,
          rosbridge::ALAudioDeviceGetRightMicEnergy::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool playSine(
          rosbridge::ALAudioDevicePlaySine::Request  &req,
          rosbridge::ALAudioDevicePlaySine::Response &res);

      bool resetAudio(
          rosbridge::ALAudioDeviceResetAudio::Request  &req,
          rosbridge::ALAudioDeviceResetAudio::Response &res);

      bool sendLocalBufferToOutput(
          rosbridge::ALAudioDeviceSendLocalBufferToOutput::Request  &req,
          rosbridge::ALAudioDeviceSendLocalBufferToOutput::Response &res);

      bool setFileAsInput(
          rosbridge::ALAudioDeviceSetFileAsInput::Request  &req,
          rosbridge::ALAudioDeviceSetFileAsInput::Response &res);

      bool setOutputVolume(
          rosbridge::ALAudioDeviceSetOutputVolume::Request  &req,
          rosbridge::ALAudioDeviceSetOutputVolume::Response &res);

      bool setParameter(
          rosbridge::ALAudioDeviceSetParameter::Request  &req,
          rosbridge::ALAudioDeviceSetParameter::Response &res);

      bool startMicrophonesRecording(
          rosbridge::ALAudioDeviceStartMicrophonesRecording::Request  &req,
          rosbridge::ALAudioDeviceStartMicrophonesRecording::Response &res);

      bool stopAudioOut(
          rosbridge::ALAudioDeviceStopAudioOut::Request  &req,
          rosbridge::ALAudioDeviceStopAudioOut::Response &res);

      bool stopMicrophonesRecording(
          rosbridge::ALAudioDeviceStopMicrophonesRecording::Request  &req,
          rosbridge::ALAudioDeviceStopMicrophonesRecording::Response &res);

      bool subscribeRemoteModule(
          rosbridge::ALAudioDeviceSubscribeRemoteModule::Request  &req,
          rosbridge::ALAudioDeviceSubscribeRemoteModule::Response &res);

      bool unSubscribeRemoteModule(
          rosbridge::ALAudioDeviceUnSubscribeRemoteModule::Request  &req,
          rosbridge::ALAudioDeviceUnSubscribeRemoteModule::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);

      bool waitSynchronizer(
          rosbridge::ALAudioDeviceWaitSynchronizer::Request  &req,
          rosbridge::ALAudioDeviceWaitSynchronizer::Response &res);


// non generated code included
#include "alrosalaudiodevice_h_declarations.inc"

      private:
        ALPtr<ALAudioDeviceProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALAUDIODEVICE_GENERATED_H

