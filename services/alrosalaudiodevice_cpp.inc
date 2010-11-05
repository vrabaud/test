/*
* Generated for ALAudioDevice, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALAudioDevice::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getMethodHelp"), &ALRosALAudioDevice::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getModuleHelp"), &ALRosALAudioDevice::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/sendRemoteBufferToOutput"), &ALRosALAudioDevice::sendRemoteBufferToOutput, this));
}
// -- custom ros methods


bool ALRosALAudioDevice::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALAudioDevice::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALAudioDevice.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALAudioDevice::sendRemoteBufferToOutput(
//  rosbridge::ALAudioDeviceSendRemoteBufferToOutput::Request  &req,
//  rosbridge::ALAudioDeviceSendRemoteBufferToOutput::Response &res)
//{
//  try {
//    res.value = fProxy->sendRemoteBufferToOutput(req.nbOfFrames, req.pBuffer);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALAudioDevice.sendRemoteBufferToOutput failed with exception: %s", e.what());
//    return false;
//  }
//}

