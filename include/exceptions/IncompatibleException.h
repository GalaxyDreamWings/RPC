/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_
#define _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eprosima
{
    namespace rpcdds
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when there is an error initializating an object.
             * @ingroup EXCEPTIONMODULE
             */
            class RPCDDS_DllAPI IncompatibleException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    IncompatibleException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    IncompatibleException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex IncompatibleException that will be copied.
                     */
                    IncompatibleException(const IncompatibleException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex IncompatibleException that will be moved.
                     */
                    IncompatibleException(IncompatibleException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex IncompatibleException that will be copied.
                     */
                    IncompatibleException& operator=(const IncompatibleException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex IncompatibleException that will be moved.
                     */
                    IncompatibleException& operator=(IncompatibleException&& ex);

                    /// \brief Default constructor
                    virtual ~IncompatibleException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const;
            };
        } // namespace exception
    } // namespace rpcdds
} // namespace eprosima
#endif // _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_
