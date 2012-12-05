#include "../include/JSONHandler/ALRPCObjects/V2/Alert_response.h"
#include "ResultMarshaller.h"

#include "Alert_responseMarshaller.h"


/*
  interface	Ford Sync RAPI
  version	2.0O
  date		2012-11-02
  generated at	Tue Dec  4 17:03:13 2012
  source stamp	Tue Dec  4 14:21:32 2012
  author	robok0der
*/

using namespace NsAppLinkRPCV2;


bool Alert_responseMarshaller::checkIntegrity(Alert_response& s)
{
  return checkIntegrityConst(s);
}


bool Alert_responseMarshaller::fromString(const std::string& s,Alert_response& e)
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


const std::string Alert_responseMarshaller::toString(const Alert_response& e)
{
  Json::FastWriter writer;
  return checkIntegrityConst(e) ? writer.write(toJSON(e)) : "";
}


bool Alert_responseMarshaller::checkIntegrityConst(const Alert_response& s)
{
  if(!ResultMarshaller::checkIntegrityConst(s.resultCode))  return false;
  if(s.info && s.info->length()>1000)  return false;
  if(s.tryAgainTime>2000000000)  return false;
  return true;
}

Json::Value Alert_responseMarshaller::toJSON(const Alert_response& e)
{
  Json::Value json(Json::objectValue);
  if(!checkIntegrityConst(e))
    return Json::Value(Json::nullValue);

  json["success"]=Json::Value(e.success);

  json["resultCode"]=ResultMarshaller::toJSON(e.resultCode);

  if(e.info)
    json["info"]=Json::Value(*e.info);

  json["tryAgainTime"]=Json::Value(e.tryAgainTime);

  return json;
}


bool Alert_responseMarshaller::fromJSON(const Json::Value& json,Alert_response& c)
{
  if(c.info)  delete c.info;
  c.info=0;

  try
  {
    if(!json.isObject())  return false;

    if(!json.isMember("success"))  return false;
    {
      const Json::Value& j=json["success"];
      if(!j.isBool())  return false;
      c.success=j.asBool();
    }
    if(!json.isMember("resultCode"))  return false;
    {
      const Json::Value& j=json["resultCode"];
      if(!ResultMarshaller::fromJSON(j,c.resultCode))
        return false;
    }
    if(json.isMember("info"))
    {
      const Json::Value& j=json["info"];
      if(!j.isString())  return false;
      c.info=new std::string(j.asString());
    }
    if(!json.isMember("tryAgainTime"))  return false;
    {
      const Json::Value& j=json["tryAgainTime"];
      if(!j.isInt())  return false;
      c.tryAgainTime=j.asInt();
    }

  }
  catch(...)
  {
    return false;
  }
  return checkIntegrity(c);
}

