/*
* Generated for ALInfrared
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALINFRARED_GENERATED_H
#define ALROS_ALROSALINFRARED_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALInfraredConfRemoteRecordAddKey.h>
#include <rosbridge/ALInfraredConfRemoteRecordCancel.h>
#include <rosbridge/ALInfraredConfRemoteRecordGetStatus.h>
#include <rosbridge/ALInfraredConfRemoteRecordNext.h>
#include <rosbridge/ALInfraredConfRemoteRecordSave.h>
#include <rosbridge/ALInfraredConfRemoteRecordStart.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALInfraredInitReception.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALInfraredSend32.h>
#include <rosbridge/ALInfraredSend32Int.h>
#include <rosbridge/ALInfraredSend8.h>
#include <rosbridge/ALInfraredSendIpAddress.h>
#include <rosbridge/ALInfraredSendRemoteKey.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalinfrared_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALInfraredProxy;

  class ALRosALInfrared {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool confRemoteRecordAddKey(
          rosbridge::ALInfraredConfRemoteRecordAddKey::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordAddKey::Response &res);

      bool confRemoteRecordCancel(
          rosbridge::ALInfraredConfRemoteRecordCancel::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordCancel::Response &res);

      bool confRemoteRecordGetStatus(
          rosbridge::ALInfraredConfRemoteRecordGetStatus::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordGetStatus::Response &res);

      bool confRemoteRecordNext(
          rosbridge::ALInfraredConfRemoteRecordNext::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordNext::Response &res);

      bool confRemoteRecordSave(
          rosbridge::ALInfraredConfRemoteRecordSave::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordSave::Response &res);

      bool confRemoteRecordStart(
          rosbridge::ALInfraredConfRemoteRecordStart::Request  &req,
          rosbridge::ALInfraredConfRemoteRecordStart::Response &res);

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

      bool initReception(
          rosbridge::ALInfraredInitReception::Request  &req,
          rosbridge::ALInfraredInitReception::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool send32(
          rosbridge::ALInfraredSend32::Request  &req,
          rosbridge::ALInfraredSend32::Response &res);

      bool send32Int(
          rosbridge::ALInfraredSend32Int::Request  &req,
          rosbridge::ALInfraredSend32Int::Response &res);

      bool send8(
          rosbridge::ALInfraredSend8::Request  &req,
          rosbridge::ALInfraredSend8::Response &res);

      bool sendIpAddress(
          rosbridge::ALInfraredSendIpAddress::Request  &req,
          rosbridge::ALInfraredSendIpAddress::Response &res);

      bool sendRemoteKey(
          rosbridge::ALInfraredSendRemoteKey::Request  &req,
          rosbridge::ALInfraredSendRemoteKey::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalinfrared_h_declarations.inc"

      private:
        ALPtr<ALInfraredProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALINFRARED_GENERATED_H

