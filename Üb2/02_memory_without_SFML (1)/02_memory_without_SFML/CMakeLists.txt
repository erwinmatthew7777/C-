cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(memory_without_SFML LANGUAGES CXX)

include_directories(
        ${CMAKE_SOURCE_DIR}/src
)

add_executable(memory_without_SFML
        src/main.cpp
        src/Colony.cpp
        src/Colony.hpp
        src/GameOfLife.cpp
        src/GameOfLife.hpp
)

# Fetch Catch2
Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.3.2
)
FetchContent_MakeAvailable(Catch2)

# Build Tests
enable_testing()
add_executable(tests
        src/Colony.cpp
        src/Colony.hpp
        src/Colony.test.cpp
        src/GameOfLife.cpp
        src/GameOfLife.hpp
        src/GameOfLife.test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
target_include_directories(tests PRIVATE src/)

# Register Tests
add_test(tests ./tests)
set_property(TEST tests PROPERTY ENVIRONMENT "CTEST_OUTPUT_ON_FAILURE=1")
