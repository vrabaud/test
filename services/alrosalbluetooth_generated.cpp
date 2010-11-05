/*
* Generated for ALBluetooth
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include "alrosalbluetooth_generated.h"
#include "alroshelpers.h"
#include <ros/ros.h>
#include <alcommon/albroker.h>
#include <alcore/alerror.h>
#include <alproxies/albluetoothproxy.h>

namespace AL {

void ALRosALBluetooth::bindMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  if (! pNaoQiBroker->isModulePresent("ALBluetooth"))
  {
    return;
  }
  fProxy = ALPtr<ALBluetoothProxy> (new ALBluetoothProxy(pNaoQiBroker));

  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/connect"), &ALRosALBluetooth::connect, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/connectString"), &ALRosALBluetooth::connectString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/disconnect"), &ALRosALBluetooth::disconnect, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/disconnectString"), &ALRosALBluetooth::disconnectString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/exit"), &ALRosALBluetooth::exit, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getBrokerName"), &ALRosALBluetooth::getBrokerName, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getConnectedDeviceList"), &ALRosALBluetooth::getConnectedDeviceList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getMethodList"), &ALRosALBluetooth::getMethodList, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/getUsage"), &ALRosALBluetooth::getUsage, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/isConnected"), &ALRosALBluetooth::isConnected, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/ping"), &ALRosALBluetooth::ping, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALBluetooth/version"), &ALRosALBluetooth::version, this));
  bindCustomMethods(pNaoQiBroker, pRosNode);
}

// -- generated ros methods --

bool ALRosALBluetooth::connect(
    rosbridge::ALBluetoothConnect::Request  &req,
    rosbridge::ALBluetoothConnect::Response &res)
{
  try {
    fProxy->connect();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.connect failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::connectString(
    rosbridge::ALBluetoothConnectString::Request  &req,
    rosbridge::ALBluetoothConnectString::Response &res)
{
  try {
    fProxy->connect(req.devicename);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.connect failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::disconnect(
    rosbridge::ALBluetoothDisconnect::Request  &req,
    rosbridge::ALBluetoothDisconnect::Response &res)
{
  try {
    fProxy->disconnect();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.disconnect failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::disconnectString(
    rosbridge::ALBluetoothDisconnectString::Request  &req,
    rosbridge::ALBluetoothDisconnectString::Response &res)
{
  try {
    fProxy->disconnect(req.devicename);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.disconnect failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::exit(
    rosbridge::ALModuleExit::Request  &req,
    rosbridge::ALModuleExit::Response &res)
{
  try {
    fProxy->exit();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.exit failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::getBrokerName(
    rosbridge::ALModuleGetBrokerName::Request  &req,
    rosbridge::ALModuleGetBrokerName::Response &res)
{
  try {
    res.value = fProxy->getBrokerName();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.getBrokerName failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::getConnectedDeviceList(
    rosbridge::ALBluetoothGetConnectedDeviceList::Request  &req,
    rosbridge::ALBluetoothGetConnectedDeviceList::Response &res)
{
  try {
    res.value = fProxy->getConnectedDeviceList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.getConnectedDeviceList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::getMethodList(
    rosbridge::ALModuleGetMethodList::Request  &req,
    rosbridge::ALModuleGetMethodList::Response &res)
{
  try {
    res.value = fProxy->getMethodList();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.getMethodList failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::getUsage(
    rosbridge::ALModuleGetUsage::Request  &req,
    rosbridge::ALModuleGetUsage::Response &res)
{
  try {
    res.value = fProxy->getUsage(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.getUsage failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::isConnected(
    rosbridge::ALBluetoothIsConnected::Request  &req,
    rosbridge::ALBluetoothIsConnected::Response &res)
{
  try {
    res.value = fProxy->isConnected(req.devicename);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.isConnected failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::ping(
    rosbridge::ALModulePing::Request  &req,
    rosbridge::ALModulePing::Response &res)
{
  try {
    res.value = fProxy->ping();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.ping failed with exception: %s", e.what());
    return false;
  }
}

bool ALRosALBluetooth::version(
    rosbridge::ALModuleVersion::Request  &req,
    rosbridge::ALModuleVersion::Response &res)
{
  try {
    res.value = fProxy->version();
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALBluetooth.version failed with exception: %s", e.what());
    return false;
  }
}


// non-generated code included
#include "alrosalbluetooth_cpp.inc"
}
