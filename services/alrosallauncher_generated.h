/*
* Generated for ALLauncher
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALLAUNCHER_GENERATED_H
#define ALROS_ALROSALLAUNCHER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALLauncherGetGlobalModuleList.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALLauncherIsModulePresent.h>
#include <rosbridge/ALLauncherLaunchExecutable.h>
#include <rosbridge/ALLauncherLaunchLocal.h>
#include <rosbridge/ALLauncherLaunchPythonModule.h>
#include <rosbridge/ALLauncherLaunchScript.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosallauncher_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALLauncherProxy;

  class ALRosALLauncher {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getGlobalModuleList(
          rosbridge::ALLauncherGetGlobalModuleList::Request  &req,
          rosbridge::ALLauncherGetGlobalModuleList::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool isModulePresent(
          rosbridge::ALLauncherIsModulePresent::Request  &req,
          rosbridge::ALLauncherIsModulePresent::Response &res);

      bool launchExecutable(
          rosbridge::ALLauncherLaunchExecutable::Request  &req,
          rosbridge::ALLauncherLaunchExecutable::Response &res);

      bool launchLocal(
          rosbridge::ALLauncherLaunchLocal::Request  &req,
          rosbridge::ALLauncherLaunchLocal::Response &res);

      bool launchPythonModule(
          rosbridge::ALLauncherLaunchPythonModule::Request  &req,
          rosbridge::ALLauncherLaunchPythonModule::Response &res);

      bool launchScript(
          rosbridge::ALLauncherLaunchScript::Request  &req,
          rosbridge::ALLauncherLaunchScript::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosallauncher_h_declarations.inc"

      private:
        ALPtr<ALLauncherProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALLAUNCHER_GENERATED_H

