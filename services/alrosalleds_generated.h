/*
* Generated for ALLeds
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALLEDS_GENERATED_H
#define ALROS_ALROSALLEDS_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALLedsCreateGroup.h>
#include <rosbridge/ALLedsEarLedsSetAngle.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALLedsFade.h>
#include <rosbridge/ALLedsFadeRGB.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALLedsListGroup.h>
#include <rosbridge/ALLedsListGroups.h>
#include <rosbridge/ALLedsListLED.h>
#include <rosbridge/ALLedsListLEDs.h>
#include <rosbridge/ALLedsOff.h>
#include <rosbridge/ALLedsOn.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALLedsRandomEyes.h>
#include <rosbridge/ALLedsRasta.h>
#include <rosbridge/ALLedsRotateEyes.h>
#include <rosbridge/ALLedsSetIntensity.h>
#include <rosbridge/ALModuleVersion.h>

// non generated code included
#include "alrosalleds_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALLedsProxy;

  class ALRosALLeds {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool createGroup(
          rosbridge::ALLedsCreateGroup::Request  &req,
          rosbridge::ALLedsCreateGroup::Response &res);

      bool earLedsSetAngle(
          rosbridge::ALLedsEarLedsSetAngle::Request  &req,
          rosbridge::ALLedsEarLedsSetAngle::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool fade(
          rosbridge::ALLedsFade::Request  &req,
          rosbridge::ALLedsFade::Response &res);

      bool fadeRGB(
          rosbridge::ALLedsFadeRGB::Request  &req,
          rosbridge::ALLedsFadeRGB::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool listGroup(
          rosbridge::ALLedsListGroup::Request  &req,
          rosbridge::ALLedsListGroup::Response &res);

      bool listGroups(
          rosbridge::ALLedsListGroups::Request  &req,
          rosbridge::ALLedsListGroups::Response &res);

      bool listLED(
          rosbridge::ALLedsListLED::Request  &req,
          rosbridge::ALLedsListLED::Response &res);

      bool listLEDs(
          rosbridge::ALLedsListLEDs::Request  &req,
          rosbridge::ALLedsListLEDs::Response &res);

      bool off(
          rosbridge::ALLedsOff::Request  &req,
          rosbridge::ALLedsOff::Response &res);

      bool on(
          rosbridge::ALLedsOn::Request  &req,
          rosbridge::ALLedsOn::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool randomEyes(
          rosbridge::ALLedsRandomEyes::Request  &req,
          rosbridge::ALLedsRandomEyes::Response &res);

      bool rasta(
          rosbridge::ALLedsRasta::Request  &req,
          rosbridge::ALLedsRasta::Response &res);

      bool rotateEyes(
          rosbridge::ALLedsRotateEyes::Request  &req,
          rosbridge::ALLedsRotateEyes::Response &res);

      bool setIntensity(
          rosbridge::ALLedsSetIntensity::Request  &req,
          rosbridge::ALLedsSetIntensity::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);


// non generated code included
#include "alrosalleds_h_declarations.inc"

      private:
        ALPtr<ALLedsProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALLEDS_GENERATED_H

