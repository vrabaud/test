/*
* Generated for ALLeds, then edited by hand for dynamic type methods
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

//#include <rosbridge/ALLedsFadeListRGB.h>
//#include <rosbridge/ALLedsGetIntensity.h>
#include <rosbridge/ALModuleGetMethodHelp.h>
#include <rosbridge/ALModuleGetModuleHelp.h>

//TEST(ALLeds, fadeListRGB) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALLedsFadeListRGB>(std::string("NaoQi/ALLeds/fadeListRGB"));
//  rosbridge::ALLedsFadeListRGB msg;
  //msg.request.name = ;
  //msg.request.rgbList = ;
  //msg.request.timeList = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

//TEST(ALLeds, getIntensity) {
//  ros::NodeHandle n;
//  ros::ServiceClient client = n.serviceClient<rosbridge::ALLedsGetIntensity>(std::string("NaoQi/ALLeds/getIntensity"));
//  rosbridge::ALLedsGetIntensity msg;
  //msg.request.name = ;

//  bool result = client.call(msg);
//  ASSERT_EQ(result, true);
//}

TEST(ALLeds, getMethodHelp) {
  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<rosbridge::ALModuleGetMethodHelp>(std::string("NaoQi/ALLeds/getMethodHelp"));
  rosbridge::ALModuleGetMethodHelp msg;
  msg.request.methodName = "fade";
  bool result = client.call(msg);
  ASSERT_EQ(result, true);
}

TEST(ALLeds, getModuleHelp) {
  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<rosbridge::ALModuleGetModuleHelp>(std::string("NaoQi/ALLeds/getModuleHelp"));
  rosbridge::ALModuleGetModuleHelp msg;
  bool result = client.call(msg);
  ASSERT_EQ(result, true);
}


