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
 * Copyright (C) 2010 Aldebaran Robotics
 */

#include "alrospublisher.h"
#include <iostream>
#include <rosbridge/InertialSensor.h>
#include <rosbridge/FSRs.h>
#include <rosbridge/Buttons.h>
#include <rosbridge/SensorAngles.h>
#include <rosbridge/CommandAngles.h>
#include <rosbridge/SensorCurrents.h>
#include <rosbridge/SensorStiffnesses.h>
#include <sensor_msgs/JointState.h>  // the joint states for the robot_model_broadcaster
#include <nav_msgs/Odometry.h>       // odom

namespace AL {
  /**
   * Constructor for ALRosPublisher object
   */
  ALRosPublisher::ALRosPublisher() :
    fNumMotors(0),      // invalid
    kInertialStart(0),  // These magic numbers relate to alrosgatherer.cpp
    kInertialSize(7),
    kFSRStart(7),
    kFSRSize(12),
    kButtonsStart(19),
    kButtonsSize(8),
    kMotorsStart(27),
    fIsDCMActive(false)
  {
  }

  /**
   * Destructor for ALDataGatherer object
   */
  ALRosPublisher::~ALRosPublisher() {}

  void ALRosPublisher::publish(const std::vector<float>& values) {
    if (fNumMotors == 0) {
      std::cout << "Please call init before publish." << std::endl;
      return;
    }
    if (fTorsoPositionStart + 6 != values.size()) {
      // drop this silently
      return;
    }

    // use the same timestamp for all data
    ros::Time current_time = ros::Time::now();

    if (fLastValues.empty()) {
      // fill with rubbish to force publication the first time
      fLastValues.assign(values.size(), -42.424242f);
      fLastTime = current_time;
    }

    if (fIsDCMActive) {
      for (unsigned int i = kButtonsStart; i < kButtonsStart+kButtonsSize; ++i) {
        if (fLastValues[i] != values[i]) {
          // Buttons - only sent if one changes
          xPublishButtons(values, current_time);
          break;
        }
      }
      xPublishInertial(values, current_time);
      xPublishFSR(values, current_time);
      xPublishMotorCurrent(values, current_time);
    }

    xPublishMotorSensors(values, current_time);
    xPublishMotorCommands(values, current_time);
    xPublishMotorStiffness(values, current_time);
    xPublishJointStates(values, current_time);
    xPublishOdometry(values, current_time);

    fLastValues = values;
    fLastTime = current_time;
  }

  void ALRosPublisher::init(const std::vector<std::string>& motorNames, ros::NodeHandle& pRosNode, bool pIsDCMActive) {
    // prepare motor message sizes in relation to motor names
    fMotorNames            = motorNames;
    fNumMotors             = motorNames.size();
    fMotorSensorsStart     = kMotorsStart;
    fMotorCommandsStart    = fMotorSensorsStart     + fNumMotors;
    fMotorCurrentsStart    = fMotorCommandsStart    + fNumMotors;
    fMotorStiffnessesStart = fMotorCurrentsStart    + fNumMotors;
    fTorsoPositionStart    = fMotorStiffnessesStart + fNumMotors;
    fIsDCMActive = pIsDCMActive;

    // prepare publishers
    int bufferDepth = 10;
    if (fIsDCMActive) {
      fInertial_pub      = pRosNode.advertise<rosbridge::InertialSensor>("/NaoQi/InertialSensor", bufferDepth);
      fFSR_pub           = pRosNode.advertise<rosbridge::FSRs>("/NaoQi/FSRs", bufferDepth);
      fButtons_pub       = pRosNode.advertise<rosbridge::Buttons>("/NaoQi/Buttons", bufferDepth);
      fMotorCurrents_pub = pRosNode.advertise<rosbridge::SensorCurrents>("/NaoQi/SensorCurrents", bufferDepth);
    } else {
      // not publishing everything
      printf("No Nao hardware found: not publishing InertialSensor, FSRs, Buttons or SensorCurrents\n");
    }
    fMotorSensors_pub     = pRosNode.advertise<rosbridge::SensorAngles>("/NaoQi/SensorAngles", bufferDepth);
    fMotorCommands_pub    = pRosNode.advertise<rosbridge::CommandAngles>("/NaoQi/CommandAngles", bufferDepth);
    fMotorStiffnesses_pub = pRosNode.advertise<rosbridge::SensorStiffnesses>("/NaoQi/SensorStiffnesses", bufferDepth);
    fJointStates_pub      = pRosNode.advertise<sensor_msgs::JointState>("/joint_states", bufferDepth);
    fOdometry_pub         = pRosNode.advertise<nav_msgs::Odometry>("/odom", bufferDepth);
  }

  void ALRosPublisher::xPublishInertial(const std::vector<float>& values, const ros::Time& time) const {
    // raw intertial sensor + derived angles
    rosbridge::InertialSensor data;
    data.header.stamp = time;
    int i = 0;
    data.accX   = values[kInertialStart + i++];
    data.accY   = values[kInertialStart + i++];
    data.accZ   = values[kInertialStart + i++];
    data.gyrX   = values[kInertialStart + i++];
    data.gyrY   = values[kInertialStart + i++];
    data.angleX = values[kInertialStart + i++];
    data.angleY = values[kInertialStart + i++];
    fInertial_pub.publish(data);
  }

  void ALRosPublisher::xPublishFSR(const std::vector<float>& values, const ros::Time& time) const {
    // force sensitive resistors
    rosbridge::FSRs data;
    data.header.stamp = time;
    int i = 0;
    data.LFootFrontLeft  = values[kFSRStart + i++];
    data.LFootFrontRight = values[kFSRStart + i++];
    data.LFootRearLeft   = values[kFSRStart + i++];
    data.LFootRearRight  = values[kFSRStart + i++];
    geometry_msgs::Point32 lCOP;
    lCOP.x = kFSRStart + i++;
    lCOP.y = kFSRStart + i++;
    data.LFootCenterOfPressure = lCOP;
    data.RFootFrontLeft  = values[kFSRStart + i++];
    data.RFootFrontRight = values[kFSRStart + i++];
    data.RFootRearLeft   = values[kFSRStart + i++];
    data.RFootRearRight  = values[kFSRStart + i++];
    geometry_msgs::Point32 rCOP;
    rCOP.x = kFSRStart + i++;
    rCOP.y = kFSRStart + i++;
    data.RFootCenterOfPressure = rCOP;
    fFSR_pub.publish(data);
  }

  void ALRosPublisher::xPublishButtons(const std::vector<float>& values, const ros::Time& time) const {
    // tactile, bumpers and buttons
    rosbridge::Buttons data;
    data.header.stamp = time;
    int i = 0;
    data.ChestButton      = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.LFoorBumperLeft  = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.LFootBumperRight = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.RFootBumperLeft  = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.RFootBumperRight = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchFront   = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchMiddle  = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    data.HeadTouchRear    = (values[kFSRStart + i++] > 0.0f) ? 1 :0;
    fButtons_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorSensors(const std::vector<float>& values, const ros::Time& time) const {
    // naoqi sensor angle data
    rosbridge::SensorAngles data;
    data.header.stamp = time;
    data.angles.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.angles[i] = values[fMotorSensorsStart+i];
    }
    fMotorSensors_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorCommands(const std::vector<float>& values, const ros::Time& time) const {
    // naoqi command angle data
    rosbridge::CommandAngles data;
    data.header.stamp = time;
    data.angles.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.angles[i] = values[fMotorCommandsStart+i];
    }
    fMotorCommands_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorCurrent(const std::vector<float>& values, const ros::Time& time) const {
    // naoqi current data
    rosbridge::SensorCurrents data;
    data.header.stamp = time;
    data.currents.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.currents[i] = values[fMotorCurrentsStart+i];
    }
    fMotorCurrents_pub.publish(data);
  }

  void ALRosPublisher::xPublishMotorStiffness(const std::vector<float>& values, const ros::Time& time) const {
    // naoqi stiffness data
    rosbridge::SensorStiffnesses data;
    data.header.stamp = time;
    data.stiffnesses.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
     data.stiffnesses[i] = values[fMotorStiffnessesStart+i];
    }
    fMotorStiffnesses_pub.publish(data);
  }

  void ALRosPublisher::xPublishJointStates(const std::vector<float>& values, const ros::Time& time) const {
    // this topic is used by the robot_state_publisher
    sensor_msgs::JointState data;
    data.header.stamp = time;
    data.name = fMotorNames;
    data.position.resize(fNumMotors);
    for(unsigned int i = 0; i < fNumMotors; i++) {
      data.position[i] = values[fMotorSensorsStart+i];
    }
    fJointStates_pub.publish(data);
  }

  void ALRosPublisher::xPublishOdometry(const std::vector<float>& values, const ros::Time& time) {
    // this takes the Torso pos6D represented in World Space using sensors
    tf::Transform transform;
    transform.setOrigin( tf::Vector3(
        values[fTorsoPositionStart],
        values[fTorsoPositionStart+1],
        values[fTorsoPositionStart+2]));

    transform.setRotation(tf::Quaternion(
        values[fTorsoPositionStart+5],   // yaw
        values[fTorsoPositionStart+4],   // pitch
        values[fTorsoPositionStart+3])); // roll

    // this is the odometry position of the Torso_link expressed in the odom frame
    fTransformBroadcaster.sendTransform(tf::StampedTransform(transform, time, "odom", "Torso_link"));

    if (time == fLastTime) {
      // first time we have data, so fLastValues will be invalid, move on...
      return;
    }

    // for the navigation stack, we also need an odom message
    double dt = (time - fLastTime).toSec();
    nav_msgs::Odometry odom;
    odom.header.stamp = time;
    odom.header.frame_id = "/odom";
    odom.child_frame_id = "Torso_link";
    odom.pose.pose.position.x =  values[fTorsoPositionStart];
    odom.pose.pose.position.y =  values[fTorsoPositionStart+1];
    odom.pose.pose.position.z =  values[fTorsoPositionStart+2];

    geometry_msgs::Quaternion odom_quat = tf::createQuaternionMsgFromRollPitchYaw(
        values[fTorsoPositionStart+5],   // yaw
        values[fTorsoPositionStart+4],   // pitch
        values[fTorsoPositionStart+3]);  // roll
    odom.pose.pose.orientation = odom_quat;

    // The twist is the speed during the period: for now, just the difference to last values
    odom.twist.twist.linear.x  = (values[fTorsoPositionStart]   - fLastValues[fTorsoPositionStart]  )*dt;
    odom.twist.twist.linear.y  = (values[fTorsoPositionStart+1] - fLastValues[fTorsoPositionStart+1])*dt;
    odom.twist.twist.linear.z  = (values[fTorsoPositionStart+2] - fLastValues[fTorsoPositionStart+2])*dt;
    odom.twist.twist.angular.x = (values[fTorsoPositionStart+3] - fLastValues[fTorsoPositionStart+3])*dt;
    odom.twist.twist.angular.y = (values[fTorsoPositionStart+4] - fLastValues[fTorsoPositionStart+4])*dt;
    odom.twist.twist.angular.z = (values[fTorsoPositionStart+5] - fLastValues[fTorsoPositionStart+5])*dt;
    fOdometry_pub.publish(odom);
  }
}
