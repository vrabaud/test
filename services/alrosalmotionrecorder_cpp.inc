/*
* Generated for ALMotionRecorder, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALMotionRecorder::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/dataChanged"), &ALRosALMotionRecorder::dataChanged, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/getMethodHelp"), &ALRosALMotionRecorder::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/getModuleHelp"), &ALRosALMotionRecorder::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/startPeriodicRecording"), &ALRosALMotionRecorder::startPeriodicRecording, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALMotionRecorder/stopAndGetRecording"), &ALRosALMotionRecorder::stopAndGetRecording, this));
}
// -- custom ros methods


//bool ALRosALMotionRecorder::dataChanged(
//  rosbridge::ALMotionRecorderDataChanged::Request  &req,
//  rosbridge::ALMotionRecorderDataChanged::Response &res)
//{

//  try {
//    fProxy->dataChanged(req.dataName, req.data, req.message);
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


bool ALRosALMotionRecorder::getMethodHelp(
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


bool ALRosALMotionRecorder::getModuleHelp(
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


//bool ALRosALMotionRecorder::startPeriodicRecording(
//  rosbridge::ALMotionRecorderStartPeriodicRecording::Request  &req,
//  rosbridge::ALMotionRecorderStartPeriodicRecording::Response &res)
//{

//  try {
//    fProxy->startPeriodicRecording(req.jointsToRecord, req.nbPoses, req.extensionAllowed, req.timeStep, req.jointsToReplay, req.replayData);
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


//bool ALRosALMotionRecorder::stopAndGetRecording(
//  rosbridge::ALMotionRecorderStopAndGetRecording::Request  &req,
//  rosbridge::ALMotionRecorderStopAndGetRecording::Response &res)
//{

//  try {
//    res.value = fProxy->stopAndGetRecording();
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}

