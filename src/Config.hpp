#ifndef _MESSAGE_DRIVER_CONFIG_HPP_
#define _MESSAGE_DRIVER_CONFIG_HPP_

namespace message_driver
{

/**
* This configuration struct is a simple example of what you
* can do in order to wrap multiple configuration properties
* into a single object
* 
* This way you can manage configuration properties by grouping
* them into struct, and you don't have to change the orogen 
* components interface when your configuration object changes
*/
struct Config
{
	bool uppercase; 

	Config()
	    : uppercase(false)
	{
	}

};

}
#endif // _MESSAGE_DRIVER_CONFIG_HPP_
