/*
* Generated for ALLauncher, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALLauncher::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getMethodHelp"), &ALRosALLauncher::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLauncher/getModuleHelp"), &ALRosALLauncher::getModuleHelp, this));
}
// -- custom ros methods


bool ALRosALLauncher::getMethodHelp(
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


bool ALRosALLauncher::getModuleHelp(
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

