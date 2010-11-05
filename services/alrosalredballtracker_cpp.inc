/*
* Generated for ALRedBallTracker, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALRedBallTracker::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getMethodHelp"), &ALRosALRedBallTracker::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallTracker/getModuleHelp"), &ALRosALRedBallTracker::getModuleHelp, this));
}
// -- custom ros methods


bool ALRosALRedBallTracker::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRedBallTracker.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALRedBallTracker::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRedBallTracker.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

