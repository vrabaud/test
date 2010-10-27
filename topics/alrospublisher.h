/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#ifndef ROSBRIDGE_ALROSPUBLISHER_H
#define ROSBRIDGE_ALROSPUBLISHER_H

#include <string>
#include <vector>
#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

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

    void init(const std::vector<std::string>& motorNames, ros::NodeHandle& pRosNode, bool pIsDCMActive);

  private:

    void xPublishInertial(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishFSR(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishButtons(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishMotorSensors(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishMotorCommands(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishMotorCurrent(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishMotorStiffness(const std::vector<float>& values, const ros::Time& time) const;

    void xPublishJointStates(const std::vector<float>& values, const ros::Time& time) const;

    // not const due to the TransformBroadcaster
    void xPublishOdometry(const std::vector<float>& values, const ros::Time& time);

    std::vector<float> fLastValues;
    std::vector<std::string> fMotorNames;
    unsigned int fNumMotors;
    unsigned int fMotorSensorsStart;
    unsigned int fMotorCommandsStart;
    unsigned int fMotorCurrentsStart;
    unsigned int fMotorStiffnessesStart;
    unsigned int fTorsoPositionStart;

    const unsigned int kInertialStart;
    const unsigned int kInertialSize;
    const unsigned int kFSRStart;
    const unsigned int kFSRSize;
    const unsigned int kButtonsStart;
    const unsigned int kButtonsSize;
    const unsigned int kMotorsStart;

    bool fIsDCMActive;

    ros::Publisher fInertial_pub;
    ros::Publisher fFSR_pub;
    ros::Publisher fButtons_pub;
    ros::Publisher fMotorSensors_pub;
    ros::Publisher fMotorCommands_pub;
    ros::Publisher fMotorCurrents_pub;
    ros::Publisher fMotorStiffnesses_pub;
    ros::Publisher fJointStates_pub;
    ros::Publisher fOdometry_pub;
    ros::Time      fLastTime;
    tf::TransformBroadcaster fTransformBroadcaster;
  };

}

#endif  // ROSBRIDGE_ALROSPUBLISHER_H

