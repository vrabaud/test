/*
* Generated for ALRedBallTracker
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALREDBALLTRACKER_GENERATED_H
#define ALROS_ALROSALREDBALLTRACKER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALRedBallTrackerGetPosition.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALRedBallTrackerIsActive.h>
#include <rosbridge/ALRedBallTrackerIsNewData.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALRedBallTrackerSetWholeBodyOn.h>
#include <rosbridge/ALRedBallTrackerStartTracker.h>
#include <rosbridge/ALRedBallTrackerStopTracker.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalredballtracker_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALRedBallTrackerProxy;

  class ALRosALRedBallTracker {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getPosition(
          rosbridge::ALRedBallTrackerGetPosition::Request  &req,
          rosbridge::ALRedBallTrackerGetPosition::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool isActive(
          rosbridge::ALRedBallTrackerIsActive::Request  &req,
          rosbridge::ALRedBallTrackerIsActive::Response &res);

      bool isNewData(
          rosbridge::ALRedBallTrackerIsNewData::Request  &req,
          rosbridge::ALRedBallTrackerIsNewData::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setWholeBodyOn(
          rosbridge::ALRedBallTrackerSetWholeBodyOn::Request  &req,
          rosbridge::ALRedBallTrackerSetWholeBodyOn::Response &res);

      bool startTracker(
          rosbridge::ALRedBallTrackerStartTracker::Request  &req,
          rosbridge::ALRedBallTrackerStartTracker::Response &res);

      bool stopTracker(
          rosbridge::ALRedBallTrackerStopTracker::Request  &req,
          rosbridge::ALRedBallTrackerStopTracker::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalredballtracker_h_declarations.inc"

      private:
        ALPtr<ALRedBallTrackerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALREDBALLTRACKER_GENERATED_H

