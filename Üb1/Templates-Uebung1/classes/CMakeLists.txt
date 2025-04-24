cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(classes)

include_directories(
        ${CMAKE_SOURCE_DIR}/src
)

add_executable(classes
        src/CharGenerator.cpp
        src/CharGenerator.hpp
        src/PatternPrinter.cpp
        src/PatternPrinter.hpp
        src/main.cpp
)
