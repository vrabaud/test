/**
 * @author Chris Kilner
 */

#ifndef ROSBRIDGE_ALROSPUBLISHER_H
#define ROSBRIDGE_ALROSPUBLISHER_H

#include <string>
#include <vector>
#include <ros/ros.h>

namespace AL
{
  /**
   * Works with the ALRosGatherer class to publish data from ALMemory
   * and ALMotion
   */
  class ALRosPublisher
  {
    public:

    /**
     * Default Constructor.
     */
     ALRosPublisher();

    /**
     * Destructor.
     */
    virtual ~ALRosPublisher();

    void publish(const std::vector<float>& values);

    void init(const std::vector<std::string>& motorNames, ros::NodeHandle& pRosNode);

  private:
    
    void xPublishInertial(const std::vector<float>& values);

    void xPublishFSR(const std::vector<float>& values);

    void xPublishButtons(const std::vector<float>& values);

    void xPublishMotorSensors(const std::vector<float>& values);

    void xPublishMotorCommands(const std::vector<float>& values);

    void xPublishMotorCurrent(const std::vector<float>& values);

    void xPublishMotorStiffness(const std::vector<float>& values);

    void xPublishJointStates(const std::vector<float>& values);

    std::vector<float> fLastValues;
    std::vector<std::string> fMotorNames;
    unsigned int fNumMotors;
    unsigned int fMotorSensorsStart;
    unsigned int fMotorCommandsStart;
    unsigned int fMotorCurrentsStart;
    unsigned int fMotorStiffnessesStart;

    const unsigned int kInertialStart;
    const unsigned int kInertialSize;

    const unsigned int kFSRStart;
    const unsigned int kFSRSize;
    const unsigned int kButtonsStart;
    const unsigned int kButtonsSize;
    const unsigned int kMotorsStart;

    ros::Publisher fInertial_pub;
    ros::Publisher fFSR_pub;
    ros::Publisher fButtons_pub;
    ros::Publisher fMotorSensors_pub;
    ros::Publisher fMotorCommands_pub;
    ros::Publisher fMotorCurrents_pub;
    ros::Publisher fMotorStiffnesses_pub;
    ros::Publisher fJointStates_pub;
  };

}

#endif  // ROSBRIDGE_ALROSPUBLISHER_H

