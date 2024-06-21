cmake_minimum_required(VERSION 3.0)
project(
  pw-generator
  VERSION 1.0
  LANGUAGES CXX
)
set(CMAKE_CXX_STANDAR 11)
set(CMAKE_CXX_STANDAR_REQUIRED ON)

set (SOURCE_FILES
  src/main.cpp
  src/utilities.cpp
)

add_executable(pw-generator ${SOURCE_FILES})
