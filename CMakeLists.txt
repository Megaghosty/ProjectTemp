cmake_minimum_required(VERSION 3.10)
project(TemperatureSensor)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

if(NOT WIRINGPI_LIBRARIES)
    message(FATAL_ERROR "WiringPi library not found")
endif()

add_executable(temperature_program 
    main.cpp 
    MCP9808.cpp
)

target_include_directories(temperature_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(temperature_program ${WIRINGPI_LIBRARIES})