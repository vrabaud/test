/*
* Generated for ALFrameManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALFRAMEMANAGER_GENERATED_H
#define ALROS_ALROSALFRAMEMANAGER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALFrameManagerCleanBehaviors.h>
#include <rosbridge/ALFrameManagerCompleteBehavior.h>
#include <rosbridge/ALFrameManagerCreateAndPlayTimeline.h>
#include <rosbridge/ALFrameManagerDeleteBehavior.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALFrameManagerExitBehavior.h>
#include <rosbridge/ALFrameManagerGetBehaviorPath.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALFrameManagerGetMotionLength.h>
#include <rosbridge/ALFrameManagerGetTimelineFps.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALFrameManagerGotoAndPlayString.h>
#include <rosbridge/ALFrameManagerGotoAndPlay.h>
#include <rosbridge/ALFrameManagerGotoAndStopString.h>
#include <rosbridge/ALFrameManagerGotoAndStop.h>
#include <rosbridge/ALFrameManagerNewBehavior.h>
#include <rosbridge/ALFrameManagerNewBehaviorFromChoregraphe.h>
#include <rosbridge/ALFrameManagerNewBehaviorFromFile.h>
#include <rosbridge/ALFrameManagerOnPythonError.h>
#include <rosbridge/ALFrameManagerOnPythonPrint.h>
#include <rosbridge/ALFrameManagerOnRubyError.h>
#include <rosbridge/ALFrameManagerOnRubyPrint.h>
#include <rosbridge/ALFrameManagerOnUrbiError.h>
#include <rosbridge/ALFrameManagerOnUrbiPrint.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALFrameManagerPlayBehavior.h>
#include <rosbridge/ALFrameManagerPlayDefaultProject.h>
#include <rosbridge/ALFrameManagerPlayTimeline.h>
#include <rosbridge/ALFrameManagerSetTimelineFps.h>
#include <rosbridge/ALFrameManagerStopTimeline.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalframemanager_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALFrameManagerProxy;

  class ALRosALFrameManager {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool cleanBehaviors(
          rosbridge::ALFrameManagerCleanBehaviors::Request  &req,
          rosbridge::ALFrameManagerCleanBehaviors::Response &res);

      bool completeBehavior(
          rosbridge::ALFrameManagerCompleteBehavior::Request  &req,
          rosbridge::ALFrameManagerCompleteBehavior::Response &res);

      bool createAndPlayTimeline(
          rosbridge::ALFrameManagerCreateAndPlayTimeline::Request  &req,
          rosbridge::ALFrameManagerCreateAndPlayTimeline::Response &res);

      bool deleteBehavior(
          rosbridge::ALFrameManagerDeleteBehavior::Request  &req,
          rosbridge::ALFrameManagerDeleteBehavior::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool exitBehavior(
          rosbridge::ALFrameManagerExitBehavior::Request  &req,
          rosbridge::ALFrameManagerExitBehavior::Response &res);

      bool getBehaviorPath(
          rosbridge::ALFrameManagerGetBehaviorPath::Request  &req,
          rosbridge::ALFrameManagerGetBehaviorPath::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getMotionLength(
          rosbridge::ALFrameManagerGetMotionLength::Request  &req,
          rosbridge::ALFrameManagerGetMotionLength::Response &res);

      bool getTimelineFps(
          rosbridge::ALFrameManagerGetTimelineFps::Request  &req,
          rosbridge::ALFrameManagerGetTimelineFps::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool gotoAndPlayString(
          rosbridge::ALFrameManagerGotoAndPlayString::Request  &req,
          rosbridge::ALFrameManagerGotoAndPlayString::Response &res);

      bool gotoAndPlay(
          rosbridge::ALFrameManagerGotoAndPlay::Request  &req,
          rosbridge::ALFrameManagerGotoAndPlay::Response &res);

      bool gotoAndStopString(
          rosbridge::ALFrameManagerGotoAndStopString::Request  &req,
          rosbridge::ALFrameManagerGotoAndStopString::Response &res);

      bool gotoAndStop(
          rosbridge::ALFrameManagerGotoAndStop::Request  &req,
          rosbridge::ALFrameManagerGotoAndStop::Response &res);

      bool newBehavior(
          rosbridge::ALFrameManagerNewBehavior::Request  &req,
          rosbridge::ALFrameManagerNewBehavior::Response &res);

      bool newBehaviorFromChoregraphe(
          rosbridge::ALFrameManagerNewBehaviorFromChoregraphe::Request  &req,
          rosbridge::ALFrameManagerNewBehaviorFromChoregraphe::Response &res);

      bool newBehaviorFromFile(
          rosbridge::ALFrameManagerNewBehaviorFromFile::Request  &req,
          rosbridge::ALFrameManagerNewBehaviorFromFile::Response &res);

      bool onPythonError(
          rosbridge::ALFrameManagerOnPythonError::Request  &req,
          rosbridge::ALFrameManagerOnPythonError::Response &res);

      bool onPythonPrint(
          rosbridge::ALFrameManagerOnPythonPrint::Request  &req,
          rosbridge::ALFrameManagerOnPythonPrint::Response &res);

      bool onRubyError(
          rosbridge::ALFrameManagerOnRubyError::Request  &req,
          rosbridge::ALFrameManagerOnRubyError::Response &res);

      bool onRubyPrint(
          rosbridge::ALFrameManagerOnRubyPrint::Request  &req,
          rosbridge::ALFrameManagerOnRubyPrint::Response &res);

      bool onUrbiError(
          rosbridge::ALFrameManagerOnUrbiError::Request  &req,
          rosbridge::ALFrameManagerOnUrbiError::Response &res);

      bool onUrbiPrint(
          rosbridge::ALFrameManagerOnUrbiPrint::Request  &req,
          rosbridge::ALFrameManagerOnUrbiPrint::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool playBehavior(
          rosbridge::ALFrameManagerPlayBehavior::Request  &req,
          rosbridge::ALFrameManagerPlayBehavior::Response &res);

      bool playDefaultProject(
          rosbridge::ALFrameManagerPlayDefaultProject::Request  &req,
          rosbridge::ALFrameManagerPlayDefaultProject::Response &res);

      bool playTimeline(
          rosbridge::ALFrameManagerPlayTimeline::Request  &req,
          rosbridge::ALFrameManagerPlayTimeline::Response &res);

      bool setTimelineFps(
          rosbridge::ALFrameManagerSetTimelineFps::Request  &req,
          rosbridge::ALFrameManagerSetTimelineFps::Response &res);

      bool stopTimeline(
          rosbridge::ALFrameManagerStopTimeline::Request  &req,
          rosbridge::ALFrameManagerStopTimeline::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalframemanager_h_declarations.inc"

      private:
        ALPtr<ALFrameManagerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALFRAMEMANAGER_GENERATED_H

