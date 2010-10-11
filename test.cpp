/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#include <ros/ros.h>
#include <cstdlib>

//#include "srv_gen/cpp/include/rosbridge/Say.h"

#include <rosbridge/ALTextToSpeechSay.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ploufplouf");

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<rosbridge::ALTextToSpeechsay>("/NaoQi/ALTextToSpeech/say");
  rosbridge::ALTextToSpeechsay srv;
  //rosbridge::Say srv;
  std::cout << "bim0" << std::endl;
  srv.request.stringToSay = argv[1];
  if (client.call(srv))
  {
    std::cout << "bim" << std::endl;
    //ROS_INFO("Sum: %ld", (long int)srv.response.sum);
  }
  else
  {

    std::cout << "Failed to call service ALTextToSpeechsay" << std::endl;
    return 1;
  }

  return 0;
}

