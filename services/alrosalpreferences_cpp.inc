/*
* Generated for ALPreferences, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALPreferences::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/getMethodHelp"), &ALRosALPreferences::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/getModuleHelp"), &ALRosALPreferences::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/readPrefFile"), &ALRosALPreferences::readPrefFile, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/saveToMemory"), &ALRosALPreferences::saveToMemory, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALPreferences/writePrefFile"), &ALRosALPreferences::writePrefFile, this));
}
// -- custom ros methods


bool ALRosALPreferences::getMethodHelp(
  rosbridge::ALModuleGetMethodHelp::Request  &req,
  rosbridge::ALModuleGetMethodHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getMethodHelp(req.methodName);
    ALRosMethodHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.getMethodHelp failed with exception: %s", e.what());
    return false;
  }
}


bool ALRosALPreferences::getModuleHelp(
  rosbridge::ALModuleGetModuleHelp::Request  &req,
  rosbridge::ALModuleGetModuleHelp::Response &res)
{
  try {
    AL::ALValue data = fProxy->getModuleHelp();
    ALRosModuleHelpHelper(data, res);
    return true;
  } catch(const ALError& e) {
    ROS_ERROR("ALPreferences.getModuleHelp failed with exception: %s", e.what());
    return false;
  }
}


//bool ALRosALPreferences::readPrefFile(
//  rosbridge::ALPreferencesReadPrefFile::Request  &req,
//  rosbridge::ALPreferencesReadPrefFile::Response &res)
//{
//  try {
//    res.value = fProxy->readPrefFile(req.fileName, req.autoGenerateMemoryNames);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALPreferences.readPrefFile failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALPreferences::saveToMemory(
//  rosbridge::ALPreferencesSaveToMemory::Request  &req,
//  rosbridge::ALPreferencesSaveToMemory::Response &res)
//{
//  try {
//    res.value = fProxy->saveToMemory(req.prefs);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALPreferences.saveToMemory failed with exception: %s", e.what());
//    return false;
//  }
//}


//bool ALRosALPreferences::writePrefFile(
//  rosbridge::ALPreferencesWritePrefFile::Request  &req,
//  rosbridge::ALPreferencesWritePrefFile::Response &res)
//{
//  try {
//    fProxy->writePrefFile(req.fileName, req.prefs, req.ignoreMemoryNames);
//
//    return true;
//  } catch(const ALError& e) {
//    ROS_ERROR("ALPreferences.writePrefFile failed with exception: %s", e.what());
//    return false;
//  }
//}

