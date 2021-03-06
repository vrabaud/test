/*
* Generated for ALSpeechRecognition, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALSpeechRecognition::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getMethodHelp"), &ALRosALSpeechRecognition::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getModuleHelp"), &ALRosALSpeechRecognition::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSpeechRecognition/getSubscribersInfo"), &ALRosALSpeechRecognition::getSubscribersInfo, this));
}
// -- custom ros methods


bool ALRosALSpeechRecognition::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALSpeechRecognition::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSpeechRecognition.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALSpeechRecognition::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{
//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSpeechRecognition.getSubscribersInfo failed with exception: %s", e.what());
//    return false;
//  }
//}

