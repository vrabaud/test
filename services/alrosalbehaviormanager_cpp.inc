/*
* Generated for ALBehaviorManager, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALBehaviorManager::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getMethodHelp"), &ALRosALBehaviorManager::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBehaviorManager/getModuleHelp"), &ALRosALBehaviorManager::getModuleHelp, this));
}
// -- custom ros methods


bool ALRosALBehaviorManager::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALBehaviorManager::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBehaviorManager.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

