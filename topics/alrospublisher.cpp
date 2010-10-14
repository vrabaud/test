/**
 * @author Chris Kilner
 *
 * Purpose: Publishes data as ROS topics
 * Works with ALRosGatherer, but has no NaoQi specific
 * details here
 *
 * Assumes that the data that arrives conforms to
 * the structure layed out in ALRosGatherer
 *
 */

#include "alrospublisher.h"
#include <iostream>
#include <rosbridge/InertialSensor.h>
#include <rosbridge/FSRs.h>
#include <rosbridge/Buttons.h>
#include <rosbridge/Sensorangles.h>
#include <rosbridge/CommandAngles.h>
#include <rosbridge/SensorCurrents.h>
#include <rosbridge/SensorStiffnesses.h>

namespace AL {
  /**
   * Constructor for ALRosPublisher object
   */
  ALRosPublisher::ALRosPublisher() :
    fNumMotors(0), // invalid
    kInertialStart(0),
    kInertialSize(7),
    kFSRStart(7),
    kFSRSize(12),
    kButtonsStart(19),
    kButtonsSize(8),
    kMotorsStart(27)
  {
  }

  /**
   * Destructor for ALDataGatherer object
   */
  ALRosPublisher::~ALRosPublisher() {}

  void ALRosPublisher::publish(const std::vector<float>& values) {
    if (fNumMotors == 0) {
      std::cout << "Please call init before publish" << std::endl;
      return;
    }

    if (fMotorStiffnessesStart + fNumMotors != values.size()) {
      // drop this silently
      return;
    }

    if (fLastValues.empty()) {
      // fill with rubbish to force publication
      fLastValues.assign(values.size(), -42.4242f);
    }

    // inertial
    for (unsigned int i = kInertialStart; i < kInertialStart+kInertialSize; ++i) {
      if (fLastValues[i] != values[i]) {
        xPublishInertial(values);
        break;
      }
    }

    // FSRs
    for (unsigned int i = kFSRStart; i < kFSRStart+kFSRSize; ++i) {
      if (fLastValues[i] != values[i]) {
        xPublishFSR(values);
        break;
      }
    }

    // Buttons
    for (unsigned int i = kButtonsStart; i < kButtonsStart+kButtonsSize; ++i) {
      if (fLastValues[i] != values[i]) {
        xPublishButtons(values);
        break;
      }
    }

    // Motor Sensors
    for (unsigned int i = 0; i < fNumMotors; ++i) {
      if (fLastValues[fMotorSensorsStart+i] != values[fMotorSensorsStart+i]) {
        // there is noise at a 0.01 rads ( 0.57 degrees )
        // the values are consistent i.e. noise in the last bit
        xPublishMotorSensors(values);
        break;
      }
    }

    // Motor Commands
    for (unsigned int i = 0; i < fNumMotors; ++i) {
      if (fLastValues[fMotorCommandsStart+i] != values[fMotorCommandsStart+i]) {
        // when stiffness is off, sensors get copied to commands
        // so this continues to change most of the time
        xPublishMotorCommands(values);
        break;
      }
    }

    // Motor Currents
    for (unsigned int i = 0; i < fNumMotors; ++i) {
      if (fLastValues[fMotorCurrentsStart+i] != values[fMotorCurrentsStart+i]) {
        xPublishMotorCurrent(values);
        break;
      }
    }

    // Motor Stiffness
    for (unsigned int i = 0; i < fNumMotors; ++i) {
      if (fLastValues[fMotorStiffnessesStart+i] != values[fMotorStiffnessesStart+i]) {
        xPublishMotorStiffness(values);
        break;
      }
    }

    fLastValues = values;
  }

  void ALRosPublisher::init(const std::vector<std::string>& motorNames, ros::NodeHandle& pRosNode) {
    // prepare motor message sizes in relation to motor names
    fNumMotors             = motorNames.size();
    fMotorSensorsStart     = kMotorsStart;
    fMotorCommandsStart    = fMotorSensorsStart + fNumMotors;
    fMotorCurrentsStart    = fMotorCommandsStart + fNumMotors;
    fMotorStiffnessesStart = fMotorCurrentsStart + fNumMotors;

    // prepare publishers
    int bufferDepth = 10;
    fInertial_pub = pRosNode.advertise<rosbridge::InertialSensor>("NaoQi/InertialSensor", bufferDepth);
    fFSR_pub = pRosNode.advertise<rosbridge::FSRs>("NaoQi/FSRs", bufferDepth);
    fButtons_pub = pRosNode.advertise<rosbridge::Buttons>("NaoQi/Buttons", bufferDepth);

    fMotorSensors_pub = pRosNode.advertise<rosbridge::SensorAngles>("NaoQi/SensorAngles", bufferDepth);
    fMotorCommands_pub = pRosNode.advertise<rosbridge::CommandAngles>("NaoQi/CommandAngles", bufferDepth);
    fMotorCurrents_pub = pRosNode.advertise<rosbridge::SensorCurrents>("NaoQi/SensorCurrents", bufferDepth);
    fMotorStiffnesses_pub = pRosNode.advertise<rosbridge::SensorStiffnesses>("NaoQi/SensorStiffnesses", bufferDepth);
  }

  void ALRosPublisher::xPublishInertial(const std::vector<float>& values) {
    //std::cout << "Publish Inertial" << std::endl;

    rosbridge::InertialSensor data;
    int i = 0;
    data.accX = values[kInertialStart + i++];
    data.accY = values[kInertialStart + i++];
    data.accZ = values[kInertialStart + i++];
    data.gyrX = values[kInertialStart + i++];
    data.gyrY = values[kInertialStart + i++];
    data.angleX = values[kInertialStart + i++];
    data.angleY = values[kInertialStart + i++];
    fInertial_pub.publish(data);
  }

  void ALRosPublisher::xPublishFSR(const std::vector<float>& values) {
    //std::cout << "Publish FSR" << std::endl;

    rosbridge::FSRs data;
    int i = 0;
    data.LFootFrontLeft = values[kFSRStart + i++];
    data.LFootFrontRight = values[kFSRStart + i++];
    data.LFootRearLeft = values[kFSRStart + i++];
    data.LFootRearRight = values[kFSRStart + i++];
    geometry_msgs::Point32 lCOP;
    lCOP.x = kFSRStart + i++;
    lCOP.y = kFSRStart + i++;
    data.LFootCenterOfPressure = lCOP;
    data.RFootFrontLeft = values[kFSRStart + i++];
    data.RFootFrontRight = values[kFSRStart + i++];
    data.RFootRearLeft = values[kFSRStart + i++];
    data.RFootRearRight = values[kFSRStart + i++];
    geometry_msgs::Point32 rCOP;
    rCOP.x = kFSRStart + i++;
    rCOP.y = kFSRStart + i++;
    data.RFootCenterOfPressure = rCOP;
    fFSR_pub.publish(data);
  }

  void ALRosPublisher::xPublishButtons(const std::vector<float>& values) {
    //std::cout << "Publish Buttons" << std::endl;

    rosbridge::Buttons data;
    int i = 0;
    data.ChestButton = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.LFoorBumperLeft = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.LFootBumperRight = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.RFootBumperLeft = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.RFootBumperRight = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchFront = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchMiddle = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchRear = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    fButtons_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorSensors(const std::vector<float>& values) {
    //std::cout << "Publish MotorSensors" << std::endl;

    rosbridge::SensorAngles data;
    data.angles.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.angles[i] = values[fMotorSensorsStart+i];
    }
    fMotorSensors_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorCommands(const std::vector<float>& values) {
    //std::cout << "Publish MotorCommands" << std::endl;

    rosbridge::CommandAngles data;
    data.angles.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.angles[i] = values[fMotorCommandsStart+i];
    }
    fMotorCommands_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorCurrent(const std::vector<float>& values) {
    //std::cout << "Publish MotorCurrent" << std::endl;

    rosbridge::SensorCurrents data;
    data.currents.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.currents[i] = values[fMotorCurrentsStart+i];
    }
    fMotorCurrents_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorStiffness(const std::vector<float>& values) {
    //std::cout << "Publish MotorStiffness" << std::endl;

    rosbridge::SensorStiffnesses data;
    data.stiffnesses.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.stiffnesses[i] = values[fMotorStiffnessesStart+i];
    }
    fMotorStiffnesses_pub.publish(data);
  }
}
