/*
* Generated for ALPythonBridge
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALPYTHONBRIDGE_GENERATED_H
#define ALROS_ALROSALPYTHONBRIDGE_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALPythonBridgeEval.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalpythonbridge_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALPythonBridgeProxy;

  class ALRosALPythonBridge {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool eval(
          rosbridge::ALPythonBridgeEval::Request  &req,
          rosbridge::ALPythonBridgeEval::Response &res);

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

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalpythonbridge_h_declarations.inc"

      private:
        ALPtr<ALPythonBridgeProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALPYTHONBRIDGE_GENERATED_H

