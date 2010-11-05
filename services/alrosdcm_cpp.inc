/*
* Generated for DCM, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosDCM::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/calibration"), &ALRosDCM::calibration, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/createAlias"), &ALRosDCM::createAlias, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getMethodHelp"), &ALRosDCM::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getModuleHelp"), &ALRosDCM::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/getPrefix"), &ALRosDCM::getPrefix, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/preferences"), &ALRosDCM::preferences, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/set"), &ALRosDCM::set, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/DCM/setAlias"), &ALRosDCM::setAlias, this));
}
// -- custom ros methods


//bool ALRosDCM::calibration(
//  rosbridge::DCMCalibration::Request  &req,
//  rosbridge::DCMCalibration::Response &res)
//{

//  try {
//    fProxy->calibration(req.calibrationInput);
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


bool ALRosDCM::createAlias(
  rosbridge::DCMCreateAlias::Request  &req,
  rosbridge::DCMCreateAlias::Response &res)
{
  try {
    AL::ALValue command;
    command.arraySetSize(2);
    command[0] = req.alias;
    command[1] = req.keys;
    AL::ALValue response = fProxy->createAlias(command);
    res.alias = (std::string) response[0];
    res.keys = response[1];
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosDCM::getMethodHelp(
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


bool ALRosDCM::getModuleHelp(
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


//bool ALRosDCM::getPrefix(
//  rosbridge::DCMGetPrefix::Request  &req,
//  rosbridge::DCMGetPrefix::Response &res)
//{

//  try {
//    res.value = fProxy->getPrefix();
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


//bool ALRosDCM::preferences(
//  rosbridge::DCMPreferences::Request  &req,
//  rosbridge::DCMPreferences::Response &res)
//{

//  try {
//    res.value = fProxy->preferences(req.action, req.target, req.keyName, req.keyValue);
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


bool ALRosDCM::set(
  rosbridge::DCMSet::Request  &req,
  rosbridge::DCMSet::Response &res)
{
  try {
    AL::ALValue command;
    command.arraySetSize(3);
    command[0] = req.name;
    command[1] = req.type;
    command[2].arraySetSize(req.commands.size());
    for (unsigned int i=0; i< req.commands.size(); ++i) {
      AL::ALValue c;
      c.arraySetSize(3);
      c[0] = (float)req.commands[i].command;
      c[1] = (int)req.commands[i].time;
      c[2] = (int)req.commands[i].importance;
      command[2][i] = c;
    }
    fProxy->set(command);
    return true;
  } catch(const ALError&) {
    return false;
  }
}


bool ALRosDCM::setAlias(
  rosbridge::DCMSetAlias::Request  &req,
  rosbridge::DCMSetAlias::Response &res)
{
  try {
    AL::ALValue command;
    command.arraySetSize(5);
    command[0] = req.name;
    command[1] = req.updatetype;
    command[2] = req.commandtype;
    command[3] = req.importance;
    command[4] = req.times;
    command[5].arraySetSize(req.commands.size());
    for (unsigned int i=0; i< req.commands.size(); ++i) {
      command[5][i] = req.commands[i].values;
    }
    fProxy->setAlias(command);
    return true;
  } catch(const ALError&) {
    return false;
  }
}

