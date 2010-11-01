/*
*
* Copyright (C) 2010 Aldebaran Robotics
*
*/

#include <alvalue/alvalue.h>
#include <rosbridge/ALModuleGetMethodHelp.h>
#include <rosbridge/ALModuleGetModuleHelp.h>


/// Does common work for the ALModule method getMethodHelp
/// @param data The ALValue result of the call to getMethodHelp
/// @oaram res The output getMethodHelp object 
static void ALRosMethodHelpHelper(const AL::ALValue& data, rosbridge::ALModuleGetMethodHelp::Response& res) {
  // Example of the underlying data:
  //
  //    ["getJointNames", "Gets the names of all the joints in the collection.",
  //    ["name", "Name of a chain or 'Body'"],
  //    "names", "Vector of strings, one for each joint in the collection"]
  //
  //    ["angleInterpolation", "Interpolates one or multiple joints to a target angle or along timed trajectories.",
  //    ["names", "Name or names of joints or chains or "Body"",
  //     "angleLists", "An angle, list of angles or list of list of angles in radians",
  //     "timeLists", "A time, list of times or list of list of times in seconds",
  //     "isAbsolute", "If true, the movement is described in absolute angles, else the angles are relative to the current angle."],
  //     "methodUsage", "A string that summarises the usage of the method."]

 if (data.isValid() && data.isArray()) {
    if (data.getSize() > 1 ) {
      res.methodName = (std::string) data[0];
      res.methodDescription = (std::string) data[1];

      // unfortunately, these are bundled as param, desc, param, desc ...
      if (data.getSize() > 2 && data[2].isValid() && data[2].isArray()) {
        for (unsigned int i=0; i < data[2].getSize()/2; i++) {
          res.paramsAndDescriptions.push_back( (std::string)data[2][i*2]);
          res.paramsAndDescriptions.push_back( (std::string)data[2][(i*2)+1]);
        }
      }
      // unfortunately, a nasty hack for a clean void return type
      if (data.getSize()==5) {
        if ((std::string)data[3] != "methodUsage") {
          res.returnName = (std::string)data[3];
          res.returnDescription = (std::string)data[4];
        } else {
          res.returnDescription = "void";
        }
      }
    }
  }
}

/// Does common work for the ALModule method getModuleHelp
/// @param data The ALValue response from the module
/// @param res The output response object to be filled
static void ALRosModuleHelpHelper(const AL::ALValue& data, rosbridge::ALModuleGetModuleHelp::Response &res) {
  // Example of the underlying data:
  //
  //  ["ALMotion provides methods that help make Nao move. It contains commands for manipulating joint angles, joint stiffness, and a higher level API for controling walks.",
  //  [
  //      ["python", "import naoqi
  //  from naoqi import ALProxy
  //  # configure the IP of your robot
  //  IP = "127.0.0.1"
  //  PORT = 9559
  //  # create a proxy to ALMotion
  //  proxy = ALProxy("ALMotion", IP, PORT)
  //  # print the current state
  //  print proxy.getSummary()
  //  # see method examples for possible calls
  //  "]
  //   ]
  //   ]
  if (data.isValid() && data.isArray() && data.getSize() > 0) {
    res.moduleDescription = (std::string)data[0];
    // ignore the examples, they are unlikely to be useful to ROS users.
  }
}

