#include "MessageDriver.hpp"
#include <iostream>
#include <algorithm>

namespace message_driver
{

Message MessageDriver::createMessage()
{
	Message msg("Message from MessageDriver");

	if(mConfig.uppercase)
	    std::transform(msg.content.begin(), msg.content.end(), msg.content.begin(), toupper);

	return msg;
}

void MessageDriver::printMessage(const Message& msg)
{
	std::cout << "[" << msg.time.toString() << "] " << msg.content << std::endl;
}

MessageDriver::MessageDriver()
	: mConfig()
{

}

MessageDriver::MessageDriver(const Config& config)
	: mConfig(config)
{
}


}
