
#ifndef PROJEKT_KONCOWY_EMPLOYEE_WRITE_READ_H
#define PROJEKT_KONCOWY_EMPLOYEE_WRITE_READ_H

#include <iostream>
#include "../include/Employee_vector.h"
#include <vector>
#include <fstream>
#include <exception>
#include <string>

using namespace std;

//klasa obslugujaca czytanie oraz zapisywanie danych do/z pliku
class Employee_write_read : public Employee_vector{
public:
    void write_to_file(string header, char separator); //zapisywanie danych do pliku
    //czytanie danych z pliku
    void read_from_file(Employee_vector &employee_vector, string *header, char separator);
};

#endif //PROJEKT_KONCOWY_EMPLOYEE_WRITE_READ_H
