/*
* Generated for ALResourceManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALRESOURCEMANAGER_GENERATED_H
#define ALROS_ALROSALRESOURCEMANAGER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALResourceManagerAreResourcesFree.h>
#include <rosbridge/ALResourceManagerAreResourcesOwnedBy.h>
#include <rosbridge/ALResourceManagerCreateResource.h>
#include <rosbridge/ALResourceManagerEnableStateResource.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALResourceManagerReleaseResource.h>
#include <rosbridge/ALResourceManagerReleaseResources.h>
#include <rosbridge/ALModuleVersion.h>
#include <rosbridge/ALResourceManagerWaitForResource.h>

// non generated code included
#include "alrosalresourcemanager_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALResourceManagerProxy;

  class ALRosALResourceManager {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool areResourcesFree(
          rosbridge::ALResourceManagerAreResourcesFree::Request  &req,
          rosbridge::ALResourceManagerAreResourcesFree::Response &res);

      bool areResourcesOwnedBy(
          rosbridge::ALResourceManagerAreResourcesOwnedBy::Request  &req,
          rosbridge::ALResourceManagerAreResourcesOwnedBy::Response &res);

      bool createResource(
          rosbridge::ALResourceManagerCreateResource::Request  &req,
          rosbridge::ALResourceManagerCreateResource::Response &res);

      bool enableStateResource(
          rosbridge::ALResourceManagerEnableStateResource::Request  &req,
          rosbridge::ALResourceManagerEnableStateResource::Response &res);

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

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool releaseResource(
          rosbridge::ALResourceManagerReleaseResource::Request  &req,
          rosbridge::ALResourceManagerReleaseResource::Response &res);

      bool releaseResources(
          rosbridge::ALResourceManagerReleaseResources::Request  &req,
          rosbridge::ALResourceManagerReleaseResources::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);

      bool waitForResource(
          rosbridge::ALResourceManagerWaitForResource::Request  &req,
          rosbridge::ALResourceManagerWaitForResource::Response &res);


// non generated code included
#include "alrosalresourcemanager_h_declarations.inc"

      private:
        ALPtr<ALResourceManagerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALRESOURCEMANAGER_GENERATED_H

