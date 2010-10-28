/*
* Generated for ALFrameManager, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALFrameManager::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/dataChanged"), &ALRosALFrameManager::dataChanged, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getMethodHelp"), &ALRosALFrameManager::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getModuleHelp"), &ALRosALFrameManager::getModuleHelp, this));
}
// -- custom ros methods

//bool ALRosALFrameManager::dataChanged(
//    rosbridge::ALFrameManagerDataChanged::Request  &req,
//    rosbridge::ALFrameManagerDataChanged::Response &res)
//{
//  try {
//    fProxy->dataChanged(req.dataName, req.data, req.message);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALFrameManager::getMethodHelp(
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

//bool ALRosALFrameManager::getModuleHelp(
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

