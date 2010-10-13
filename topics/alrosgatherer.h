/**
 * @author Chris Kilner
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

    ALValue getValues();
    const std::vector<std::string>& getMotorNames() const;
    const std::vector<std::string>& getKeys() const;
    void init(AL::ALPtr<AL::ALBroker> broker);

  private:

    ALValue xPrepareGetListDataRequest(const std::vector<std::string>& pKeys);
    std::vector<std::string> xPrepareKeys(const std::vector<std::string>& pJointNames);

    ALPtr<ALMemoryProxy> fMemory;
    ALPtr<ALMotionProxy> fMotion;

    unsigned int fNumMotors;
    std::vector<std::string> fMotorNames;
    std::vector<std::string> fKeys;
    AL::ALValue fDataRequest;
  };

}

#endif  // ROSBRIDGE_ALROSGATHERER_H

