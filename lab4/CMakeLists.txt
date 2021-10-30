cmake_minimum_required(VERSION 3.12)
project(lab4)

set(CMAKE_CXX_STANDARD 14)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(lab4 main.cpp include/library.h src/struktury.cpp src/klasy.cpp src/konstruktory.cpp src/dekonstruktory.cpp)