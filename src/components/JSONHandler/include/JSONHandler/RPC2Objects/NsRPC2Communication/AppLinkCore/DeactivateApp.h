#ifndef NSRPC2COMMUNICATION_APPLINKCORE_DEACTIVATEAPP_INCLUDE
#define NSRPC2COMMUNICATION_APPLINKCORE_DEACTIVATEAPP_INCLUDE

#include <string>
#include "JSONHandler/RPC2Request.h"


/*
  interface	NsRPC2Communication::AppLinkCore
  version	1.2
  generated at	Tue Dec  4 16:38:13 2012
  source stamp	Tue Dec  4 16:37:04 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace AppLinkCore
  {

    class DeactivateApp : public ::NsRPC2Communication::RPC2Request
    {
    public:
    
      DeactivateApp(const DeactivateApp& c);
      DeactivateApp(void);
    
      DeactivateApp& operator =(const DeactivateApp&);
    
      virtual ~DeactivateApp(void);
    
      bool checkIntegrity(void);
    
// getters
      const std::string& get_appName(void);

      int get_appId(void);


// setters
/// appName <= 100
      bool set_appName(const std::string& appName);

      bool set_appId(int appId);


    private:

      friend class DeactivateAppMarshaller;

      std::string appName;
      int appId;

    };
  }
}

#endif
