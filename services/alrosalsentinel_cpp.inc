/*
* Generated for ALSentinel, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALSentinel::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/BatteryChargeCellVoltageMinChanged"), &ALRosALSentinel::BatteryChargeCellVoltageMinChanged, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/BatteryChargeStatusChanged"), &ALRosALSentinel::BatteryChargeStatusChanged, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getMethodHelp"), &ALRosALSentinel::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/getModuleHelp"), &ALRosALSentinel::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onAccX"), &ALRosALSentinel::onAccX, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onAccY"), &ALRosALSentinel::onAccY, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onAccZ"), &ALRosALSentinel::onAccZ, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onBatteryMeasure"), &ALRosALSentinel::onBatteryMeasure, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onMotorError"), &ALRosALSentinel::onMotorError, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/onTemperatureMeasure"), &ALRosALSentinel::onTemperatureMeasure, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALSentinel/powerButtonOnPress"), &ALRosALSentinel::powerButtonOnPress, this));
}
// -- custom ros methods


//bool ALRosALSentinel::BatteryChargeCellVoltageMinChanged(
//  rosbridge::ALSentinelBatteryChargeCellVoltageMinChanged::Request  &req,
//  rosbridge::ALSentinelBatteryChargeCellVoltageMinChanged::Response &res)
//{
//  try {
//    fProxy->BatteryChargeCellVoltageMinChanged(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.BatteryChargeCellVoltageMinChanged failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::BatteryChargeStatusChanged(
//  rosbridge::ALSentinelBatteryChargeStatusChanged::Request  &req,
//  rosbridge::ALSentinelBatteryChargeStatusChanged::Response &res)
//{
//  try {
//    fProxy->BatteryChargeStatusChanged(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.BatteryChargeStatusChanged failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALSentinel::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSentinel.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALSentinel::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALSentinel.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALSentinel::onAccX(
//  rosbridge::ALSentinelOnAccX::Request  &req,
//  rosbridge::ALSentinelOnAccX::Response &res)
//{
//  try {
//    fProxy->onAccX(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onAccX failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::onAccY(
//  rosbridge::ALSentinelOnAccY::Request  &req,
//  rosbridge::ALSentinelOnAccY::Response &res)
//{
//  try {
//    fProxy->onAccY(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onAccY failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::onAccZ(
//  rosbridge::ALSentinelOnAccZ::Request  &req,
//  rosbridge::ALSentinelOnAccZ::Response &res)
//{
//  try {
//    fProxy->onAccZ(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onAccZ failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::onBatteryMeasure(
//  rosbridge::ALSentinelOnBatteryMeasure::Request  &req,
//  rosbridge::ALSentinelOnBatteryMeasure::Response &res)
//{
//  try {
//    fProxy->onBatteryMeasure(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onBatteryMeasure failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::onMotorError(
//  rosbridge::ALSentinelOnMotorError::Request  &req,
//  rosbridge::ALSentinelOnMotorError::Response &res)
//{
//  try {
//    fProxy->onMotorError(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onMotorError failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::onTemperatureMeasure(
//  rosbridge::ALSentinelOnTemperatureMeasure::Request  &req,
//  rosbridge::ALSentinelOnTemperatureMeasure::Response &res)
//{
//  try {
//    fProxy->onTemperatureMeasure(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.onTemperatureMeasure failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALSentinel::powerButtonOnPress(
//  rosbridge::ALSentinelPowerButtonOnPress::Request  &req,
//  rosbridge::ALSentinelPowerButtonOnPress::Response &res)
//{
//  try {
//    fProxy->powerButtonOnPress(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALSentinel.powerButtonOnPress failed with exception: %s", e.what());
//    return false;
//  }
//}

