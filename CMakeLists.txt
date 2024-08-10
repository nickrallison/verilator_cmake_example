cmake_minimum_required(VERSION 3.29)

project(cmake_verilator)
find_package(verilator HINTS $ENV{VERILATOR_ROOT})

set(CXX "c++")

set(CMAKE_CXX_STANDARD 14)  # Set to C14 standard globally
# set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Ensure the standard is required
# set(CMAKE_CXX_EXTENSIONS OFF)  # Ensure no compiler-specific extensions are used

add_executable(Vmux2 sim/mux2.cpp)
verilate(Vmux2 SOURCES rtl/mux2.v)
