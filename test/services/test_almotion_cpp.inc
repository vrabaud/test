/*
* Generated for ALMotion, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

//#include <rosbridge/ALMotionAngleInterpolation.h>
//#include <rosbridge/ALMotionAngleInterpolationBezier.h>
//#include <rosbridge/ALMotionAngleInterpolationWithSpeed.h>
//#include <rosbridge/ALMotionChangeAngles.h>
//#include <rosbridge/ALMotionGetAngles.h>
//#include <rosbridge/ALMotionGetLimits.h>
//#include <rosbridge/ALModuleGetMethodHelp.h>
//#include <rosbridge/ALModuleGetModuleHelp.h>
//#include <rosbridge/ALMotionGetRobotConfig.h>
//#include <rosbridge/ALMotionGetStiffnesses.h>
//#include <rosbridge/ALMotionGetTaskList.h>
//#include <rosbridge/ALMotionGetWalkArmsEnable.h>
//#include <rosbridge/ALMotionPositionInterpolation.h>
//#include <rosbridge/ALMotionSetAngles.h>
//#include <rosbridge/ALMotionSetMotionConfig.h>
//#include <rosbridge/ALMotionSetStiffnesses.h>
//#include <rosbridge/ALMotionStiffnessInterpolation.h>
//#include <rosbridge/ALMotionTransformInterpolation.h>
//#include <rosbridge/ALMotionWbSetEffectorControl.h>

//TEST(ALMotion, angleInterpolation) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionAngleInterpolation>(std::string("NaoQi/ALMotion/angleInterpolation"));
//  rosbridge::ALMotionAngleInterpolation msg;
  //msg.request.names = ;
  //msg.request.angleLists = ;
  //msg.request.timeLists = ;
  //msg.request.isAbsolute = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, angleInterpolationBezier) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionAngleInterpolationBezier>(std::string("NaoQi/ALMotion/angleInterpolationBezier"));
//  rosbridge::ALMotionAngleInterpolationBezier msg;
  //msg.request.jointNames = ;
  //msg.request.times = ;
  //msg.request.controlPoints = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, angleInterpolationWithSpeed) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionAngleInterpolationWithSpeed>(std::string("NaoQi/ALMotion/angleInterpolationWithSpeed"));
//  rosbridge::ALMotionAngleInterpolationWithSpeed msg;
  //msg.request.names = ;
  //msg.request.targetAngles = ;
  //msg.request.maxSpeedFraction = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, changeAngles) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionChangeAngles>(std::string("NaoQi/ALMotion/changeAngles"));
//  rosbridge::ALMotionChangeAngles msg;
  //msg.request.names = ;
  //msg.request.changes = ;
  //msg.request.fractionMaxSpeed = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getAngles) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetAngles>(std::string("NaoQi/ALMotion/getAngles"));
//  rosbridge::ALMotionGetAngles msg;
  //msg.request.names = ;
  //msg.request.useSensors = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getLimits) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetLimits>(std::string("NaoQi/ALMotion/getLimits"));
//  rosbridge::ALMotionGetLimits msg;
  //msg.request.name = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getMethodHelp) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALModuleGetMethodHelp>(std::string("NaoQi/ALMotion/getMethodHelp"));
//  rosbridge::ALModuleGetMethodHelp msg;
  //msg.request.methodName = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getModuleHelp) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALModuleGetModuleHelp>(std::string("NaoQi/ALMotion/getModuleHelp"));
//  rosbridge::ALModuleGetModuleHelp msg;


//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getRobotConfig) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetRobotConfig>(std::string("NaoQi/ALMotion/getRobotConfig"));
//  rosbridge::ALMotionGetRobotConfig msg;


//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getStiffnesses) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetStiffnesses>(std::string("NaoQi/ALMotion/getStiffnesses"));
//  rosbridge::ALMotionGetStiffnesses msg;
  //msg.request.jointName = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getTaskList) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetTaskList>(std::string("NaoQi/ALMotion/getTaskList"));
//  rosbridge::ALMotionGetTaskList msg;


//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, getWalkArmsEnable) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionGetWalkArmsEnable>(std::string("NaoQi/ALMotion/getWalkArmsEnable"));
//  rosbridge::ALMotionGetWalkArmsEnable msg;


//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, positionInterpolation) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionPositionInterpolation>(std::string("NaoQi/ALMotion/positionInterpolation"));
//  rosbridge::ALMotionPositionInterpolation msg;
  //msg.request.chainName = ;
  //msg.request.space = ;
  //msg.request.path = ;
  //msg.request.axisMask = ;
  //msg.request.durations = ;
  //msg.request.isAbsolute = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, setAngles) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionSetAngles>(std::string("NaoQi/ALMotion/setAngles"));
//  rosbridge::ALMotionSetAngles msg;
  //msg.request.names = ;
  //msg.request.angles = ;
  //msg.request.fractionMaxSpeed = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, setMotionConfig) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionSetMotionConfig>(std::string("NaoQi/ALMotion/setMotionConfig"));
//  rosbridge::ALMotionSetMotionConfig msg;
  //msg.request.config = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, setStiffnesses) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionSetStiffnesses>(std::string("NaoQi/ALMotion/setStiffnesses"));
//  rosbridge::ALMotionSetStiffnesses msg;
  //msg.request.names = ;
  //msg.request.stiffnesses = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, stiffnessInterpolation) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionStiffnessInterpolation>(std::string("NaoQi/ALMotion/stiffnessInterpolation"));
//  rosbridge::ALMotionStiffnessInterpolation msg;
  //msg.request.names = ;
  //msg.request.stiffnessLists = ;
  //msg.request.timeLists = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, transformInterpolation) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionTransformInterpolation>(std::string("NaoQi/ALMotion/transformInterpolation"));
//  rosbridge::ALMotionTransformInterpolation msg;
  //msg.request.chainName = ;
  //msg.request.space = ;
  //msg.request.path = ;
  //msg.request.axisMask = ;
  //msg.request.duration = ;
  //msg.request.isAbsolute = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALMotion, wbSetEffectorControl) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALMotionWbSetEffectorControl>(std::string("NaoQi/ALMotion/wbSetEffectorControl"));
//  rosbridge::ALMotionWbSetEffectorControl msg;
  //msg.request.effectorName = ;
  //msg.request.targetCoordinate = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}


