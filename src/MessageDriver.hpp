#ifndef _MESSAGE_DRIVER_HPP_
#define _MESSAGE_DRIVER_HPP_

#include <message_driver/Message.hpp>
#include <message_driver/Config.hpp>

namespace message_driver {


class MessageDriver
{

public: 
        /**
	* MessageDriver configuration
	*/
        MessageDriver();

        /**
	* MessageDriver configuration
	* \param config Configuration object
	*/
	MessageDriver(const Config& config);

        /**
	* Create a timestamped message
	* \return A timestamped message
	*/
	Message createMessage();
	
	/**
	* Print a timestamped message to stdout
	* \param msg Message to be printed
	*/
	void printMessage(const Message& msg);

private: 
        Config mConfig;
        
};

}

#endif // _MESSAGE_DRIVER_HPP_
