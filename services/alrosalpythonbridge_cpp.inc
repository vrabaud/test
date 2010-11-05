/*
* Generated for ALPythonBridge, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALPythonBridge::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/evalFull"), &ALRosALPythonBridge::evalFull, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/evalReturn"), &ALRosALPythonBridge::evalReturn, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/getMethodHelp"), &ALRosALPythonBridge::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPythonBridge/getModuleHelp"), &ALRosALPythonBridge::getModuleHelp, this));
}
// -- custom ros methods


//bool ALRosALPythonBridge::evalFull(
//  rosbridge::ALPythonBridgeEvalFull::Request  &req,
//  rosbridge::ALPythonBridgeEvalFull::Response &res)
//{
//  try {
//    res.value = fProxy->evalFull(req.stringToEvaluate);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALPythonBridge.evalFull failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALPythonBridge::evalReturn(
//  rosbridge::ALPythonBridgeEvalReturn::Request  &req,
//  rosbridge::ALPythonBridgeEvalReturn::Response &res)
//{
//  try {
//    res.value = fProxy->evalReturn(req.stringToEvaluate);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALPythonBridge.evalReturn failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALPythonBridge::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALPythonBridge::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPythonBridge.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}

