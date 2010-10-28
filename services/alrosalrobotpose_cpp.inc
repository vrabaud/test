/*
* Generated for ALRobotPose, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALRobotPose::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getActualPoseAndTime"), &ALRosALRobotPose::getActualPoseAndTime, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getMethodHelp"), &ALRosALRobotPose::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getModuleHelp"), &ALRosALRobotPose::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRobotPose/getPoseNames"), &ALRosALRobotPose::getPoseNames, this));
}
// -- custom ros methods

//bool ALRosALRobotPose::getActualPoseAndTime(
//    rosbridge::ALRobotPoseGetActualPoseAndTime::Request  &req,
//    rosbridge::ALRobotPoseGetActualPoseAndTime::Response &res)
//{
//  try {
//    res.value = fProxy->getActualPoseAndTime();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALRobotPose::getMethodHelp(
//    rosbridge::ALModuleGetMethodHelp::Request  &req,
//    rosbridge::ALModuleGetMethodHelp::Response &res)
//{
//  try {
//    res.value = fProxy->getMethodHelp(req.methodName);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALRobotPose::getModuleHelp(
//    rosbridge::ALModuleGetModuleHelp::Request  &req,
//    rosbridge::ALModuleGetModuleHelp::Response &res)
//{
//  try {
//    res.value = fProxy->getModuleHelp();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALRobotPose::getPoseNames(
//    rosbridge::ALRobotPoseGetPoseNames::Request  &req,
//    rosbridge::ALRobotPoseGetPoseNames::Response &res)
//{
//  try {
//    res.value = fProxy->getPoseNames();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

