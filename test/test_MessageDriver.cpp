#include <boost/test/unit_test.hpp>
#include <message_driver/MessageDriver.hpp>

using namespace message_driver;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_message_is_created)
{
    message_driver::MessageDriver messageDriver;

    Message message = messageDriver.createMessage();

    messageDriver.printMessage(message);
}
