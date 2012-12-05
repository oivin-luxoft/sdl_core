#ifndef NSRPC2COMMUNICATION_UI_SLIDER_INCLUDE
#define NSRPC2COMMUNICATION_UI_SLIDER_INCLUDE

#include <string>
#include <vector>
#include "JSONHandler/RPC2Request.h"


/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Tue Dec  4 16:38:13 2012
  source stamp	Tue Dec  4 16:37:04 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace UI
  {

    class Slider : public ::NsRPC2Communication::RPC2Request
    {
    public:
    
      Slider(const Slider& c);
      Slider(void);
    
      Slider& operator =(const Slider&);
    
      virtual ~Slider(void);
    
      bool checkIntegrity(void);
    
// getters
      unsigned int get_numTicks(void);

      unsigned int get_position(void);

      const std::string& get_sliderHeader(void);

      const std::vector< std::string>* get_sliderFooter(void);
      unsigned int get_timeout(void);


// setters
/// 2 <= numTicks <= 26
      bool set_numTicks(unsigned int numTicks);

/// 1 <= position <= 16
      bool set_position(unsigned int position);

/// sliderHeader <= 500
      bool set_sliderHeader(const std::string& sliderHeader);

/// sliderFooter[] <= 500 ; 1 <= size <= 26
      bool set_sliderFooter(const std::vector< std::string>& sliderFooter);

      void reset_sliderFooter(void);

/// timeout <= 65535
      bool set_timeout(unsigned int timeout);


    private:

      friend class SliderMarshaller;

      unsigned int numTicks;
      unsigned int position;
      std::string sliderHeader;
      std::vector< std::string>* sliderFooter;
      unsigned int timeout;

    };
  }
}

#endif
