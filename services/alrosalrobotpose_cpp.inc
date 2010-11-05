/*
* Generated for ALRobotPose, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALRobotPose::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getActualPoseAndTime"), &ALRosALRobotPose::getActualPoseAndTime, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getMethodHelp"), &ALRosALRobotPose::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getModuleHelp"), &ALRosALRobotPose::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getPoseNames"), &ALRosALRobotPose::getPoseNames, this));
}
// -- custom ros methods


//bool ALRosALRobotPose::getActualPoseAndTime(
//  rosbridge::ALRobotPoseGetActualPoseAndTime::Request  &req,
//  rosbridge::ALRobotPoseGetActualPoseAndTime::Response &res)
//{
//  try {
//    res.value = fProxy->getActualPoseAndTime();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALRobotPose.getActualPoseAndTime failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALRobotPose::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRobotPose.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALRobotPose::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRobotPose.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALRobotPose::getPoseNames(
//  rosbridge::ALRobotPoseGetPoseNames::Request  &req,
//  rosbridge::ALRobotPoseGetPoseNames::Response &res)
//{
//  try {
//    res.value = fProxy->getPoseNames();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALRobotPose.getPoseNames failed with exception: %s", e.what());
//    return false;
//  }
//}

