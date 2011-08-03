#ifndef _MESSAGE_DRIVER_MESSAGE_HPP_
#define _MESSAGE_DRIVER_MESSAGE_HPP_

#include <string.h>
#include <base/time.h>

namespace message_driver
{
    struct Message
    {
	// The message content 
	std::string content;

	// The timestamp when the message was created
	base::Time time;

	Message()
		: content()
		, time(base::Time::now())
	{
	}

	Message(const std::string& msg)
		: content(msg)
		, time(base::Time::now())
	{
	}
    };

}

#endif // _MESSAGE_MESSAGE_DRIVER_HPP_
