# CMake generated Testfile for 
# Source directory: D:/Desktop/Uni/SoSe2025/C++/Üb2/02_memory (1)/02_memory
# Build directory: D:/Desktop/Uni/SoSe2025/C++/Üb2/02_memory (1)/02_memory/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[tests]=] "./tests")
set_tests_properties([=[tests]=] PROPERTIES  ENVIRONMENT "CTEST_OUTPUT_ON_FAILURE=1" _BACKTRACE_TRIPLES "D:/Desktop/Uni/SoSe2025/C++/Üb2/02_memory (1)/02_memory/CMakeLists.txt;65;add_test;D:/Desktop/Uni/SoSe2025/C++/Üb2/02_memory (1)/02_memory/CMakeLists.txt;0;")
subdirs("_deps/sfml-build")
subdirs("_deps/catch2-build")
