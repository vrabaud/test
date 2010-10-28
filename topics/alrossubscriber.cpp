/**
 * @author Chris Kilner
 *
 * Copyright (C) 2010 Aldebaran Robotics
 */

#include "alrossubscriber.h"
#include <alproxies/almotionproxy.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>

namespace AL {
  ALRosSubscriber::ALRosSubscriber()
  {
  }

  ALRosSubscriber::~ALRosSubscriber() {}

  void ALRosSubscriber::init(ALPtr<ALBroker> pBroker, ros::NodeHandle& pNodeHandle) {
    try {
      fMotionProxy = ALPtr<ALMotionProxy>(new ALMotionProxy(pBroker));
    } catch (const ALError&) {
      std::cout << "ALRosSubscriber failed to create ALMotionProxy" << std::endl;
    }
    fSubscriber = pNodeHandle.subscribe("cmd_vel", 10, &ALRosSubscriber::walkCallback, this);
  }

  void ALRosSubscriber::walkCallback(const geometry_msgs::Twist::ConstPtr& cmd_vel) {
    // limit to +/- 1.0
    float x = cmd_vel->linear.x > 1.0f ? 1.0f : (cmd_vel->linear.x < -1.0f ? -1.0f : cmd_vel->linear.x);
    float y = cmd_vel->linear.y > 1.0f ? 1.0f : (cmd_vel->linear.y < -1.0f ? -1.0f : cmd_vel->linear.y);
    float wz = cmd_vel->angular.z > 1.0f ? 1.0f : (cmd_vel->angular.z < -1.0f ? -1.0f : cmd_vel->angular.z);

    std::cout << "Received cmd_vel: " <<  x << " " << y << " " << wz << std::endl;
    try {
      fMotionProxy->setWalkTargetVelocity(x, y, wz, 1.0f);
    } catch(const ALError&) {
      std::cout << "ALRosSubscriber::walkCallback - Failed to send walk command to ALMotionProxy" << std::endl;
    }
  }
}
