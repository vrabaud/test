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
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getMethodHelp"), &ALRosALLeds::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLeds/getModuleHelp"), &ALRosALLeds::getModuleHelp, this));
}
// -- custom ros methods

//bool ALRosALLeds::fadeListRGB(
//    rosbridge::ALLedsFadeListRGB::Request  &req,
//    rosbridge::ALLedsFadeListRGB::Response &res)
//{
//  try {
//    fProxy->fadeListRGB(req.name, req.rgbList, req.timeList);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALLeds::getIntensity(
//    rosbridge::ALLedsGetIntensity::Request  &req,
//    rosbridge::ALLedsGetIntensity::Response &res)
//{
//  try {
//    res.value = fProxy->getIntensity(req.name);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALLeds::getMethodHelp(
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

//bool ALRosALLeds::getModuleHelp(
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
