/*
* Generated for ALSonar, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALSonar::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getMethodHelp"), &ALRosALSonar::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getModuleHelp"), &ALRosALSonar::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSonar/getSubscribersInfo"), &ALRosALSonar::getSubscribersInfo, this));
}
// -- custom ros methods


bool ALRosALSonar::getMethodHelp(
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


bool ALRosALSonar::getModuleHelp(
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


//bool ALRosALSonar::getSubscribersInfo(
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

