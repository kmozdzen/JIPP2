cmake_minimum_required(VERSION 3.20)
project(lab10_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab10_1 main.cpp include/CsvLib.h src/CsvLib.cpp src/CsvException.cpp)
