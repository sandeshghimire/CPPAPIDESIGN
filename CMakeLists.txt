cmake_minimum_required(VERSION 3.6)
project(CPPAPIDESIGN)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)
add_executable(CPPAPIDESIGN ${SOURCE_FILES})