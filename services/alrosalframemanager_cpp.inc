/*
* Generated for ALFrameManager, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALFrameManager::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/dataChanged"), &ALRosALFrameManager::dataChanged, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getMethodHelp"), &ALRosALFrameManager::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALFrameManager/getModuleHelp"), &ALRosALFrameManager::getModuleHelp, this));
}
// -- custom ros methods


//bool ALRosALFrameManager::dataChanged(
//  rosbridge::ALFrameManagerDataChanged::Request  &req,
//  rosbridge::ALFrameManagerDataChanged::Response &res)
//{
//  try {
//    fProxy->dataChanged(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALFrameManager.dataChanged failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALFrameManager::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFrameManager.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALFrameManager::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALFrameManager.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

