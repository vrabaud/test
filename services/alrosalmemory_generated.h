/*
* Generated for ALMemory
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALMEMORY_GENERATED_H
#define ALROS_ALROSALMEMORY_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALMemoryDeclareEventString.h>
#include <rosbridge/ALMemoryDeclareEvent.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALMemoryGetEventList.h>
#include <rosbridge/ALMemoryGetExtractorEvent.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALMemoryGetMicroEventList.h>
#include <rosbridge/ALMemoryGetSubscribers.h>
#include <rosbridge/ALMemoryGetType.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALMemoryInsertDataInt.h>
#include <rosbridge/ALMemoryInsertDataFloat.h>
#include <rosbridge/ALMemoryInsertDataString.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALMemoryRemoveData.h>
#include <rosbridge/ALMemoryRemoveMicroEvent.h>
#include <rosbridge/ALMemorySubscribeToEvent.h>
#include <rosbridge/ALMemorySubscribeToEventString.h>
#include <rosbridge/ALMemorySubscribeToMicroEvent.h>
#include <rosbridge/ALMemoryUnregisterModuleReference.h>
#include <rosbridge/ALMemoryUnsubscribeOnDataChange.h>
#include <rosbridge/ALMemoryUnsubscribeToEvent.h>
#include <rosbridge/ALMemoryUnsubscribeToMicroEvent.h>
#include <rosbridge/ALModuleVersion.h>
#include <rosbridge/ALMemoryWaitOnCondition.h>
#include <rosbridge/ALMemoryWaitSynchronizer.h>

// non generated code included
#include "alrosalmemory_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALMemoryProxy;

  class ALRosALMemory {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool declareEventString(
          rosbridge::ALMemoryDeclareEventString::Request  &req,
          rosbridge::ALMemoryDeclareEventString::Response &res);

      bool declareEvent(
          rosbridge::ALMemoryDeclareEvent::Request  &req,
          rosbridge::ALMemoryDeclareEvent::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getEventList(
          rosbridge::ALMemoryGetEventList::Request  &req,
          rosbridge::ALMemoryGetEventList::Response &res);

      bool getExtractorEvent(
          rosbridge::ALMemoryGetExtractorEvent::Request  &req,
          rosbridge::ALMemoryGetExtractorEvent::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getMicroEventList(
          rosbridge::ALMemoryGetMicroEventList::Request  &req,
          rosbridge::ALMemoryGetMicroEventList::Response &res);

      bool getSubscribers(
          rosbridge::ALMemoryGetSubscribers::Request  &req,
          rosbridge::ALMemoryGetSubscribers::Response &res);

      bool getType(
          rosbridge::ALMemoryGetType::Request  &req,
          rosbridge::ALMemoryGetType::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool insertDataInt(
          rosbridge::ALMemoryInsertDataInt::Request  &req,
          rosbridge::ALMemoryInsertDataInt::Response &res);

      bool insertDataFloat(
          rosbridge::ALMemoryInsertDataFloat::Request  &req,
          rosbridge::ALMemoryInsertDataFloat::Response &res);

      bool insertDataString(
          rosbridge::ALMemoryInsertDataString::Request  &req,
          rosbridge::ALMemoryInsertDataString::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool removeData(
          rosbridge::ALMemoryRemoveData::Request  &req,
          rosbridge::ALMemoryRemoveData::Response &res);

      bool removeMicroEvent(
          rosbridge::ALMemoryRemoveMicroEvent::Request  &req,
          rosbridge::ALMemoryRemoveMicroEvent::Response &res);

      bool subscribeToEvent(
          rosbridge::ALMemorySubscribeToEvent::Request  &req,
          rosbridge::ALMemorySubscribeToEvent::Response &res);

      bool subscribeToEventString(
          rosbridge::ALMemorySubscribeToEventString::Request  &req,
          rosbridge::ALMemorySubscribeToEventString::Response &res);

      bool subscribeToMicroEvent(
          rosbridge::ALMemorySubscribeToMicroEvent::Request  &req,
          rosbridge::ALMemorySubscribeToMicroEvent::Response &res);

      bool unregisterModuleReference(
          rosbridge::ALMemoryUnregisterModuleReference::Request  &req,
          rosbridge::ALMemoryUnregisterModuleReference::Response &res);

      bool unsubscribeOnDataChange(
          rosbridge::ALMemoryUnsubscribeOnDataChange::Request  &req,
          rosbridge::ALMemoryUnsubscribeOnDataChange::Response &res);

      bool unsubscribeToEvent(
          rosbridge::ALMemoryUnsubscribeToEvent::Request  &req,
          rosbridge::ALMemoryUnsubscribeToEvent::Response &res);

      bool unsubscribeToMicroEvent(
          rosbridge::ALMemoryUnsubscribeToMicroEvent::Request  &req,
          rosbridge::ALMemoryUnsubscribeToMicroEvent::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);

      bool waitOnCondition(
          rosbridge::ALMemoryWaitOnCondition::Request  &req,
          rosbridge::ALMemoryWaitOnCondition::Response &res);

      bool waitSynchronizer(
          rosbridge::ALMemoryWaitSynchronizer::Request  &req,
          rosbridge::ALMemoryWaitSynchronizer::Response &res);


// non generated code included
#include "alrosalmemory_h_declarations.inc"

      private:
        ALPtr<ALMemoryProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALMEMORY_GENERATED_H

