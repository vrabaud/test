/*
* Generated for ALLeds, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALLeds::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/fadeListRGB"), &ALRosALLeds::fadeListRGB, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getIntensity"), &ALRosALLeds::getIntensity, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getMethodHelp"), &ALRosALLeds::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getModuleHelp"), &ALRosALLeds::getModuleHelp, this));
}
// -- custom ros methods


//bool ALRosALLeds::fadeListRGB(
//  rosbridge::ALLedsFadeListRGB::Request  &req,
//  rosbridge::ALLedsFadeListRGB::Response &res)
//{
//  try {
//    fProxy->fadeListRGB(req.name, req.rgbList, req.timeList);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALLeds.fadeListRGB failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALLeds::getIntensity(
//  rosbridge::ALLedsGetIntensity::Request  &req,
//  rosbridge::ALLedsGetIntensity::Response &res)
//{
//  try {
//    res.value = fProxy->getIntensity(req.name);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALLeds.getIntensity failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALLeds::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLeds.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALLeds::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLeds.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

