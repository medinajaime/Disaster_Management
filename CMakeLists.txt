cmake_minimum_required(VERSION 3.27)
project(Disaster_Management)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Disaster_Management
        CommunicationManager.cpp
        CommunicationManager.h
        DatabaseManager.cpp
        DatabaseManager.h
        DisasterScenario.cpp
        DisasterScenario.h
        main.cpp
        ResourceInventory.cpp
        ResourceInventory.h)
