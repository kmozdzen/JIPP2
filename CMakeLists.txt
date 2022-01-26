cmake_minimum_required(VERSION 3.20)
project(projekt_koncowy)

set(CMAKE_CXX_STANDARD 14)

add_executable(projekt_koncowy main.cpp include/Employee.h src/Employee.cpp include/Transformation.h src/Transformation.cpp include/Employee_exception.h src/Employee_exception.cpp include/Employee_vector.h src/Employee_vector.cpp include/Employee_write_read.h src/Employee_write_read.cpp include/Average_earnings.h src/Average_earnings.cpp include/Mandatory_contract.h src/Mandatory_contract.cpp include/help.h src/help.cpp include/Max_min.h src/Max_min.cpp include/Security.h src/Security.cpp)
