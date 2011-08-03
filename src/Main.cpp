#include <message_driver/MessageDriver.hpp>

int main()
{
	using namespace message_driver;
	MessageDriver messageDriver;

	Message message = messageDriver.createMessage();
	
	Config config;
	config.uppercase = true;
	MessageDriver messageUppercaseDriver(config);
	Message uppercaseMessage = messageUppercaseDriver.createMessage();
	
	messageDriver.printMessage(message);
	messageDriver.printMessage(uppercaseMessage);

	return 0;
}
