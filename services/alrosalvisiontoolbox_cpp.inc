/*
* Generated for ALVisionToolbox, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALVisionToolbox::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/getMethodHelp"), &ALRosALVisionToolbox::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/getModuleHelp"), &ALRosALVisionToolbox::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionToolbox/stopVideoRecord"), &ALRosALVisionToolbox::stopVideoRecord, this));
}
// -- custom ros methods


bool ALRosALVisionToolbox::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionToolbox.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALVisionToolbox::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALVisionToolbox.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALVisionToolbox::stopVideoRecord(
//  rosbridge::ALVisionToolboxStopVideoRecord::Request  &req,
//  rosbridge::ALVisionToolboxStopVideoRecord::Response &res)
//{
//  try {
//    res.value = fProxy->stopVideoRecord();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALVisionToolbox.stopVideoRecord failed with exception: %s", e.what());
//    return false;
//  }
//}

