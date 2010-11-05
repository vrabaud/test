/*
* Generated for ALFileManager
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALFILEMANAGER_GENERATED_H
#define ALROS_ALROSALFILEMANAGER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALFileManagerDataFileExists.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALFileManagerFileExists.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALFileManagerGetFileCompletePath.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALFileManagerGetSystemSharedFolderPath.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALFileManagerGetUserSharedFolderPath.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALFileManagerSetUserSharedFolderPath.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalfilemanager_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALFileManagerProxy;

  class ALRosALFileManager {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool dataFileExists(
          rosbridge::ALFileManagerDataFileExists::Request  &req,
          rosbridge::ALFileManagerDataFileExists::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool fileExists(
          rosbridge::ALFileManagerFileExists::Request  &req,
          rosbridge::ALFileManagerFileExists::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getFileCompletePath(
          rosbridge::ALFileManagerGetFileCompletePath::Request  &req,
          rosbridge::ALFileManagerGetFileCompletePath::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getSystemSharedFolderPath(
          rosbridge::ALFileManagerGetSystemSharedFolderPath::Request  &req,
          rosbridge::ALFileManagerGetSystemSharedFolderPath::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool getUserSharedFolderPath(
          rosbridge::ALFileManagerGetUserSharedFolderPath::Request  &req,
          rosbridge::ALFileManagerGetUserSharedFolderPath::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setUserSharedFolderPath(
          rosbridge::ALFileManagerSetUserSharedFolderPath::Request  &req,
          rosbridge::ALFileManagerSetUserSharedFolderPath::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalfilemanager_h_declarations.inc"

      private:
        ALPtr<ALFileManagerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALFILEMANAGER_GENERATED_H

