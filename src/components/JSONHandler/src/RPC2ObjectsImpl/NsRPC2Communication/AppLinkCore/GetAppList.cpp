#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/AppLinkCore/GetAppList.h"
#include "../src/../include/JSONHandler/RPC2Objects//Marshaller.h"

/*
  interface	NsRPC2Communication::AppLinkCore
  version	1.2
  generated at	Tue Dec  4 16:38:13 2012
  source stamp	Tue Dec  4 16:37:04 2012
  author	robok0der
*/

using namespace NsRPC2Communication::AppLinkCore;


GetAppList& GetAppList::operator =(const GetAppList& c)
{
  return *this;
}


GetAppList::~GetAppList(void)
{
}


GetAppList::GetAppList(void) : 
  RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_APPLINKCORE__GETAPPLIST)
{
}


GetAppList::GetAppList(const GetAppList& c) : RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_APPLINKCORE__GETAPPLIST,c.getId())
{
  *this=c;
}


bool GetAppList::checkIntegrity(void)
{
  return GetAppListMarshaller::checkIntegrity(*this);
}
