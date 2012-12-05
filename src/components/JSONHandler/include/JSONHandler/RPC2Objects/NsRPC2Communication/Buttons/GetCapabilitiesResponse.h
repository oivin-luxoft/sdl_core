#ifndef NSRPC2COMMUNICATION_BUTTONS_GETCAPABILITIESRESPONSE_INCLUDE
#define NSRPC2COMMUNICATION_BUTTONS_GETCAPABILITIESRESPONSE_INCLUDE

#include <vector>
#include "JSONHandler/RPC2Response.h"

#include "../include/JSONHandler/ALRPCObjects/V1/ButtonCapabilities.h"
#include "../include/JSONHandler/ALRPCObjects/V2/PresetBankCapabilities.h"

/*
  interface	NsRPC2Communication::Buttons
  version	1.2
  generated at	Tue Dec  4 16:38:13 2012
  source stamp	Tue Dec  4 16:37:04 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace Buttons
  {

    class GetCapabilitiesResponse : public ::NsRPC2Communication::RPC2Response
    {
    public:
    
      GetCapabilitiesResponse(const GetCapabilitiesResponse& c);
      GetCapabilitiesResponse(void);
    
      GetCapabilitiesResponse& operator =(const GetCapabilitiesResponse&);
    
      virtual ~GetCapabilitiesResponse(void);
    
      bool checkIntegrity(void);
    
// getters
      const std::vector< NsAppLinkRPC::ButtonCapabilities>& get_capabilities(void);

      const NsAppLinkRPCV2::PresetBankCapabilities* get_presetBankCapabilities(void);

// setters
/// 1 <= size <= 100
      bool set_capabilities(const std::vector< NsAppLinkRPC::ButtonCapabilities>& capabilities);

      bool set_presetBankCapabilities(const NsAppLinkRPCV2::PresetBankCapabilities& presetBankCapabilities);

      void reset_presetBankCapabilities(void);


    private:

      friend class GetCapabilitiesResponseMarshaller;

      std::vector< NsAppLinkRPC::ButtonCapabilities> capabilities;
      NsAppLinkRPCV2::PresetBankCapabilities* presetBankCapabilities;

    };
  }
}

#endif
