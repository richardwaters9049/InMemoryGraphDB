cmake_minimum_required(VERSION 3.10)
project(InMemoryGraphDB)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the headers directory
include_directories(include)

# Define the executable and its source files
add_executable(InMemoryGraphDB src/main.cpp src/graph.cpp)
