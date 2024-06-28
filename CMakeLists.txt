cmake_minimum_required(VERSION 3.10)

project(
  pw-generator
  LANGUAGES C
  VERSION 1.0
)
set(SOURCES
  src/main.c  
  src/utils.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
