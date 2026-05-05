cmake_minimum_required(VERSION 4.0)
project(KursProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(KursProject
        IoTDevice.h
        main.cpp
        HUB2.cpp
        HUB2.h
        AirSensor.cpp
        AirSensor.h
        AirSensor.h
        AirSensor.h
        AirSensor.cpp
        Power_Grid.cpp
        Power_Grid.h)
