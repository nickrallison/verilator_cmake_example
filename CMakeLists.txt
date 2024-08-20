cmake_minimum_required(VERSION 3.29)

project(cmake_verilator)
find_package(verilator HINTS $ENV{VERILATOR_ROOT})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(Vmux2 sim/mux2.cpp)
set_property(TARGET Vmux2 PROPERTY CXX_STANDARD 14)
verilate(Vmux2 SOURCES rtl/mux2.v)
