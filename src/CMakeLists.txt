rock_library(message_driver
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(message_driver_bin Main.cpp
    DEPS message_driver)

