/*
* Generated for ALAudioPlayer, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALAudioPlayer::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getMethodHelp"), &ALRosALAudioPlayer::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioPlayer/getModuleHelp"), &ALRosALAudioPlayer::getModuleHelp, this));
}
// -- custom ros methods


bool ALRosALAudioPlayer::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALAudioPlayer::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioPlayer.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

