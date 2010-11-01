/*
* Generated for ALSensors, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALSensors::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getMethodHelp"), &ALRosALSensors::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getModuleHelp"), &ALRosALSensors::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSensors/getSubscribersInfo"), &ALRosALSensors::getSubscribersInfo, this));
}
// -- custom ros methods


bool ALRosALSensors::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{

  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosALSensors::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{

  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALSensors::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{

//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}

