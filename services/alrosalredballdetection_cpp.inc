/*
* Generated for ALRedBallDetection, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALRedBallDetection::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getMethodHelp"), &ALRosALRedBallDetection::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getModuleHelp"), &ALRosALRedBallDetection::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALRedBallDetection/getSubscribersInfo"), &ALRosALRedBallDetection::getSubscribersInfo, this));
}
// -- custom ros methods


bool ALRosALRedBallDetection::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRedBallDetection.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALRedBallDetection::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALRedBallDetection.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALRedBallDetection::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{
//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALRedBallDetection.getSubscribersInfo failed with exception: %s", e.what());
//    return false;
//  }
//}

