/*
* Generated for ALBluetooth, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALBluetooth::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getAssociatedDeviceList"), &ALRosALBluetooth::getAssociatedDeviceList, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getDeviceList"), &ALRosALBluetooth::getDeviceList, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getMethodHelp"), &ALRosALBluetooth::getMethodHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getModuleHelp"), &ALRosALBluetooth::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/scan"), &ALRosALBluetooth::scan, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/send"), &ALRosALBluetooth::send, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/setAssociatedDeviceList"), &ALRosALBluetooth::setAssociatedDeviceList, this));
}
// -- custom ros methods

//bool ALRosALBluetooth::getAssociatedDeviceList(
//    rosbridge::ALBluetoothGetAssociatedDeviceList::Request  &req,
//    rosbridge::ALBluetoothGetAssociatedDeviceList::Response &res)
//{
//  try {
//    res.value = fProxy->getAssociatedDeviceList();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALBluetooth::getDeviceList(
//    rosbridge::ALBluetoothGetDeviceList::Request  &req,
//    rosbridge::ALBluetoothGetDeviceList::Response &res)
//{
//  try {
//    res.value = fProxy->getDeviceList();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALBluetooth::getMethodHelp(
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

//bool ALRosALBluetooth::getModuleHelp(
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

//bool ALRosALBluetooth::scan(
//    rosbridge::ALBluetoothScan::Request  &req,
//    rosbridge::ALBluetoothScan::Response &res)
//{
//  try {
//    res.value = fProxy->scan();
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALBluetooth::send(
//    rosbridge::ALBluetoothSend::Request  &req,
//    rosbridge::ALBluetoothSend::Response &res)
//{
//  try {
//    fProxy->send(req.devicename, req.PWMs, req.servos, req.GPIOs);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

//bool ALRosALBluetooth::setAssociatedDeviceList(
//    rosbridge::ALBluetoothSetAssociatedDeviceList::Request  &req,
//    rosbridge::ALBluetoothSetAssociatedDeviceList::Response &res)
//{
//  try {
//    fProxy->setAssociatedDeviceList(req.deviceList);
//    return true;
//  } catch(const ALError& e) {
//    // TODO roslog
//    return false;
//  }
//}

