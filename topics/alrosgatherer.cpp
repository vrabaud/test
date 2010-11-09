/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#include "alrosgatherer.h"
#include <alcommon/albroker.h>
#include <alcommon/alproxy.h>
#include <alcore/alerror.h>

namespace AL {

  /**
   * Constructor for ALRosGatherer object
   */
  ALRosGatherer::ALRosGatherer()
  {
  }

  /**
   * Destructor for ALRosGatherer object
   */
  ALRosGatherer::~ALRosGatherer() {}

  std::vector<float> ALRosGatherer::getValues() {

    try
    {
      return fDataGathererProxy->call<std::vector<float> >("getValues");
    } catch (const AL::ALError&) {

    }
    std::vector<float> ret;
    return ret;
  }

  std::vector<std::string> ALRosGatherer::getMotorNames() {
    try
    {
      return fDataGathererProxy->call<std::vector<std::string> >("getMotorNames");
    } catch (const AL::ALError&) {

    }
    std::vector<std::string> ret;
    return ret;
  }

  void ALRosGatherer::init(ALPtr<ALBroker> broker) {
    fDataGathererProxy = broker->getProxy("ALDataGatherer");
  }
}
