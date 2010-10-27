/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#include "alrosgatherer.h"
#include <alcommon/albroker.h>
#include <alproxies/almemoryproxy.h>
#include <alproxies/almotionproxy.h>
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

  std::vector<float> ALRosGatherer::getValues() const {
    std::vector<float> ret;
    if (fIsDCMActive) {
      // TODO use a faster method
      xGetCoreDataFromMemory(ret);
    } else {
      xGetCoreDataFromMotion(ret);
    }

    try
    {
      // get the position of the torso in SPACE_WORLD, using Sensor values
      std::vector<float> torso = fMotion->getPosition("Torso", 1, true);
      // copy to return vector
      ret.insert(ret.end(), torso.begin(), torso.end());

    } catch (const AL::ALError&) {
      // Probably a SOAP fault in remote
      std::cout << "Exception while gathering torso data ALMotion" << std::endl;
    }
    return ret;
  }

  void ALRosGatherer::xGetCoreDataFromMemory(std::vector<float>& dataOut) const {
    try
    {
      // get from memory ( requires a dcm )
      ALValue data = fMemory->getListData(fDataRequest);
      if (!(data.isValid()) || !(data.isArray()) || !(data.getSize() > 0) || !(data[0].isFloat())) {
        // invalid data ... could be soap error ... or no DCM
        std::cout << "Received invalid data gathering data" << std::endl;
        return;
      }
      // implicit cast from ALValue to std::vector<float>
      dataOut = data;
    } catch (const AL::ALError&) {
      // Probably a SOAP fault in remote
      std::cout << "Exception while gathering data" << std::endl;
      return;
    }
  }

  void ALRosGatherer::xGetCoreDataFromMotion(std::vector<float>& dataOut) const {
    //
    // Gathers core data from ALMotion if the DCM is not present
    //
    dataOut.clear();
    dataOut.assign((7+12+8), 0.0f); // fill with empty Inertial, FSR and Bumper
    // add motor sensor, commands, currents, stiffnesses
    try {
      std::vector<float> sensors      = fMotion->getAngles("Body", true);
      std::vector<float> commands     = fMotion->getAngles("Body", false);
      // no info on currents
      std::vector<float> stiffnesses  = fMotion->getStiffnesses("Body");

      dataOut.insert(dataOut.end(), sensors.begin(), sensors.end());
      dataOut.insert(dataOut.end(), commands.begin(), commands.end());
      dataOut.insert(dataOut.end(), fNumMotors, 0.0f);
      dataOut.insert(dataOut.end(), stiffnesses.begin(), stiffnesses.end());
    } catch (const AL::ALError&) {
      return;
    }
  }

  const std::vector<std::string>& ALRosGatherer::getKeys() const {
    return fKeys;
  }

  const std::vector<std::string>& ALRosGatherer::getMotorNames() const {
    return fMotorNames;
  }

  void ALRosGatherer::init(ALPtr<ALBroker> broker) {
    fMemory = ALPtr<ALMemoryProxy>(new ALMemoryProxy(broker));
    fMotion = ALPtr<ALMotionProxy>(new ALMotionProxy(broker));
    fMotorNames = fMotion->getJointNames("Body");
    fNumMotors = fMotorNames.size();
    fKeys = xPrepareKeys(fMotorNames);
    fDataRequest = xPrepareGetListDataRequest(fKeys);

    // store a boolean indicating if the dcm is present
    fIsDCMActive = broker->isModulePresent("DCM");
  }



  /**
    * Prepares the ALValue that is used in the getListData request
    */
  ALValue ALRosGatherer::xPrepareGetListDataRequest(const std::vector<std::string>& pKeys)
    {
      ALValue getDataRequest;
      ALValue question;
      int size = pKeys.size();
      getDataRequest.arraySetSize(size);
      question.arraySetSize(2);
      question[1] = 0; // same for all joints

      std::vector<std::string>::const_iterator it = pKeys.begin();
      for(unsigned short i = 0; i<size; i++)
      {
        question[0] = *it;
        getDataRequest[i] = question;
        it++;
      }
      return getDataRequest;
    }  // end xPrepareGetListDataRequest


  /**
    * Prepare the list of keys that we are interested in
    * @param pJointNames the names of the motors
    * @return The vector of ALMemory keys
    */
  std::vector<std::string> ALRosGatherer::xPrepareKeys(
    const std::vector<std::string>& pJointNames)
  {
    std::vector<std::string> keys;

    const std::string prefix = "Device/SubDeviceList/";
    const std::string motorSensorSuffix = "/Position/Sensor/Value";
    const std::string motorCmdSensorSuffix = "/Position/Actuator/Value";
    const std::string motorCurrentSuffix = "/ElectricCurrent/Sensor/Value";
    const std::string motorStiffnessSuffix = "/Hardness/Actuator/Value";

    std::string tmpString;

    // Inertial Sensor 7
    keys.push_back(prefix + "InertialSensor/AccX/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/AccY/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/AccZ/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/GyrX/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/GyrY/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/AngleX/Sensor/Value");
    keys.push_back(prefix + "InertialSensor/AngleY/Sensor/Value");

    // FSRs 12
    keys.push_back(prefix + "LFoot/FSR/FrontLeft/Sensor/Value");
    keys.push_back(prefix + "LFoot/FSR/FrontRight/Sensor/Value");
    keys.push_back(prefix + "LFoot/FSR/RearLeft/Sensor/Value");
    keys.push_back(prefix + "LFoot/FSR/RearRight/Sensor/Value");
    keys.push_back(prefix + "LFoot/FSR/CenterOfPressure/X/Sensor/Value");
    keys.push_back(prefix + "LFoot/FSR/CenterOfPressure/Y/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/FrontLeft/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/FrontRight/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/RearLeft/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/RearRight/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/CenterOfPressure/X/Sensor/Value");
    keys.push_back(prefix + "RFoot/FSR/CenterOfPressure/Y/Sensor/Value");

    // Buttons 8
    keys.push_back(prefix + "ChestBoard/Button/Sensor/Value");
    keys.push_back(prefix + "LFoot/Bumper/Left/Sensor/Value");
    keys.push_back(prefix + "LFoot/Bumper/Right/Sensor/Value");
    keys.push_back(prefix + "RFoot/Bumper/Left/Sensor/Value");
    keys.push_back(prefix + "RFoot/Bumper/Right/Sensor/Value");
    keys.push_back(prefix + "Head/Touch/Front/Sensor/Value");
    keys.push_back(prefix + "Head/Touch/Middle/Sensor/Value");
    keys.push_back(prefix + "Head/Touch/Rear/Sensor/Value");

    // Motor Sensors
    std::vector<std::string>::const_iterator pJointNames_it = pJointNames.begin();
    for (; pJointNames_it < pJointNames.end(); pJointNames_it++)
    {
      tmpString = *pJointNames_it;
      keys.push_back(std::string(prefix + tmpString + motorSensorSuffix));
    }

    // Motor Commands
    pJointNames_it = pJointNames.begin();
    for (; pJointNames_it < pJointNames.end(); pJointNames_it++)
    {
      tmpString = *pJointNames_it;
      keys.push_back(std::string(prefix + tmpString + motorCmdSensorSuffix));
    }

    // Motor currents
    pJointNames_it = pJointNames.begin();
    for (; pJointNames_it < pJointNames.end(); pJointNames_it++)
    {
      tmpString = *pJointNames_it;
      keys.push_back(std::string(prefix + tmpString + motorCurrentSuffix));
    }

    // Motor stiffnesses
    pJointNames_it = pJointNames.begin();
    for (; pJointNames_it < pJointNames.end(); pJointNames_it++)
    {
      tmpString = *pJointNames_it;
      keys.push_back(std::string(prefix + tmpString + motorStiffnessSuffix));
    }

    return keys;
  }

}
