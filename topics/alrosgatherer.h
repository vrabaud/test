/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#ifndef ROSBRIDGE_ALROSGATHERER_H
#define ROSBRIDGE_ALROSGATHERER_H

#include <alcore/alptr.h>
#include <alcommon/alproxy.h>
#include <string>
#include <vector>

namespace AL
{
  class ALBroker;
  class ALProxy;

  class ALRosGatherer
  {
    public:

    /**
     * Default Constructor.
     */
     ALRosGatherer();

    /**
     * Destructor.
     */
    virtual ~ALRosGatherer();

    std::vector<float> getValues() ;
    std::vector<std::string> getMotorNames();
    void init(AL::ALPtr<AL::ALBroker> broker);

  private:
    ALPtr<ALProxy> fDataGathererProxy;
  };

}

#endif  // ROSBRIDGE_ALROSGATHERER_H

