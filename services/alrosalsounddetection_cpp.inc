/*
* Generated for ALSoundDetection, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALSoundDetection::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getDescription"), &ALRosALSoundDetection::getDescription, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getEvents"), &ALRosALSoundDetection::getEvents, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getMethodHelp"), &ALRosALSoundDetection::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getModuleHelp"), &ALRosALSoundDetection::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSoundDetection/getSubscribersInfo"), &ALRosALSoundDetection::getSubscribersInfo, this));
}
// -- custom ros methods


//bool ALRosALSoundDetection::getDescription(
//  rosbridge::ALSoundDetectionGetDescription::Request  &req,
//  rosbridge::ALSoundDetectionGetDescription::Response &res)
//{
//  try {
//    res.value = fProxy->getDescription(req.type, req.nameDesc);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSoundDetection.getDescription failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSoundDetection::getEvents(
//  rosbridge::ALSoundDetectionGetEvents::Request  &req,
//  rosbridge::ALSoundDetectionGetEvents::Response &res)
//{
//  try {
//    res.value = fProxy->getEvents(req.type);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSoundDetection.getEvents failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALSoundDetection::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSoundDetection.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALSoundDetection::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSoundDetection.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALSoundDetection::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{
//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSoundDetection.getSubscribersInfo failed with exception: %s", e.what());
//    return false;
//  }
//}

