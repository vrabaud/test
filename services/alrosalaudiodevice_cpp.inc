/*
* Generated for ALAudioDevice, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALAudioDevice::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getMethodHelp"), &ALRosALAudioDevice::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/getModuleHelp"), &ALRosALAudioDevice::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALAudioDevice/sendRemoteBufferToOutput"), &ALRosALAudioDevice::sendRemoteBufferToOutput, this));
}
// -- custom ros methods

//bool ALRosALAudioDevice::getMethodHelp(
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

//bool ALRosALAudioDevice::getModuleHelp(
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

//bool ALRosALAudioDevice::sendRemoteBufferToOutput(
//    rosbridge::ALAudioDeviceSendRemoteBufferToOutput::Request  &req,
//    rosbridge::ALAudioDeviceSendRemoteBufferToOutput::Response &res)
//{
//  try {
//    res.value = fProxy->sendRemoteBufferToOutput(req.nbOfFrames, req.pBuffer);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

