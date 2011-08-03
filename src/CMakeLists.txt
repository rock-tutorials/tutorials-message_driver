rock_library(message_driver
    SOURCES MessageDriver.cpp
    HEADERS MessageDriver.hpp Message.hpp Config.hpp
    DEPS_PKGCONFIG base-types)


rock_executable(message_driver_bin Main.cpp
    DEPS message_driver)

