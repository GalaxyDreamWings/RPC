/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_PROXYTRANSPORT_H_
#define _TRANSPORTS_DDS_PROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/dds/Transport.h"
#include "transports/ProxyTransport.h"
#include "transports/dds/components/ProxyProcedureEndpoint.h"
#include "utils/dds/Middleware.h"

#include <map>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class is the base of all classes that implement a transport
                 * using DDS. This transport could be used by the proxy.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI ProxyTransport : public eprosima::rpcdds::transport::ProxyTransport, Transport
                {
                    public:

                        /*!
                         * @brief Default destructor.
                         */
                        virtual ~ProxyTransport();

                        /*!
                         * @brief This function returns the type of the transport.
                         *        This function has to be implemented by the child classes.
                         */
                        const char* getType() const;

                        /*!
                         * @brief This function creates a new proxy procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. Cannot be NULL:
                         * @param copy_data Pointer to the function used to copy data when it is received.
                         * @return 0 value is returned if the function works successfully. In other case -1 is returned.
                         */
                        int createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Copy_data copy_data, int dataSize);

                        eprosima::rpcdds::ReturnMessage send(void *request, void* reply);

                        /*!
                         * 2brief This function returns the behaviour of the transport.
                         * @return The behaviour of the transport.
                         */
                        TransportBehaviour getBehaviour();

                    protected:

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        ProxyTransport(Transport::setTransport setter,
                                std::string &remoteServiceName, int domainId = 0, long milliseconds = 10000L);

                    private:

                        //TODO TEMPORAL
                        bool connect(){return true;}
                        bool send(const char* buffer){return true;}
                        char* receive(){return NULL;}

                        /*!
                         * @brief Map containing the proxy procedure endpoints that were created to communicate.
                         * The key of the map is the pointer where the name is allocated instead the name.
                         * Then always the same string in memory has to be used and not a copy.
                         */
                        std::map<const char*, ProxyProcedureEndpoint*> m_procedureEndpoints;

                        std::string m_remoteServiceName;

                        long m_timeout;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_PROXYTRANSPORT_H_

