/*
* Generated for ALBluetooth
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALBLUETOOTH_GENERATED_H
#define ALROS_ALROSALBLUETOOTH_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALBluetoothConnect.h>
#include <rosbridge/ALBluetoothConnectString.h>
#include <rosbridge/ALBluetoothDisconnect.h>
#include <rosbridge/ALBluetoothDisconnectString.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALBluetoothGetConnectedDeviceList.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALBluetoothIsConnected.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalbluetooth_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALBluetoothProxy;

  class ALRosALBluetooth {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool connect(
          rosbridge::ALBluetoothConnect::Request  &req,
          rosbridge::ALBluetoothConnect::Response &res);

      bool connectString(
          rosbridge::ALBluetoothConnectString::Request  &req,
          rosbridge::ALBluetoothConnectString::Response &res);

      bool disconnect(
          rosbridge::ALBluetoothDisconnect::Request  &req,
          rosbridge::ALBluetoothDisconnect::Response &res);

      bool disconnectString(
          rosbridge::ALBluetoothDisconnectString::Request  &req,
          rosbridge::ALBluetoothDisconnectString::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getConnectedDeviceList(
          rosbridge::ALBluetoothGetConnectedDeviceList::Request  &req,
          rosbridge::ALBluetoothGetConnectedDeviceList::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool isConnected(
          rosbridge::ALBluetoothIsConnected::Request  &req,
          rosbridge::ALBluetoothIsConnected::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalbluetooth_h_declarations.inc"

      private:
        ALPtr<ALBluetoothProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALBLUETOOTH_GENERATED_H

