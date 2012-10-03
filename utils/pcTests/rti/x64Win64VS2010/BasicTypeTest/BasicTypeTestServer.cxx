/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "BasicTypeTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "BasicTypeTestRequestReplyPlugin.h"

#include "BasicTypeTestServerRPCSupport.h"

BasicTypeTestServerH::BasicTypeTestServerH(eProsima::DDSRPC::ServerStrategy *strategy,
    eProsima::DDSRPC::Transport *transport, int domainId) :
    Server(strategy, transport, domainId)
{
    _impl = new BasicTypeTestServerImpl();
    
    this->setRPC(new getOctetServerRPC("getOctet", this,
                getOctetRequestUtils::registerType(getParticipant()),
                getOctetReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getOctet, getParticipant()));
    this->setRPC(new getCharServerRPC("getChar", this,
                getCharRequestUtils::registerType(getParticipant()),
                getCharReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getChar, getParticipant()));
    this->setRPC(new getWCharServerRPC("getWChar", this,
                getWCharRequestUtils::registerType(getParticipant()),
                getWCharReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getWChar, getParticipant()));
    this->setRPC(new getShortServerRPC("getShort", this,
                getShortRequestUtils::registerType(getParticipant()),
                getShortReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getShort, getParticipant()));
    this->setRPC(new getUShortServerRPC("getUShort", this,
                getUShortRequestUtils::registerType(getParticipant()),
                getUShortReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getUShort, getParticipant()));
    this->setRPC(new getLongServerRPC("getLong", this,
                getLongRequestUtils::registerType(getParticipant()),
                getLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getLong, getParticipant()));
    this->setRPC(new getULongServerRPC("getULong", this,
                getULongRequestUtils::registerType(getParticipant()),
                getULongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getULong, getParticipant()));
    this->setRPC(new getLLongServerRPC("getLLong", this,
                getLLongRequestUtils::registerType(getParticipant()),
                getLLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getLLong, getParticipant()));
    this->setRPC(new getULLongServerRPC("getULLong", this,
                getULLongRequestUtils::registerType(getParticipant()),
                getULLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getULLong, getParticipant()));
    this->setRPC(new getFloatServerRPC("getFloat", this,
                getFloatRequestUtils::registerType(getParticipant()),
                getFloatReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getFloat, getParticipant()));
    this->setRPC(new getDoubleServerRPC("getDouble", this,
                getDoubleRequestUtils::registerType(getParticipant()),
                getDoubleReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getDouble, getParticipant()));
    this->setRPC(new getBooleanServerRPC("getBoolean", this,
                getBooleanRequestUtils::registerType(getParticipant()),
                getBooleanReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServerH::getBoolean, getParticipant()));

}
BasicTypeTestServerH::~BasicTypeTestServerH()
{
    delete _impl;    
}

void BasicTypeTestServerH::getOctet(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Octet  oc1 = 0;    
    DDS_Octet  oc2 = 0;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctet_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getOctetReply *replyData = NULL;

    getOctetRequestUtils::extractTypeData((getOctetRequest*)requestData, oc1  , oc2  );

returnedValue = srv->_impl->getOctet(oc1  , oc2  , oc3  , getOctet_ret  );

    replyData = getOctetReplyUtils::createTypeData(oc2  , oc3  , getOctet_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getOctetReplyTypeSupport::delete_data(replyData);
    
    getOctetRequestTypeSupport::delete_data((getOctetRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Char  ch1 = 0;    
    DDS_Char  ch2 = 0;    
    DDS_Char  ch3 = 0;    
    DDS_Char  getChar_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getCharReply *replyData = NULL;

    getCharRequestUtils::extractTypeData((getCharRequest*)requestData, ch1  , ch2  );

returnedValue = srv->_impl->getChar(ch1  , ch2  , ch3  , getChar_ret  );

    replyData = getCharReplyUtils::createTypeData(ch2  , ch3  , getChar_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getCharReplyTypeSupport::delete_data(replyData);
    
    getCharRequestTypeSupport::delete_data((getCharRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getWChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Wchar  wch1 = 0;    
    DDS_Wchar  wch2 = 0;    
    DDS_Wchar  wch3 = 0;    
    DDS_Wchar  getWChar_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getWCharReply *replyData = NULL;

    getWCharRequestUtils::extractTypeData((getWCharRequest*)requestData, wch1  , wch2  );

returnedValue = srv->_impl->getWChar(wch1  , wch2  , wch3  , getWChar_ret  );

    replyData = getWCharReplyUtils::createTypeData(wch2  , wch3  , getWChar_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getWCharReplyTypeSupport::delete_data(replyData);
    
    getWCharRequestTypeSupport::delete_data((getWCharRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Short  sh1 = 0;    
    DDS_Short  sh2 = 0;    
    DDS_Short  sh3 = 0;    
    DDS_Short  getShort_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getShortReply *replyData = NULL;

    getShortRequestUtils::extractTypeData((getShortRequest*)requestData, sh1  , sh2  );

returnedValue = srv->_impl->getShort(sh1  , sh2  , sh3  , getShort_ret  );

    replyData = getShortReplyUtils::createTypeData(sh2  , sh3  , getShort_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getShortReplyTypeSupport::delete_data(replyData);
    
    getShortRequestTypeSupport::delete_data((getShortRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getUShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_UnsignedShort  ush1 = 0;    
    DDS_UnsignedShort  ush2 = 0;    
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShort_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getUShortReply *replyData = NULL;

    getUShortRequestUtils::extractTypeData((getUShortRequest*)requestData, ush1  , ush2  );

returnedValue = srv->_impl->getUShort(ush1  , ush2  , ush3  , getUShort_ret  );

    replyData = getUShortReplyUtils::createTypeData(ush2  , ush3  , getUShort_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getUShortReplyTypeSupport::delete_data(replyData);
    
    getUShortRequestTypeSupport::delete_data((getUShortRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Long  lo1 = 0;    
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getLongReply *replyData = NULL;

    getLongRequestUtils::extractTypeData((getLongRequest*)requestData, lo1  , lo2  );

returnedValue = srv->_impl->getLong(lo1  , lo2  , lo3  , getLong_ret  );

    replyData = getLongReplyUtils::createTypeData(lo2  , lo3  , getLong_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getLongReplyTypeSupport::delete_data(replyData);
    
    getLongRequestTypeSupport::delete_data((getLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getULong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_UnsignedLong  ulo1 = 0;    
    DDS_UnsignedLong  ulo2 = 0;    
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULong_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getULongReply *replyData = NULL;

    getULongRequestUtils::extractTypeData((getULongRequest*)requestData, ulo1  , ulo2  );

returnedValue = srv->_impl->getULong(ulo1  , ulo2  , ulo3  , getULong_ret  );

    replyData = getULongReplyUtils::createTypeData(ulo2  , ulo3  , getULong_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getULongReplyTypeSupport::delete_data(replyData);
    
    getULongRequestTypeSupport::delete_data((getULongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getLLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_LongLong  llo1 = 0;    
    DDS_LongLong  llo2 = 0;    
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLong_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getLLongReply *replyData = NULL;

    getLLongRequestUtils::extractTypeData((getLLongRequest*)requestData, llo1  , llo2  );

returnedValue = srv->_impl->getLLong(llo1  , llo2  , llo3  , getLLong_ret  );

    replyData = getLLongReplyUtils::createTypeData(llo2  , llo3  , getLLong_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getLLongReplyTypeSupport::delete_data(replyData);
    
    getLLongRequestTypeSupport::delete_data((getLLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getULLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_UnsignedLongLong  ullo1 = 0;    
    DDS_UnsignedLongLong  ullo2 = 0;    
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLong_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getULLongReply *replyData = NULL;

    getULLongRequestUtils::extractTypeData((getULLongRequest*)requestData, ullo1  , ullo2  );

returnedValue = srv->_impl->getULLong(ullo1  , ullo2  , ullo3  , getULLong_ret  );

    replyData = getULLongReplyUtils::createTypeData(ullo2  , ullo3  , getULLong_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getULLongReplyTypeSupport::delete_data(replyData);
    
    getULLongRequestTypeSupport::delete_data((getULLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getFloat(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Float  fl1 = 0;    
    DDS_Float  fl2 = 0;    
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloat_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getFloatReply *replyData = NULL;

    getFloatRequestUtils::extractTypeData((getFloatRequest*)requestData, fl1  , fl2  );

returnedValue = srv->_impl->getFloat(fl1  , fl2  , fl3  , getFloat_ret  );

    replyData = getFloatReplyUtils::createTypeData(fl2  , fl3  , getFloat_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getFloatReplyTypeSupport::delete_data(replyData);
    
    getFloatRequestTypeSupport::delete_data((getFloatRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getDouble(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Double  do1 = 0;    
    DDS_Double  do2 = 0;    
    DDS_Double  do3 = 0;    
    DDS_Double  getDouble_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getDoubleReply *replyData = NULL;

    getDoubleRequestUtils::extractTypeData((getDoubleRequest*)requestData, do1  , do2  );

returnedValue = srv->_impl->getDouble(do1  , do2  , do3  , getDouble_ret  );

    replyData = getDoubleReplyUtils::createTypeData(do2  , do3  , getDouble_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getDoubleReplyTypeSupport::delete_data(replyData);
    
    getDoubleRequestTypeSupport::delete_data((getDoubleRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServerH::getBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServerH *srv = dynamic_cast<BasicTypeTestServerH*>(server);
    DDS_Boolean  bo1 = RTI_FALSE;    
    DDS_Boolean  bo2 = RTI_FALSE;    
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBoolean_ret = RTI_FALSE;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getBooleanReply *replyData = NULL;

    getBooleanRequestUtils::extractTypeData((getBooleanRequest*)requestData, bo1  , bo2  );

returnedValue = srv->_impl->getBoolean(bo1  , bo2  , bo3  , getBoolean_ret  );

    replyData = getBooleanReplyUtils::createTypeData(bo2  , bo3  , getBoolean_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getBooleanReplyTypeSupport::delete_data(replyData);
    
    getBooleanRequestTypeSupport::delete_data((getBooleanRequest*)requestData);
    
        
        
        
}

BasicTypeTestServer::BasicTypeTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    int domainId) :
    BasicTypeTestServerH(strategy, new eProsima::DDSRPC::UDPTransport(), domainId)
{
}
BasicTypeTestServer::~BasicTypeTestServer()
{   
}

BasicTypeTestWANServer::BasicTypeTestWANServer(eProsima::DDSRPC::ServerStrategy *strategy,
    const char *public_address, const char *server_bind_port,
    int domainId) :
    BasicTypeTestServerH(strategy, new eProsima::DDSRPC::TCPTransport(public_address, server_bind_port), domainId)
{
}
BasicTypeTestWANServer::~BasicTypeTestWANServer()
{   
}