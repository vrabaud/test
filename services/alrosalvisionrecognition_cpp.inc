/*
* Generated for ALVisionRecognition, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

void ALRosALVisionRecognition::bindCustomMethods(AL::ALPtr<AL::ALBroker> pNaoQiBroker, ros::NodeHandle& pRosNode)
{
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getMethodHelp"), &ALRosALVisionRecognition::getMethodHelp, this));
  fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getModuleHelp"), &ALRosALVisionRecognition::getModuleHelp, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/getSubscribersInfo"), &ALRosALVisionRecognition::getSubscribersInfo, this));
  //fServices.push_back(pRosNode.advertiseService(std::string("NaoQi/ALVisionRecognition/setParam"), &ALRosALVisionRecognition::setParam, this));
}
// -- custom ros methods


bool ALRosALVisionRecognition::getMethodHelp(
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


bool ALRosALVisionRecognition::getModuleHelp(
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


//bool ALRosALVisionRecognition::getSubscribersInfo(
//  rosbridge::ALExtractorGetSubscribersInfo::Request  &req,
//  rosbridge::ALExtractorGetSubscribersInfo::Response &res)
//{

//  try {
//    res.value = fProxy->getSubscribersInfo();
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}


//bool ALRosALVisionRecognition::setParam(
//  rosbridge::ALVisionRecognitionSetParam::Request  &req,
//  rosbridge::ALVisionRecognitionSetParam::Response &res)
//{

//  try {
//    fProxy->setParam(req.paramName, req.paramValue);
//
//    return true;
//  } catch(const ALError&) {
//    return false;
//  }
//}

