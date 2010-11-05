/*
* Generated for ALLaser, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALLaser::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/getMethodHelp"), &ALRosALLaser::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/getModuleHelp"), &ALRosALLaser::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/setDetectingLength"), &ALRosALLaser::setDetectingLength, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALLaser/setOpeningAngle"), &ALRosALLaser::setOpeningAngle, this));
}
// -- custom ros methods


bool ALRosALLaser::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLaser.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALLaser::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALLaser.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALLaser::setDetectingLength(
//  rosbridge::ALLaserSetDetectingLength::Request  &req,
//  rosbridge::ALLaserSetDetectingLength::Response &res)
//{
//  try {
//    fProxy->setDetectingLength(req.length_min_l, req.length_max_l);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALLaser.setDetectingLength failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALLaser::setOpeningAngle(
//  rosbridge::ALLaserSetOpeningAngle::Request  &req,
//  rosbridge::ALLaserSetOpeningAngle::Response &res)
//{
//  try {
//    fProxy->setOpeningAngle(req.angle_min_f, req.angle_max_f);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALLaser.setOpeningAngle failed with exception: %s", e.what());
//    return false;
//  }
//}

