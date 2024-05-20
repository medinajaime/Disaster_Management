cmake_minimum_required(VERSION 3.27)
project(Disaster_Management)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SQLite3 package
find_package(SQLite3 REQUIRED)

# Include directories
include_directories(${SQLite3_INCLUDE_DIRS})
include_directories(include)

# Source files
set(SOURCES
        src/CommunicationManager.cpp
        src/DatabaseManager.cpp
        src/DisasterScenario.cpp
        src/ResourceInventory.cpp
        main.cpp
        include/DatabaseManager.h
        include/CommunicationManager.h
        include/DisasterScenario.h
        include/ResourceInventory.h
)

# Add executable
add_executable(Disaster_Management ${SOURCES})

# Link libraries
target_link_libraries(Disaster_Management ${SQLite3_LIBRARIES})
