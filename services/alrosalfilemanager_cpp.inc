/*
* Generated for ALFileManager, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALFileManager::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getFileContents"), &ALRosALFileManager::getFileContents, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getMethodHelp"), &ALRosALFileManager::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFileManager/getModuleHelp"), &ALRosALFileManager::getModuleHelp, this));
}
// -- custom ros methods

//bool ALRosALFileManager::getFileContents(
//    rosbridge::ALFileManagerGetFileContents::Request  &req,
//    rosbridge::ALFileManagerGetFileContents::Response &res)
//{
//  try {
//    res.value = fProxy->getFileContents(req.prefs);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALFileManager::getMethodHelp(
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

//bool ALRosALFileManager::getModuleHelp(
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
