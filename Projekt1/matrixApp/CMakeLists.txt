cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(../matrixLib)
set(Headers matrix.h help.h)

add_executable(matrixApp main.cpp matrix.cpp help.cpp)

target_link_libraries(matrixApp matrixLib)