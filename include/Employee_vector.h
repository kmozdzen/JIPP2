
#ifndef PROJEKT_KONCOWY_EMPLOYEE_VECTOR_H
#define PROJEKT_KONCOWY_EMPLOYEE_VECTOR_H

#include <iostream>
#include "../include/Employee_write_read.h"
#include "../include/Employee_vector.h"
#include "../include/Employee.h"
#include "../include/Employee_exception.h"
#include "../include/Average_earnings.h"
#include <vector>
#include <fstream>
#include <exception>
#include <string>
#include "Mandatory_contract.h"

using namespace std;

//klasa zawierajaca zbior wszystkich pracownikow
class Employee_vector{
protected:
    vector<Employee> employee_container; //kontener pracownikow
public:
    void add(const Employee& employee); //dodanie pracownika do zbioru
    void print() const; //wypisanie zawartosci kontenera
    void remove(int index); //usuniecie pracownika o podanym indeksie

    void change_name(int index, string new_name); //zmiana imienia
    void change_surname(int index, string new_surname); //zmiana nazwiska
    void change_age(int index, int new_age); //zmiana wieku
    void change_monthly_earnings(int index, double new_monthly_earnigns); //zmiana zarobkow
    void change_seniority(int index, int new_seniority); //zmiana stazu pracy
    void change_student(int index, string new_student); //zmiana statusu studenta

    void sort_name(); //sortowanie wedlug imienia
    void sort_surname(); //sortowanie wedlug nazwiska
    void sort_age(); //sortowanie wedlug wieku
    void sort_monthly_earnings(); //sortowanie wedlug miesiecznych zarobkow
    void sort_seniority(); //sortowanie wedlug stazu pracy


   // void write_to_file(string header, char separator); //funkcja zapisujaca zmienione dane do nowego pliku csv

    void average(Average_earnings *averageEarnings, int beg, int end); //obliczanie sredniej na podstawie podanego zakresu, okreslajacego staz pracy

    void brutto_to_netto(string header, char separator); //zamiana wartosci brutto na netto

    //zwraca kontener z pracownikami
    vector<Employee> container(){
        return employee_container;
    };

};

#endif //PROJEKT_KONCOWY_EMPLOYEE_VECTOR_H
