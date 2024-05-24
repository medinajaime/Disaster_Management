cmake_minimum_required(VERSION 3.27)
project(Disaster_Management)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Manually specify the path to the SQLite3 include directory and library
set(SQLITE3_INCLUDE_DIR "C:/sqlite")
set(SQLITE3_LIBRARY "C:/sqlite/sqlite3.dll")

# Include directories
include_directories(${SQLITE3_INCLUDE_DIR})
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
target_link_libraries(Disaster_Management ${SQLITE3_LIBRARY})
