/*
* Generated
*
* Copyright (C) 2010, 2011 Aldebaran Robotics
*
*/

#include "alrosalaudiodevice_generated.h"
#include "alrosalaudioplayer_generated.h"
#include "alrosalaudiosourcelocalization_generated.h"
#include "alrosalbehaviormanager_generated.h"
#include "alrosalbluetooth_generated.h"
#include "alrosalbonjour_generated.h"
#include "alrosalfacedetection_generated.h"
#include "alrosalfacetracker_generated.h"
#include "alrosalfilemanager_generated.h"
#include "alrosalframemanager_generated.h"
#include "alrosalfsr_generated.h"
#include "alrosalinfrared_generated.h"
#include "alrosallandmarkdetection_generated.h"
#include "alrosallaser_generated.h"
#include "alrosallauncher_generated.h"
#include "alrosalleds_generated.h"
#include "alrosallogger_generated.h"
#include "alrosalmemory_generated.h"
#include "alrosalmotion_generated.h"
#include "alrosalmotionrecorder_generated.h"
#include "alrosalpreferences_generated.h"
#include "alrosalpythonbridge_generated.h"
#include "alrosalredballdetection_generated.h"
#include "alrosalredballtracker_generated.h"
#include "alrosalrobotpose_generated.h"
#include "alrosalsensors_generated.h"
#include "alrosalsentinel_generated.h"
#include "alrosalsonar_generated.h"
#include "alrosalsounddetection_generated.h"
#include "alrosalspeechrecognition_generated.h"
#include "alrosaltexttospeech_generated.h"
#include "alrosalvideodevice_generated.h"
#include "alrosalvisionrecognition_generated.h"
#include "alrosalvisiontoolbox_generated.h"
#include "alrosdcm_generated.h"

namespace AL {
  class ALRosNaoQi {
    public:
    void bindModules(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
    {
      fALRosALAudioDevice.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALAudioPlayer.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALAudioSourceLocalization.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALBehaviorManager.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALBluetooth.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALBonjour.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALFaceDetection.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALFaceTracker.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALFileManager.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALFrameManager.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALFsr.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALInfrared.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALLandMarkDetection.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALLaser.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALLauncher.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALLeds.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALLogger.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALMemory.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALMotion.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALMotionRecorder.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALPreferences.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALPythonBridge.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALRedBallDetection.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALRedBallTracker.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALRobotPose.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALSensors.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALSentinel.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALSonar.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALSoundDetection.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALSpeechRecognition.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALTextToSpeech.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALVideoDevice.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALVisionRecognition.bindMethods(pNaoQiBroker, pRosNode);
      fALRosALVisionToolbox.bindMethods(pNaoQiBroker, pRosNode);
      fALRosDCM.bindMethods(pNaoQiBroker, pRosNode);
    }

    protected:
    ALRosALAudioDevice fALRosALAudioDevice;
    ALRosALAudioPlayer fALRosALAudioPlayer;
    ALRosALAudioSourceLocalization fALRosALAudioSourceLocalization;
    ALRosALBehaviorManager fALRosALBehaviorManager;
    ALRosALBluetooth fALRosALBluetooth;
    ALRosALBonjour fALRosALBonjour;
    ALRosALFaceDetection fALRosALFaceDetection;
    ALRosALFaceTracker fALRosALFaceTracker;
    ALRosALFileManager fALRosALFileManager;
    ALRosALFrameManager fALRosALFrameManager;
    ALRosALFsr fALRosALFsr;
    ALRosALInfrared fALRosALInfrared;
    ALRosALLandMarkDetection fALRosALLandMarkDetection;
    ALRosALLaser fALRosALLaser;
    ALRosALLauncher fALRosALLauncher;
    ALRosALLeds fALRosALLeds;
    ALRosALLogger fALRosALLogger;
    ALRosALMemory fALRosALMemory;
    ALRosALMotion fALRosALMotion;
    ALRosALMotionRecorder fALRosALMotionRecorder;
    ALRosALPreferences fALRosALPreferences;
    ALRosALPythonBridge fALRosALPythonBridge;
    ALRosALRedBallDetection fALRosALRedBallDetection;
    ALRosALRedBallTracker fALRosALRedBallTracker;
    ALRosALRobotPose fALRosALRobotPose;
    ALRosALSensors fALRosALSensors;
    ALRosALSentinel fALRosALSentinel;
    ALRosALSonar fALRosALSonar;
    ALRosALSoundDetection fALRosALSoundDetection;
    ALRosALSpeechRecognition fALRosALSpeechRecognition;
    ALRosALTextToSpeech fALRosALTextToSpeech;
    ALRosALVideoDevice fALRosALVideoDevice;
    ALRosALVisionRecognition fALRosALVisionRecognition;
    ALRosALVisionToolbox fALRosALVisionToolbox;
    ALRosDCM fALRosDCM;
  };
}
