#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/AppLinkCore/DeactivateAppResponse.h"
#include "../src/ALRPCObjectsImpl/V1/ResultMarshaller.h"
#include "../src/../src/RPC2ObjectsImpl//NsRPC2Communication/AppLinkCore/DeactivateAppResponseMarshaller.h"

/*
  interface	NsRPC2Communication::AppLinkCore
  version	1.2
  generated at	Tue Dec  4 16:38:13 2012
  source stamp	Tue Dec  4 16:37:04 2012
  author	robok0der
*/

using namespace NsRPC2Communication::AppLinkCore;

bool DeactivateAppResponseMarshaller::checkIntegrity(DeactivateAppResponse& s)
{
  return checkIntegrityConst(s);
}


bool DeactivateAppResponseMarshaller::fromString(const std::string& s,DeactivateAppResponse& e)
{
  try
  {
    Json::Reader reader;
    Json::Value json;
    if(!reader.parse(s,json,false))  return false;
    if(!fromJSON(json,e))  return false;
  }
  catch(...)
  {
    return false;
  }
  return true;
}


const std::string DeactivateAppResponseMarshaller::toString(const DeactivateAppResponse& e)
{
  Json::FastWriter writer;
  return checkIntegrityConst(e) ? writer.write(toJSON(e)) : "";
}


bool DeactivateAppResponseMarshaller::checkIntegrityConst(const DeactivateAppResponse& s)
{
  return true;
}


Json::Value DeactivateAppResponseMarshaller::toJSON(const DeactivateAppResponse& e)
{
  Json::Value json(Json::objectValue);
  if(!checkIntegrityConst(e))
    return Json::Value(Json::nullValue);

  json["jsonrpc"]=Json::Value("2.0");
  json["id"]=Json::Value(e.getId());
  json["result"]=Json::Value(Json::objectValue);
  NsAppLinkRPC::Result r(static_cast<NsAppLinkRPC::Result::ResultInternal>(e.getResult()));
  json["result"]["resultCode"]=NsAppLinkRPC::ResultMarshaller::toJSON(r);
  json["result"]["method"]=Json::Value("AppLinkCore.DeactivateAppResponse");

  return json;
}


bool DeactivateAppResponseMarshaller::fromJSON(const Json::Value& json,DeactivateAppResponse& c)
{
  try
  {
    if(!json.isObject())  return false;
    if(!json.isMember("jsonrpc") || !json["jsonrpc"].isString() || json["jsonrpc"].asString().compare("2.0"))  return false;
    if(!json.isMember("id") || !json["id"].isInt()) return false;
    c.setId(json["id"].asInt());

    if(!json.isMember("result")) return false;

    Json::Value js=json["result"];
    if(!js.isObject())  return false;

    NsAppLinkRPC::Result r;
    if(!js.isMember("resultCode") || !js["resultCode"].isString())  return false;
    if(!js.isMember("method") || !js["method"].isString())  return false;
    if(js["method"].asString().compare("AppLinkCore.DeactivateAppResponse")) return false;

    if(!NsAppLinkRPC::ResultMarshaller::fromJSON(js["resultCode"],r))  return false;
    c.setResult(r.get());
  }
  catch(...)
  {
    return false;
  }
  return checkIntegrity(c);
}
