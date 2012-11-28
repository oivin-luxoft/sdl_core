#ifndef ISESSIONOBSERVER_CLASS
#define ISESSIONOBSERVER_CLASS

namespace NsProtocolHandler
{
    class ISessionObserver
    {
    public:
        virtual void onSessionStartedCallback(NsAppLink::NsTransportManager::tConnectionHandle connectionHandle, 
                                               unsigned char sessionId) = 0;
        virtual void onSessionEndedCallback(NsAppLink::NsTransportManager::tConnectionHandle connectionHandle, 
                                               unsigned char sessionId) = 0;
        virtual int keyFromPair(NsAppLink::NsTransportManager::tConnectionHandle connectionHandle, 
                                               unsigned char sessionId) = 0;
        virtual void pairFromKey(int key, NsAppLink::NsTransportManager::tConnectionHandle & connectionHandle, 
                                               unsigned char & sessionId) = 0;
    protected:
        virtual ~ISessionObserver() {};
    };
}

#endif  //  ISESSIONOBSERVER_CLASS