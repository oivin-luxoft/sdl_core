#ifndef NSAPPLINKRPCV2_INTERACTIONMODE_INCLUDE
#define NSAPPLINKRPCV2_INTERACTIONMODE_INCLUDE


/*
  interface	Ford Sync RAPI
  version	2.0O
  date		2012-11-02
  generated at	Tue Dec  4 17:03:13 2012
  source stamp	Tue Dec  4 14:21:32 2012
  author	robok0der
*/

namespace NsAppLinkRPCV2
{

/**
     For application-requested interactions, this mode indicates the method in which the user is notified and uses the interaction.
     This mode causes the interaction to only occur on the display, meaning the choices are provided only via the display.
     Selections are made with the OK and Seek Right and Left, Tune Up and Down buttons.
     This mode causes the interaction to only occur using V4.
     Selections are made by saying the command.
     This mode causes both a VR and display selection option for an interaction.
     Selections can be made either from the menu display or by speaking the command.
*/

  class InteractionMode
  {
  public:
    enum InteractionModeInternal
    {
      INVALID_ENUM=-1,
      MANUAL_ONLY=0,
      VR_ONLY=1,
      BOTH=2
    };
  
    InteractionMode() : mInternal(INVALID_ENUM)				{}
    InteractionMode(InteractionModeInternal e) : mInternal(e)		{}
  
    InteractionModeInternal get(void) const	{ return mInternal; }
    void set(InteractionModeInternal e)		{ mInternal=e; }
  
  private:
    InteractionModeInternal mInternal;
    friend class InteractionModeMarshaller;
  };
  
}

#endif
