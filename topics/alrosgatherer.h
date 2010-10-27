/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#ifndef ROSBRIDGE_ALROSGATHERER_H
#define ROSBRIDGE_ALROSGATHERER_H

#include <alcore/alptr.h>
#include <alvalue/alvalue.h>
#include <string>
#include <vector>

namespace AL
{
  class ALBroker;
  class ALMemoryProxy;
  class ALMotionProxy;

  /**
   * DESCRIBE YOUR CLASS HERE
   */
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

    std::vector<float> getValues() const;
    const std::vector<std::string>& getMotorNames() const;
    const std::vector<std::string>& getKeys() const;
    void init(AL::ALPtr<AL::ALBroker> broker);

  private:
    ALValue xPrepareGetListDataRequest(const std::vector<std::string>& pKeys);
    std::vector<std::string> xPrepareKeys(const std::vector<std::string>& pJointNames);
    void xGetCoreDataFromMemory(std::vector<float>& dataOut) const;
    void xGetCoreDataFromMotion(std::vector<float>& dataOut) const;

    ALPtr<ALMemoryProxy> fMemory;
    ALPtr<ALMotionProxy> fMotion;

    unsigned int fNumMotors;
    std::vector<std::string> fMotorNames;
    std::vector<std::string> fKeys;
    AL::ALValue fDataRequest;
    bool fIsDCMActive;
  };

}

#endif  // ROSBRIDGE_ALROSGATHERER_H

