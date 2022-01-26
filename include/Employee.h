
#ifndef PROJEKT_KONCOWY_EMPLOYEE_H
#define PROJEKT_KONCOWY_EMPLOYEE_H
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

//klasa zawierajace informacje o pracowniku
class Employee{
protected:
    string name; // imie
    string surname; //nazwisko
    int age; //wiek
    double monthly_earnings; //miesieczne zarobki
    int seniority; // staz pracy
    bool student; // status ucznia
public:
    //konstrutory
    Employee() {};
    Employee(string name, string surname, int age);
    Employee(double monthly_earnings, int seniority);

    //dostanie sie do imienia
    string get_name();
    //ustawienie imienia
    void set_name(string name);

    //dostanie sie do nazwiska
    string get_surname();
    //ustawienie nazwiska
    void set_surname(string surname);

    //dostanie sie do wieku
    int get_age();
    //ustawienie wieku
    void set_age(int age);

    //dostanie sie do miesiecznych zarobkow
    double get_monthly_earnings();
    //ustawienie zarobkow
    void set_monthly_earnings(double monthly_earnings);

    //dostanie sie do stazu pracy
    int get_seniority();
    //ustawienie stazu pracy
    void set_seniority(int seniority);

    //dostanie sie do statusu studenta
    bool get_student();
    //ustawienie statusu studenta
    void set_student(int student);

    //wypisanie wszystkich zmiennych
    void print() const;
};


#endif //PROJEKT_KONCOWY_EMPLOYEE_H
