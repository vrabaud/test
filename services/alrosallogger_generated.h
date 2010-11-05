/*
* Generated for ALLogger
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#ifndef ALROS_ALROSALLOGGER_GENERATED_H
#define ALROS_ALROSALLOGGER_GENERATED_H

#include <vector>
#include <alcore/alptr.h>
#include <rosbridge/ALLoggerDebug.h>
#include <rosbridge/ALLoggerError.h>
#include <rosbridge/ALModuleExit.h>
#include <rosbridge/ALLoggerFatal.h>
#include <rosbridge/ALModuleGetBrokerName.h>
#include <rosbridge/ALModuleGetMethodList.h>
#include <rosbridge/ALModuleGetUsage.h>
#include <rosbridge/ALLoggerInfo.h>
#include <rosbridge/ALLoggerLogInFile.h>
#include <rosbridge/ALLoggerLogInStd.h>
#include <rosbridge/ALLoggerLogInSys.h>
#include <rosbridge/ALLoggerLowDebug.h>
#include <rosbridge/ALLoggerLowInfo.h>
#include <rosbridge/ALModulePing.h>
#include <rosbridge/ALLoggerSeparator.h>
#include <rosbridge/ALLoggerSetFilter.h>
#include <rosbridge/ALLoggerSetVerbosity.h>
#include <rosbridge/ALModuleVersion.h>
#include <rosbridge/ALLoggerWarn.h>

// non generated code included
#include "alrosallogger_h.inc"

namespace ros {
  class NodeHandle;
  class ServiceServer;
}

namespace AL {
  class ALBroker;
  class ALLoggerProxy;

  class ALRosALLogger {
    public:
      void bindMethods(ALPtr<ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode);

      bool debug(
          rosbridge::ALLoggerDebug::Request  &req,
          rosbridge::ALLoggerDebug::Response &res);

      bool error(
          rosbridge::ALLoggerError::Request  &req,
          rosbridge::ALLoggerError::Response &res);

      bool exit(
          rosbridge::ALModuleExit::Request  &req,
          rosbridge::ALModuleExit::Response &res);

      bool fatal(
          rosbridge::ALLoggerFatal::Request  &req,
          rosbridge::ALLoggerFatal::Response &res);

      bool getBrokerName(
          rosbridge::ALModuleGetBrokerName::Request  &req,
          rosbridge::ALModuleGetBrokerName::Response &res);

      bool getMethodList(
          rosbridge::ALModuleGetMethodList::Request  &req,
          rosbridge::ALModuleGetMethodList::Response &res);

      bool getUsage(
          rosbridge::ALModuleGetUsage::Request  &req,
          rosbridge::ALModuleGetUsage::Response &res);

      bool info(
          rosbridge::ALLoggerInfo::Request  &req,
          rosbridge::ALLoggerInfo::Response &res);

      bool logInFile(
          rosbridge::ALLoggerLogInFile::Request  &req,
          rosbridge::ALLoggerLogInFile::Response &res);

      bool logInStd(
          rosbridge::ALLoggerLogInStd::Request  &req,
          rosbridge::ALLoggerLogInStd::Response &res);

      bool logInSys(
          rosbridge::ALLoggerLogInSys::Request  &req,
          rosbridge::ALLoggerLogInSys::Response &res);

      bool lowDebug(
          rosbridge::ALLoggerLowDebug::Request  &req,
          rosbridge::ALLoggerLowDebug::Response &res);

      bool lowInfo(
          rosbridge::ALLoggerLowInfo::Request  &req,
          rosbridge::ALLoggerLowInfo::Response &res);

      bool ping(
          rosbridge::ALModulePing::Request  &req,
          rosbridge::ALModulePing::Response &res);

      bool separator(
          rosbridge::ALLoggerSeparator::Request  &req,
          rosbridge::ALLoggerSeparator::Response &res);

      bool setFilter(
          rosbridge::ALLoggerSetFilter::Request  &req,
          rosbridge::ALLoggerSetFilter::Response &res);

      bool setVerbosity(
          rosbridge::ALLoggerSetVerbosity::Request  &req,
          rosbridge::ALLoggerSetVerbosity::Response &res);

      bool version(
          rosbridge::ALModuleVersion::Request  &req,
          rosbridge::ALModuleVersion::Response &res);

      bool warn(
          rosbridge::ALLoggerWarn::Request  &req,
          rosbridge::ALLoggerWarn::Response &res);


// non generated code included
#include "alrosallogger_h_declarations.inc"

      private:
        ALPtr<ALLoggerProxy> fProxy;
        std::vector<ros::ServiceServer> fServices;
    };
}
#endif // ALROS_ALROSALLOGGER_GENERATED_H

