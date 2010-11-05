/*
* Generated for ALFaceTracker
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALFACETRACKER_GENERATED_H
#define ALROS_ALROSALFACETRACKER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALFaceTrackerGetPosition.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALFaceTrackerIsActive.h>
#include <rosbridge/ALFaceTrackerIsNewData.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALFaceTrackerSetWholeBodyOn.h>
#include <rosbridge/ALFaceTrackerStartTracker.h>
#include <rosbridge/ALFaceTrackerStopTracker.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalfacetracker_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALFaceTrackerProxy;

  class ALRosALFaceTracker {
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
          rosbridge::ALFaceTrackerGetPosition::Request  &req,
          rosbridge::ALFaceTrackerGetPosition::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool isActive(
          rosbridge::ALFaceTrackerIsActive::Request  &req,
          rosbridge::ALFaceTrackerIsActive::Response &res);

      bool isNewData(
          rosbridge::ALFaceTrackerIsNewData::Request  &req,
          rosbridge::ALFaceTrackerIsNewData::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setWholeBodyOn(
          rosbridge::ALFaceTrackerSetWholeBodyOn::Request  &req,
          rosbridge::ALFaceTrackerSetWholeBodyOn::Response &res);

      bool startTracker(
          rosbridge::ALFaceTrackerStartTracker::Request  &req,
          rosbridge::ALFaceTrackerStartTracker::Response &res);

      bool stopTracker(
          rosbridge::ALFaceTrackerStopTracker::Request  &req,
          rosbridge::ALFaceTrackerStopTracker::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalfacetracker_h_declarations.inc"

      private:
        ALPtr<ALFaceTrackerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALFACETRACKER_GENERATED_H

