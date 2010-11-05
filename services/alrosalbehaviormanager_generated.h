/*
* Generated for ALBehaviorManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALBEHAVIORMANAGER_GENERATED_H
#define ALROS_ALROSALBEHAVIORMANAGER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALBehaviorManagerAddDefaultBehavior.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALBehaviorManagerGetDefaultBehaviors.h>
#include <rosbridge/ALBehaviorManagerGetInstalledBehaviors.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALBehaviorManagerGetRunningBehaviors.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALBehaviorManagerIsBehaviorInstalled.h>
#include <rosbridge/ALBehaviorManagerIsBehaviorRunning.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALBehaviorManagerPlayDefaultProject.h>
#include <rosbridge/ALBehaviorManagerPreloadBehavior.h>
#include <rosbridge/ALBehaviorManagerRemoveBehavior.h>
#include <rosbridge/ALBehaviorManagerRemoveDefaultBehavior.h>
#include <rosbridge/ALBehaviorManagerRunBehavior.h>
#include <rosbridge/ALBehaviorManagerStopAllBehaviors.h>
#include <rosbridge/ALBehaviorManagerStopBehavior.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalbehaviormanager_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALBehaviorManagerProxy;

  class ALRosALBehaviorManager {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool addDefaultBehavior(
          rosbridge::ALBehaviorManagerAddDefaultBehavior::Request  &req,
          rosbridge::ALBehaviorManagerAddDefaultBehavior::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getDefaultBehaviors(
          rosbridge::ALBehaviorManagerGetDefaultBehaviors::Request  &req,
          rosbridge::ALBehaviorManagerGetDefaultBehaviors::Response &res);

      bool getInstalledBehaviors(
          rosbridge::ALBehaviorManagerGetInstalledBehaviors::Request  &req,
          rosbridge::ALBehaviorManagerGetInstalledBehaviors::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getRunningBehaviors(
          rosbridge::ALBehaviorManagerGetRunningBehaviors::Request  &req,
          rosbridge::ALBehaviorManagerGetRunningBehaviors::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool isBehaviorInstalled(
          rosbridge::ALBehaviorManagerIsBehaviorInstalled::Request  &req,
          rosbridge::ALBehaviorManagerIsBehaviorInstalled::Response &res);

      bool isBehaviorRunning(
          rosbridge::ALBehaviorManagerIsBehaviorRunning::Request  &req,
          rosbridge::ALBehaviorManagerIsBehaviorRunning::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool playDefaultProject(
          rosbridge::ALBehaviorManagerPlayDefaultProject::Request  &req,
          rosbridge::ALBehaviorManagerPlayDefaultProject::Response &res);

      bool preloadBehavior(
          rosbridge::ALBehaviorManagerPreloadBehavior::Request  &req,
          rosbridge::ALBehaviorManagerPreloadBehavior::Response &res);

      bool removeBehavior(
          rosbridge::ALBehaviorManagerRemoveBehavior::Request  &req,
          rosbridge::ALBehaviorManagerRemoveBehavior::Response &res);

      bool removeDefaultBehavior(
          rosbridge::ALBehaviorManagerRemoveDefaultBehavior::Request  &req,
          rosbridge::ALBehaviorManagerRemoveDefaultBehavior::Response &res);

      bool runBehavior(
          rosbridge::ALBehaviorManagerRunBehavior::Request  &req,
          rosbridge::ALBehaviorManagerRunBehavior::Response &res);

      bool stopAllBehaviors(
          rosbridge::ALBehaviorManagerStopAllBehaviors::Request  &req,
          rosbridge::ALBehaviorManagerStopAllBehaviors::Response &res);

      bool stopBehavior(
          rosbridge::ALBehaviorManagerStopBehavior::Request  &req,
          rosbridge::ALBehaviorManagerStopBehavior::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalbehaviormanager_h_declarations.inc"

      private:
        ALPtr<ALBehaviorManagerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALBEHAVIORMANAGER_GENERATED_H

