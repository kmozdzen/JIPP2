#include <iostream>
#include "../include/Employee_write_read.h"
#include <string>

using namespace std;

Employee::Employee(string name, string surname, int age) : name(name), surname(surname), age(age) {};

void Employee::print() const {
    cout << "Imie: " << name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Wiek: " << age << endl;
    cout << "Miesieczne zarobki: " << monthly_earnings << " zl" << endl;
    if (seniority == 1)
        cout << "Staz pracy: " << seniority << " rok" << endl;
    else if(seniority > 1 && seniority < 5)
        cout << "Staz pracy: " << seniority << " lata" << endl;
    else
        cout << "Staz pracy: " << seniority << " lat" << endl;
    if(student)
        cout << "Status studenta: " << "tak" << endl;
    else
        cout << "Status studenta: " << "nie" << endl;

}

string Employee::get_name() {
    return name;
}
void Employee::set_name(string name) {
    this->name = name;
}

string Employee::get_surname() {
    return surname;
}
void Employee::set_surname(string surname) {
    this->surname = surname;
}

int Employee::get_age() {
    return age;
}
void Employee::set_age(int age) {
    this->age = age;
}

double Employee::get_monthly_earnings() {
    return monthly_earnings;
}
void Employee::set_monthly_earnings(double monthly_earnings) {
    this->monthly_earnings = monthly_earnings;
}

int Employee::get_seniority() {
    return seniority;
}
void Employee::set_seniority(int seniority) {
    this->seniority = seniority;
}

bool Employee::get_student() {
    return student;
}
void Employee::set_student(int student) {
    this->student = student;
}

Employee::Employee(double monthly_earnings, int seniority) : monthly_earnings(monthly_earnings), seniority(seniority) {}
