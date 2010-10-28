/*
* Generated for ALFsr, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALFsr::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/dataChanged"), &ALRosALFsr::dataChanged, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/getMethodHelp"), &ALRosALFsr::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFsr/getModuleHelp"), &ALRosALFsr::getModuleHelp, this));
}
// -- custom ros methods

//bool ALRosALFsr::dataChanged(
//    rosbridge::ALModuleDataChanged::Request  &req,
//    rosbridge::ALModuleDataChanged::Response &res)
//{
//  try {
//    fProxy->dataChanged(req.dataName, req.data, req.message);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALFsr::getMethodHelp(
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

//bool ALRosALFsr::getModuleHelp(
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

