/*
* Generated for ALTextToSpeech, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALTextToSpeech::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getMethodHelp"), &ALRosALTextToSpeech::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALTextToSpeech/getModuleHelp"), &ALRosALTextToSpeech::getModuleHelp, this));
}
// -- custom ros methods


bool ALRosALTextToSpeech::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALTextToSpeech.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALTextToSpeech::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALTextToSpeech.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

