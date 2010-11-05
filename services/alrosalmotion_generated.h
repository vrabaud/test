/*
* Generated for ALMotion
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALMOTION_GENERATED_H
#define ALROS_ALROSALMOTION_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALMotionAreResourcesAvailable.h>
#include <rosbridge/ALMotionChangePosition.h>
#include <rosbridge/ALMotionChangeTransform.h>
#include <rosbridge/ALMotionCloseHand.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALMotionGetCOM.h>
#include <rosbridge/ALMotionGetJointNames.h>
#include <rosbridge/ALMotionGetMass.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALMotionGetPosition.h>
#include <rosbridge/ALMotionGetRobotPosition.h>
#include <rosbridge/ALMotionGetRobotVelocity.h>
#include <rosbridge/ALMotionGetSummary.h>
#include <rosbridge/ALMotionGetTransform.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALMotionKillAll.h>
#include <rosbridge/ALMotionKillTask.h>
#include <rosbridge/ALMotionKillTasksUsingResources.h>
#include <rosbridge/ALMotionKillWalk.h>
#include <rosbridge/ALMotionOpenHand.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALMotionSetPosition.h>
#include <rosbridge/ALMotionSetTransform.h>
#include <rosbridge/ALMotionSetWalkArmsEnable.h>
#include <rosbridge/ALMotionSetWalkTargetVelocity.h>
#include <rosbridge/ALMotionStepTo.h>
#include <rosbridge/ALMotionUpdateTrackerTarget.h>
#include <rosbridge/ALModuleVersion.h>
#include <rosbridge/ALMotionWaitUntilWalkIsFinished.h>
#include <rosbridge/ALMotionWalkIsActive.h>
#include <rosbridge/ALMotionWalkTo.h>
#include <rosbridge/ALMotionWbEnable.h>
#include <rosbridge/ALMotionWbEnableBalanceConstraint.h>
#include <rosbridge/ALMotionWbEnableEffectorControl.h>
#include <rosbridge/ALMotionWbFootState.h>

// non generated code included
#include "alrosalmotion_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALMotionProxy;

  class ALRosALMotion {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool areResourcesAvailable(
          rosbridge::ALMotionAreResourcesAvailable::Request  &req,
          rosbridge::ALMotionAreResourcesAvailable::Response &res);

      bool changePosition(
          rosbridge::ALMotionChangePosition::Request  &req,
          rosbridge::ALMotionChangePosition::Response &res);

      bool changeTransform(
          rosbridge::ALMotionChangeTransform::Request  &req,
          rosbridge::ALMotionChangeTransform::Response &res);

      bool closeHand(
          rosbridge::ALMotionCloseHand::Request  &req,
          rosbridge::ALMotionCloseHand::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getCOM(
          rosbridge::ALMotionGetCOM::Request  &req,
          rosbridge::ALMotionGetCOM::Response &res);

      bool getJointNames(
          rosbridge::ALMotionGetJointNames::Request  &req,
          rosbridge::ALMotionGetJointNames::Response &res);

      bool getMass(
          rosbridge::ALMotionGetMass::Request  &req,
          rosbridge::ALMotionGetMass::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getPosition(
          rosbridge::ALMotionGetPosition::Request  &req,
          rosbridge::ALMotionGetPosition::Response &res);

      bool getRobotPosition(
          rosbridge::ALMotionGetRobotPosition::Request  &req,
          rosbridge::ALMotionGetRobotPosition::Response &res);

      bool getRobotVelocity(
          rosbridge::ALMotionGetRobotVelocity::Request  &req,
          rosbridge::ALMotionGetRobotVelocity::Response &res);

      bool getSummary(
          rosbridge::ALMotionGetSummary::Request  &req,
          rosbridge::ALMotionGetSummary::Response &res);

      bool getTransform(
          rosbridge::ALMotionGetTransform::Request  &req,
          rosbridge::ALMotionGetTransform::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool killAll(
          rosbridge::ALMotionKillAll::Request  &req,
          rosbridge::ALMotionKillAll::Response &res);

      bool killTask(
          rosbridge::ALMotionKillTask::Request  &req,
          rosbridge::ALMotionKillTask::Response &res);

      bool killTasksUsingResources(
          rosbridge::ALMotionKillTasksUsingResources::Request  &req,
          rosbridge::ALMotionKillTasksUsingResources::Response &res);

      bool killWalk(
          rosbridge::ALMotionKillWalk::Request  &req,
          rosbridge::ALMotionKillWalk::Response &res);

      bool openHand(
          rosbridge::ALMotionOpenHand::Request  &req,
          rosbridge::ALMotionOpenHand::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool setPosition(
          rosbridge::ALMotionSetPosition::Request  &req,
          rosbridge::ALMotionSetPosition::Response &res);

      bool setTransform(
          rosbridge::ALMotionSetTransform::Request  &req,
          rosbridge::ALMotionSetTransform::Response &res);

      bool setWalkArmsEnable(
          rosbridge::ALMotionSetWalkArmsEnable::Request  &req,
          rosbridge::ALMotionSetWalkArmsEnable::Response &res);

      bool setWalkTargetVelocity(
          rosbridge::ALMotionSetWalkTargetVelocity::Request  &req,
          rosbridge::ALMotionSetWalkTargetVelocity::Response &res);

      bool stepTo(
          rosbridge::ALMotionStepTo::Request  &req,
          rosbridge::ALMotionStepTo::Response &res);

      bool updateTrackerTarget(
          rosbridge::ALMotionUpdateTrackerTarget::Request  &req,
          rosbridge::ALMotionUpdateTrackerTarget::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);

      bool waitUntilWalkIsFinished(
          rosbridge::ALMotionWaitUntilWalkIsFinished::Request  &req,
          rosbridge::ALMotionWaitUntilWalkIsFinished::Response &res);

      bool walkIsActive(
          rosbridge::ALMotionWalkIsActive::Request  &req,
          rosbridge::ALMotionWalkIsActive::Response &res);

      bool walkTo(
          rosbridge::ALMotionWalkTo::Request  &req,
          rosbridge::ALMotionWalkTo::Response &res);

      bool wbEnable(
          rosbridge::ALMotionWbEnable::Request  &req,
          rosbridge::ALMotionWbEnable::Response &res);

      bool wbEnableBalanceConstraint(
          rosbridge::ALMotionWbEnableBalanceConstraint::Request  &req,
          rosbridge::ALMotionWbEnableBalanceConstraint::Response &res);

      bool wbEnableEffectorControl(
          rosbridge::ALMotionWbEnableEffectorControl::Request  &req,
          rosbridge::ALMotionWbEnableEffectorControl::Response &res);

      bool wbFootState(
          rosbridge::ALMotionWbFootState::Request  &req,
          rosbridge::ALMotionWbFootState::Response &res);


// non generated code included
#include "alrosalmotion_h_declarations.inc"

      private:
        ALPtr<ALMotionProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALMOTION_GENERATED_H

