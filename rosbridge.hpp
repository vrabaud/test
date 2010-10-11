/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#ifndef   	ROSBRIDGE_ROSBRIDGE_HPP_
# define   	ROSBRIDGE_ROSBRIDGE_HPP_

# include <alcore/alptr.h>
# include <alcommon/almodule.h>

class RosBridge : public AL::ALModule
{
public:
  RosBridge(AL::ALPtr<AL::ALBroker> pBroker);
  virtual ~RosBridge();

  /**
   * initialise the ros bridge
   */
  virtual void init(void);

  /**
   * version
   * @return string containing the version
   */
  std::string version();

  /** ros main
    * @internal
    */
  void main();

};

#endif 	    /* ROSBRIDGE_ROSBRIDGE_HPP_ */
