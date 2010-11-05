/*
* Generated for ALSentinel
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALSENTINEL_GENERATED_H
#define ALROS_ALROSALSENTINEL_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALSentinelEnableBatteryMeasure.h>
#include <rosbridge/ALSentinelEnableCheckRemainingRam.h>
#include <rosbridge/ALSentinelEnableDefaultActionDoubleClick.h>
#include <rosbridge/ALSentinelEnableDefaultActionSimpleClick.h>
#include <rosbridge/ALSentinelEnableDefaultActionTripleClick.h>
#include <rosbridge/ALSentinelEnableHeatMonitoring.h>
#include <rosbridge/ALSentinelEnablePowerMonitoring.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALSentinelExitNaoqi.h>
#include <rosbridge/ALSentinelGetBatteryLevel.h>
#include <rosbridge/ALSentinelGetBatteryLevelDesc.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALSentinelGetRemainingRam.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALSentinelPresentation.h>
#include <rosbridge/ALSentinelRun.h>
#include <rosbridge/ALSentinelSetPowerLimit.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalsentinel_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALSentinelProxy;

  class ALRosALSentinel {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool enableBatteryMeasure(
          rosbridge::ALSentinelEnableBatteryMeasure::Request  &req,
          rosbridge::ALSentinelEnableBatteryMeasure::Response &res);

      bool enableCheckRemainingRam(
          rosbridge::ALSentinelEnableCheckRemainingRam::Request  &req,
          rosbridge::ALSentinelEnableCheckRemainingRam::Response &res);

      bool enableDefaultActionDoubleClick(
          rosbridge::ALSentinelEnableDefaultActionDoubleClick::Request  &req,
          rosbridge::ALSentinelEnableDefaultActionDoubleClick::Response &res);

      bool enableDefaultActionSimpleClick(
          rosbridge::ALSentinelEnableDefaultActionSimpleClick::Request  &req,
          rosbridge::ALSentinelEnableDefaultActionSimpleClick::Response &res);

      bool enableDefaultActionTripleClick(
          rosbridge::ALSentinelEnableDefaultActionTripleClick::Request  &req,
          rosbridge::ALSentinelEnableDefaultActionTripleClick::Response &res);

      bool enableHeatMonitoring(
          rosbridge::ALSentinelEnableHeatMonitoring::Request  &req,
          rosbridge::ALSentinelEnableHeatMonitoring::Response &res);

      bool enablePowerMonitoring(
          rosbridge::ALSentinelEnablePowerMonitoring::Request  &req,
          rosbridge::ALSentinelEnablePowerMonitoring::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool exitNaoqi(
          rosbridge::ALSentinelExitNaoqi::Request  &req,
          rosbridge::ALSentinelExitNaoqi::Response &res);

      bool getBatteryLevel(
          rosbridge::ALSentinelGetBatteryLevel::Request  &req,
          rosbridge::ALSentinelGetBatteryLevel::Response &res);

      bool getBatteryLevelDesc(
          rosbridge::ALSentinelGetBatteryLevelDesc::Request  &req,
          rosbridge::ALSentinelGetBatteryLevelDesc::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getRemainingRam(
          rosbridge::ALSentinelGetRemainingRam::Request  &req,
          rosbridge::ALSentinelGetRemainingRam::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool presentation(
          rosbridge::ALSentinelPresentation::Request  &req,
          rosbridge::ALSentinelPresentation::Response &res);

      bool run(
          rosbridge::ALSentinelRun::Request  &req,
          rosbridge::ALSentinelRun::Response &res);

      bool setPowerLimit(
          rosbridge::ALSentinelSetPowerLimit::Request  &req,
          rosbridge::ALSentinelSetPowerLimit::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalsentinel_h_declarations.inc"

      private:
        ALPtr<ALSentinelProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALSENTINEL_GENERATED_H

