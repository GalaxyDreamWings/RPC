/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorCDRProtocol.h
 * This header file contains the declaration of the protocol used to create CDR messages.
 *
 * This file was generated by the tool fastrpcgen.
 */

#ifndef _Calculator_CDR_PROTOCOL_H_
#define _Calculator_CDR_PROTOCOL_H_

#include "CalculatorProtocol.h"
#include "fastcdr/FastCdr.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class ServerTransport;
        }
        
        namespace protocol
        {
            namespace fastcdr
            {



                
                /*!
                 * @brief
                 * @ingroup CALCULATOR
                 */
                class FASTRPCUSERDllExport CalculatorProtocol : public eprosima::rpc::protocol::CalculatorProtocol
                {
                    public:
                    
                        CalculatorProtocol();
                        
                        virtual ~CalculatorProtocol();
                    
                        virtual bool setTransport(eprosima::rpc::transport::Transport &transport);
                        
                        bool activateInterface(const char* interfaceName);
                        
                        static size_t worker(Protocol& protocol, void *&buffer, size_t &bufferLength, size_t &bufferSize, eprosima::rpc::transport::Endpoint *endpoint);
                        


                                                                        int32_t Calculator_addition(/*in*/ int32_t value1, /*in*/ int32_t value2);
                                                                        
                                                                        

                                                                        int32_t Calculator_subtraction(/*in*/ int32_t value1, /*in*/ int32_t value2);
                                                                        
                                                                        
                                                
                        
                    private:
                    
                        eprosima::fastcdr::FastBuffer serializeBuffer;
                        eprosima::fastcdr::FastCdr scdr;
                };
            } // namespace fastcdr
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _Calculator_CDR_PROTOCOL_H_