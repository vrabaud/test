/*
* Generated for ALMemory, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALMemory::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/dataChanged"), &ALRosALMemory::dataChanged, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getDataString"), &ALRosALMemory::getDataString, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getDataFloat"), &ALRosALMemory::getDataFloat, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getDataInt"), &ALRosALMemory::getDataInt, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getData"), &ALRosALMemory::getData, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getDataListName"), &ALRosALMemory::getDataListName, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getDataOnChange"), &ALRosALMemory::getDataOnChange, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getListData"), &ALRosALMemory::getListData, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getMethodHelp"), &ALRosALMemory::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/getModuleHelp"), &ALRosALMemory::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertDataObject"), &ALRosALMemory::insertDataObject, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertListData"), &ALRosALMemory::insertListData, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/insertObject"), &ALRosALMemory::insertObject, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/raiseEvent"), &ALRosALMemory::raiseEvent, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMemory/raiseMicroEvent"), &ALRosALMemory::raiseMicroEvent, this));
}
// -- custom ros methods


//bool ALRosALMemory::dataChanged(
//  rosbridge::ALMemoryDataChanged::Request  &req,
//  rosbridge::ALMemoryDataChanged::Response &res)
//{
//  try {
//    fProxy->dataChanged(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.dataChanged failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMemory::getDataString(
  rosbridge::ALMemoryGetDataString::Request  &req,
  rosbridge::ALMemoryGetDataString::Response &res)
{
  try {
    res.value = (std::string)fProxy->getData(req.name);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory::getData failed with error: %s", e.what());
    return false;
  }
}

bool ALRosALMemory::getDataFloat(
  rosbridge::ALMemoryGetDataFloat::Request  &req,
  rosbridge::ALMemoryGetDataFloat::Response &res)
{
  try {
    res.value = (float) fProxy->getData(req.name);
    return true;
  } catch(const ALError&) {
    return false;
  }
}

bool ALRosALMemory::getDataInt(
  rosbridge::ALMemoryGetDataInt::Request  &req,
  rosbridge::ALMemoryGetDataInt::Response &res)
{
  try {
    res.value = (int) fProxy->getData(req.name);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMemory::getData(
//  rosbridge::ALMemoryGetData::Request  &req,
//  rosbridge::ALMemoryGetData::Response &res)
//{
//  try {
//    res.value = fProxy->getData(req.name);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.getData failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMemory::getDataListName(
  rosbridge::ALMemoryGetDataListName::Request  &req,
  rosbridge::ALMemoryGetDataListName::Response &res)
{
  try {
    res.values = fProxy->getDataListName();
    return true;
  } catch(const ALError&) {
    return false;
  }
}


//bool ALRosALMemory::getDataOnChange(
//  rosbridge::ALMemoryGetDataOnChange::Request  &req,
//  rosbridge::ALMemoryGetDataOnChange::Response &res)
//{
//  try {
//    res.value = fProxy->getDataOnChange(req.name, req.duration);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.getDataOnChange failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALMemory::getListData(
//  rosbridge::ALMemoryGetListData::Request  &req,
//  rosbridge::ALMemoryGetListData::Response &res)
//{
//  try {
//    res.value = fProxy->getListData(req.name);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.getListData failed with exception: %s", e.what());
//    return false;
//  }
//}


bool ALRosALMemory::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALMemory::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALMemory.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALMemory::insertDataObject(
//  rosbridge::ALMemoryInsertDataObject::Request  &req,
//  rosbridge::ALMemoryInsertDataObject::Response &res)
//{
//  try {
//    fProxy->insertData(req.name, req.data);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.insertData failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALMemory::insertListData(
//  rosbridge::ALMemoryInsertListData::Request  &req,
//  rosbridge::ALMemoryInsertListData::Response &res)
//{
//  try {
//    fProxy->insertListData(req.listOfInsertData);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.insertListData failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALMemory::insertObject(
//  rosbridge::ALMemoryInsertObject::Request  &req,
//  rosbridge::ALMemoryInsertObject::Response &res)
//{
//  try {
//    fProxy->insertObject(req.name, req.buffer, req.bufferSize);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.insertObject failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALMemory::raiseEvent(
//  rosbridge::ALMemoryRaiseEvent::Request  &req,
//  rosbridge::ALMemoryRaiseEvent::Response &res)
//{
//  try {
//    fProxy->raiseEvent(req.name, req.data);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.raiseEvent failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALMemory::raiseMicroEvent(
//  rosbridge::ALMemoryRaiseMicroEvent::Request  &req,
//  rosbridge::ALMemoryRaiseMicroEvent::Response &res)
//{
//  try {
//    fProxy->raiseMicroEvent(req.name, req.data);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALMemory.raiseMicroEvent failed with exception: %s", e.what());
//    return false;
//  }
//}

