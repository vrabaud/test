/*
* Generated for ALMotion, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*
* Note: due to the ragged array shape of some of ALMotion's messages,
*       not all functionality is available via ROS messages.
*
*/

void ALRosALMotion::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/angleInterpolation"), &ALRosALMotion::angleInterpolation, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/angleInterpolationBezier"), &ALRosALMotion::angleInterpolationBezier, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/angleInterpolationWithSpeed"), &ALRosALMotion::angleInterpolationWithSpeed, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/changeAngles"), &ALRosALMotion::changeAngles, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getAngles"), &ALRosALMotion::getAngles, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getLimits"), &ALRosALMotion::getLimits, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getMethodHelp"), &ALRosALMotion::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getModuleHelp"), &ALRosALMotion::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getRobotConfig"), &ALRosALMotion::getRobotConfig, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getStiffnesses"), &ALRosALMotion::getStiffnesses, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getTaskList"), &ALRosALMotion::getTaskList, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/getWalkArmsEnable"), &ALRosALMotion::getWalkArmsEnable, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/positionInterpolation"), &ALRosALMotion::positionInterpolation, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setAngles"), &ALRosALMotion::setAngles, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setMotionConfig"), &ALRosALMotion::setMotionConfig, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/setStiffnesses"), &ALRosALMotion::setStiffnesses, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/stiffnessInterpolation"), &ALRosALMotion::stiffnessInterpolation, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/transformInterpolation"), &ALRosALMotion::transformInterpolation, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotion/wbSetEffectorControl"), &ALRosALMotion::wbSetEffectorControl, this));
}
// -- custom ros methods


bool ALRosALMotion::angleInterpolation(
  rosbridge::ALMotionAngleInterpolation::Request  &req,
  rosbridge::ALMotionAngleInterpolation::Response &res)
{
  try {
    fProxy->angleInterpolation(req.names, req.angleLists, req.timeLists, req.isAbsolute);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::angleInterpolationBezier(
//  rosbridge::ALMotionAngleInterpolationBezier::Request  &req,
//  rosbridge::ALMotionAngleInterpolationBezier::Response &res)
//{
//  try {
//    fProxy->angleInterpolationBezier(req.jointNames, req.times, req.controlPoints);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.angleInterpolationBezier failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::angleInterpolationWithSpeed(
  rosbridge::ALMotionAngleInterpolationWithSpeed::Request  &req,
  rosbridge::ALMotionAngleInterpolationWithSpeed::Response &res)
{
  try {
    fProxy->angleInterpolationWithSpeed(req.names, req.targetAngles, req.maxSpeedFraction);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosALMotion::changeAngles(
  rosbridge::ALMotionChangeAngles::Request  &req,
  rosbridge::ALMotionChangeAngles::Response &res)
{
  try {
    fProxy->changeAngles(req.names, req.changes, req.fractionMaxSpeed);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosALMotion::getAngles(
  rosbridge::ALMotionGetAngles::Request  &req,
  rosbridge::ALMotionGetAngles::Response &res)
{
  try {
    res.value = fProxy->getAngles(req.names, req.useSensors);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::getLimits(
//  rosbridge::ALMotionGetLimits::Request  &req,
//  rosbridge::ALMotionGetLimits::Response &res)
//{
//  try {
//    res.value = fProxy->getLimits(req.name);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.getLimits failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALMotion::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMotion.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALMotion::getRobotConfig(
//  rosbridge::ALMotionGetRobotConfig::Request  &req,
//  rosbridge::ALMotionGetRobotConfig::Response &res)
//{
//  try {
//    res.value = fProxy->getRobotConfig();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.getRobotConfig failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::getStiffnesses(
  rosbridge::ALMotionGetStiffnesses::Request  &req,
  rosbridge::ALMotionGetStiffnesses::Response &res)
{
  try {
    res.value = fProxy->getStiffnesses(req.jointName);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::getTaskList(
//  rosbridge::ALMotionGetTaskList::Request  &req,
//  rosbridge::ALMotionGetTaskList::Response &res)
//{
//  try {
//    res.value = fProxy->getTaskList();
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.getTaskList failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::getWalkArmsEnable(
  rosbridge::ALMotionGetWalkArmsEnable::Request  &req,
  rosbridge::ALMotionGetWalkArmsEnable::Response &res)
{
  try {
//    res.value = fProxy->getWalkArmsEnable();
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::positionInterpolation(
//  rosbridge::ALMotionPositionInterpolation::Request  &req,
//  rosbridge::ALMotionPositionInterpolation::Response &res)
//{
//  try {
//    fProxy->positionInterpolation(req.chainName, req.space, req.path, req.axisMask, req.durations, req.isAbsolute);
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.positionInterpolation failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::setAngles(
  rosbridge::ALMotionSetAngles::Request  &req,
  rosbridge::ALMotionSetAngles::Response &res)
{
  try {
    fProxy->setAngles(req.names, req.angles, req.fractionMaxSpeed);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::setMotionConfig(
//  rosbridge::ALMotionSetMotionConfig::Request  &req,
//  rosbridge::ALMotionSetMotionConfig::Response &res)
//{
//  try {
//    fProxy->setMotionConfig(req.config);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.setMotionConfig failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::setStiffnesses(
  rosbridge::ALMotionSetStiffnesses::Request  &req,
  rosbridge::ALMotionSetStiffnesses::Response &res)
{
  try {
    fProxy->setStiffnesses(req.names, req.stiffnesses);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosALMotion::stiffnessInterpolation(
  rosbridge::ALMotionStiffnessInterpolation::Request  &req,
  rosbridge::ALMotionStiffnessInterpolation::Response &res)
{
  try {
    fProxy->stiffnessInterpolation(req.names, req.stiffnessLists, req.timeLists);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMotion::transformInterpolation(
//  rosbridge::ALMotionTransformInterpolation::Request  &req,
//  rosbridge::ALMotionTransformInterpolation::Response &res)
//{
//  try {
//    fProxy->transformInterpolation(req.chainName, req.space, req.path, req.axisMask, req.duration, req.isAbsolute);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMotion.transformInterpolation failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMotion::wbSetEffectorControl(
  rosbridge::ALMotionWbSetEffectorControl::Request  &req,
  rosbridge::ALMotionWbSetEffectorControl::Response &res)
{
  try {
    fProxy->wbSetEffectorControl(req.effectorName, req.targetCoordinate);

    return true;
  } catch(const ALError&) {
    return false;
  }
}

