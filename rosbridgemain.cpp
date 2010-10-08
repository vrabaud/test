/*
**
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#include <iostream>

#ifndef _WIN32
#  include <signal.h>
#endif

#include <alcore/alptr.h>
#include <alcommon/altoolsmain.h>
#include <alcommon/albroker.h>
#include <alcommon/almodule.h>
#include <alcommon/albrokermanager.h>

#include <ros/ros.h>



#include "rosbridge.hpp"

#ifdef ROSBRIDGE_IS_REMOTE_ON
#  define ALCALL
#else
#  ifdef _WIN32
#    define ALCALL __declspec(dllexport)
#  else
#    define ALCALL
#  endif
#endif

extern "C"
{
  ALCALL int _createModule(AL::ALPtr<AL::ALBroker> pBroker)
  {
    //initialise our module
    AL::ALBrokerManager::setInstance(pBroker->fBrokerManager.lock());
    AL::ALBrokerManager::getInstance()->addBroker(pBroker);
    AL::ALModule::createModule<RosBridge>(pBroker);
    return 0;
  }

  ALCALL int _closeModule()
  {
    return 0;
  }
}


#ifdef ROSBRIDGE_IS_REMOTE_ON
int main(int argc, char *argv[] )
{
  TMainType     sig = &_createModule;
  ALTools::mainFunction("RosBridge", argc, argv, sig);
}
#endif
