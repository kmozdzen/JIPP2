

#ifndef PROJEKT_KONCOWY_EMPLOYEE_EXCEPTION_H
#define PROJEKT_KONCOWY_EMPLOYEE_EXCEPTION_H
#include <iostream>
#include "../include/Employee_write_read.h"
#include "../include/Employee_vector.h"
#include "../include/Employee.h"
#include "../include/Employee_exception.h"
#include <vector>
#include <fstream>
#include <exception>
#include <string>

using namespace std;

//klasa do oblsugi bledow
class Employee_exception : public exception{
private:
    char *exceptionText;

public:
    Employee_exception(char * exceptionText);

    const char * what();
};

#endif //PROJEKT_KONCOWY_EMPLOYEE_EXCEPTION_H
