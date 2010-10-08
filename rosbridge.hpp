/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#ifndef   	ROSBRIDGE_H_
# define   	ROSBRIDGE_H_

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

  /**
   * dataChanged. Called by stm when subcription has been modified.
   * @param pDataName, name of the suscribed data
   * @param pValue, value of the suscribed data
   * @param pMessage, message write by user during suscription
   */
  void dataChanged(const std::string& pDataName, const AL::ALValue& pValue, const std::string& pMessage);

  /** ros main
    * @internal
    */
  void main();

};

#endif 	    /* !ROSBRIDGE_H_ */
