C++ Practikum Repository

This repository contains the code, exercises, and progress tracking for the C++ Praktikum course. It covers foundational C++ concepts, object‑oriented programming, file I/O, operator overloading, and more, all implemented and tested in CLion using CMake.

Table of Contents

Course Overview

Repository Structure

Building the Project

Exercise Modules

Exercise 1: C/C++ Basics

Exercise 2: Functions and Structuring

Exercise 3: Classes and Composition

Exercise 4: Operator Overloading

Running Tests

Contributing

License

Course Overview

In this C++ Praktikum, we learn to:

Set up and navigate a CMake‑based project in CLion.

Write basic C++ programs (Hello World, data type sizes).

Design functions and organize code into headers and sources.

Use enums, namespaces, and static variables.

Implement text‑based user I/O and validation.

Build classes with constructors, initialization lists, and default parameters.

Compose classes (e.g., CharGenerator, PatternPrinter).

Perform file input/output (writeToFile, readFromFile).

Implement operator overloading for custom types (e.g., Vector3).

Through step‑by‑step exercises, we solidify core C++ syntax, best practices, and debugging techniques.

Repository Structure

├── CMakeLists.txt           # Top‑level CMake configuration
├── src/                     # Source code for all exercises
│   ├── Exercise1/           # Task 1: Hello World, data type sizes
│   ├── Exercise2/           # Task 2: Functions, patterns, enums, namespaces
│   ├── Exercise3/           # Task 3: Classes (CharGenerator, PatternPrinter)
│   └── Exercise4/           # Task 4: Operator overloading (Vector3)
├── tests/                   # Catch2 unit tests for each module
├── docs/                    # Doxygen or summary documents
├── scripts/                 # Helper scripts (e.g., to run tests)
└── README.md                # This file

Each exercise folder contains its own CMakeLists.txt, headers (.hpp), sources (.cpp), and example main.cpp files.

Building the Project

Clone the repository:

git clone https://github.com/your‑username/cpp‑praktikum.git
cd cpp‑praktikum

Open in CLion or generate build files manually:

mkdir build && cd build
cmake ..
cmake --build .

Run the desired target or example from CLion run configurations.

Exercise Modules

Exercise 1: C/C++ Basics

Print "Hello World"

Use sizeof and std::numeric_limits

Exercise 2: Functions and Structuring

Print star patterns

Extend with enum class Direction

Split into functions.hpp/.cpp

Input validation loops

Rolling alphabet with static

Namespaces and struct

Doxygen documentation

Exercise 3: Classes and Composition

CharGenerator: a class that generates sequential characters

Default parameters in constructors

PatternPrinter: composes CharGenerator for user‑driven patterns

Separation of header vs. source files

Exercise 4: Operator Overloading

Implement Vector3 with constructors, destructor, copy constructor

Overload +, -, *, and stream insertion <<

Validate with Catch2 tests
