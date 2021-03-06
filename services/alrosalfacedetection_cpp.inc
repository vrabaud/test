/*
* Generated for ALFaceDetection, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALFaceDetection::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getMethodHelp"), &ALRosALFaceDetection::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getModuleHelp"), &ALRosALFaceDetection::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFaceDetection/getSubscribersInfo"), &ALRosALFaceDetection::getSubscribersInfo, this));
}
// -- custom ros methods


bool ALRosALFaceDetection::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALFaceDetection::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFaceDetection.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALFaceDetection::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{
//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALFaceDetection.getSubscribersInfo failed with exception: %s", e.what());
//    return false;
//  }
//}

