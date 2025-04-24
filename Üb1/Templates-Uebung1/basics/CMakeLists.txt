cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(basics)

include_directories(
        ${CMAKE_SOURCE_DIR}/src
)

add_executable(basics
        src/functions.cpp
        src/functions.hpp
        src/main.cpp
        src/functions2.cpp
        src/functions2.h
)
