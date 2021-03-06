/*
* Generated for ALVideoDevice, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALVideoDevice::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getDirectRawImageRemote"), &ALRosALVideoDevice::getDirectRawImageRemote, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getImageRemote"), &ALRosALVideoDevice::getImageRemote, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getMethodHelp"), &ALRosALVideoDevice::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/getModuleHelp"), &ALRosALVideoDevice::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVideoDevice/resolutionToSizes"), &ALRosALVideoDevice::resolutionToSizes, this));
}
// -- custom ros methods


//bool ALRosALVideoDevice::getDirectRawImageRemote(
//  rosbridge::ALVisionVideoInputGetDirectRawImageRemote::Request  &req,
//  rosbridge::ALVisionVideoInputGetDirectRawImageRemote::Response &res)
//{
//  try {
//    res.value = fProxy->getDirectRawImageRemote(req.id);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALVideoDevice.getDirectRawImageRemote failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALVideoDevice::getImageRemote(
//  rosbridge::ALVisionVideoInputGetImageRemote::Request  &req,
//  rosbridge::ALVisionVideoInputGetImageRemote::Response &res)
//{
//  try {
//    res.value = fProxy->getImageRemote(req.id);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALVideoDevice.getImageRemote failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALVideoDevice::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALVideoDevice::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVideoDevice.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALVideoDevice::resolutionToSizes(
//  rosbridge::ALVisionVideoInputResolutionToSizes::Request  &req,
//  rosbridge::ALVisionVideoInputResolutionToSizes::Response &res)
//{
//  try {
//    res.value = fProxy->resolutionToSizes(req.resolution);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALVideoDevice.resolutionToSizes failed with exception: %s", e.what());
//    return false;
//  }
//}

