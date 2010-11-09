/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#ifndef ROSBRIDGE_ALROSSUBSCRIBER_H
#define ROSBRIDGE_ALROSSUBSCRIBER_H

#include <ros/ros.h>
#include <alcore/alptr.h>
#include <geometry_msgs/Twist.h>

namespace AL
{
  class ALMotionProxy;
  class ALBroker;

  class ALRosSubscriber
  {
  public:
    ALRosSubscriber();

    void init(ALPtr<ALBroker> pBroker, ros::NodeHandle& pNodeHandle);

    void walkCallback(const geometry_msgs::Twist::ConstPtr& cmd_vel);

    virtual ~ALRosSubscriber();

  private:
    ros::Subscriber fSubscriber;
    ALPtr<ALMotionProxy> fMotionProxy;
  };
}

#endif  // ROSBRIDGE_ALROSSUBSCRIBER_H

