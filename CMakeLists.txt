# Set the minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set project name
project(neotype)

# Use Clang as the compiler
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_COMPILER clang)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable compile_commands.json generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add subdirectories for each component
add_subdirectory(Core)
add_subdirectory(App)
