#include <iostream>
#include "../include/Employee_write_read.h"
#include <string>

using namespace std;

void Employee_vector::add(const Employee &employee) {
    employee_container.push_back(employee);
}

void Employee_vector::remove(int index) {
    employee_container.erase(employee_container.begin()+index);
}

void Employee_vector::print() const {
    for(int i = 0; i < int(employee_container.size()); i++){
        cout << "Pracownik " << i + 1 << endl;
        employee_container[i].print();
    }
}

void Employee_vector::change_name(int index, string new_name) {
    employee_container.at(index).set_name(new_name);
}

void Employee_vector::change_surname(int index, string new_surname) {
    employee_container.at(index).set_surname(new_surname);
}

void Employee_vector::change_age(int index, int new_age) {
    employee_container.at(index).set_age(new_age);
}

void Employee_vector::change_monthly_earnings(int index, double new_monthly_earnigns) {
    employee_container.at(index).set_monthly_earnings(new_monthly_earnigns);
}

void Employee_vector::change_seniority(int index, int new_seniority) {
    employee_container.at(index).set_seniority(new_seniority);
}

void Employee_vector::change_student(int index, string new_student) {
    if(new_student.compare("yes") == 0)
        employee_container.at(index).set_student(true);
    else if(new_student.compare("no") == 0)
        employee_container.at(index).set_student(false);
    else
        cout << "----------bledne dane(podaj: ""yes"" lub ""no"")----------\n" << endl;
}

void Employee_vector::average(Average_earnings *averageEarnings, int beg, int end) {
    //dodawanie zarobkow mieszczacych sie w zalozeniach do nowej klasy przechowujacej ich sume
    for(int i = 0; i < int(employee_container.size()); i++){
        if(employee_container[i].get_seniority() >= beg && employee_container[i].get_seniority() <= end){
            Average_earnings temp(employee_container[i].get_monthly_earnings());
            *averageEarnings += temp;
        }
    }
}

void Employee_vector::brutto_to_netto(string header, char separator) {
    ofstream changed_database("changed_database.csv");
    try {
        if (changed_database.is_open()) {
            changed_database << header << ",Netto" << endl;
            vector<Employee>::iterator x;
            for (x = employee_container.begin(); x < employee_container.end(); x++) {
                changed_database << (*x).get_name() << separator;
                changed_database << (*x).get_surname() << separator;
                changed_database << (*x).get_age() << separator;
                changed_database << (*x).get_monthly_earnings() << separator;
                changed_database << (*x).get_seniority() << separator;
                if((*x).get_student())
                    changed_database << "yes"<< separator;
                else
                    changed_database << "no"<< separator;
                if ((*x).get_age() <= 26 && (*x).get_student()) {
                    Mandatory_contract *student_under_26 = new Student_under_26((*x).get_monthly_earnings());
                    changed_database << student_under_26->getNetto() << "\n";
                } else if ((*x).get_age() <= 26) {
                    Mandatory_contract *under_26 = new Under_26((*x).get_monthly_earnings());
                    changed_database << under_26->getNetto() << "\n";
                } else {
                    Mandatory_contract *over_26 = new Over_26((*x).get_monthly_earnings());
                    changed_database << over_26->getNetto() << "\n";
                }

            }
            changed_database.close();
        }
        else {
            throw invalid_argument("Blad przy zapisywaniu do pliku changed_database");
        }
    }
        catch(const invalid_argument &e){
            cout << e.what() << endl;
        }
}

//sortowanie

void Employee_vector::sort_name() {
    for(int i=0;i<employee_container.size();i++)
        for(int j=1;j<employee_container.size()-i;j++) { //pętla wewnętrzna
            int size;
            if (employee_container[j - 1].get_name().size() < employee_container[j - 1].get_name().size())
                size = employee_container[j - 1].get_name().size();
            else
                size = employee_container[j].get_name().size();
            for (int k = 0; k < size; k++) {
                if (employee_container[j - 1].get_name().at(k) > employee_container[j].get_name().at(k)) {
                    swap(employee_container[j - 1], employee_container[j]);
                    break;
                }
                else if (employee_container[j - 1].get_name().at(k) < employee_container[j].get_name().at(k))
                    break;
            }
        }
}

void Employee_vector::sort_surname() {
    for(int i=0;i<employee_container.size();i++)
        for(int j=1;j<employee_container.size()-i;j++) { //pętla wewnętrzna
            int size;
            if (employee_container[j - 1].get_surname().size() < employee_container[j - 1].get_surname().size())
                size = employee_container[j - 1].get_surname().size();
            else
                size = employee_container[j].get_surname().size();
            for (int k = 0; k < size; k++) {
                if (employee_container[j - 1].get_surname().at(k) > employee_container[j].get_surname().at(k)) {
                    swap(employee_container[j - 1], employee_container[j]);
                    break;
                }
                else if (employee_container[j - 1].get_surname().at(k) < employee_container[j].get_surname().at(k))
                    break;
            }
        }
}

void Employee_vector::sort_age() {
    for(int i=0;i<employee_container.size();i++)
        for(int j=1;j<employee_container.size()-i;j++) //pętla wewnętrzna
            if(employee_container[j-1].get_age() > employee_container[j].get_age())
                //zamiana miejscami
                swap(employee_container[j-1], employee_container[j]);
}

void Employee_vector::sort_monthly_earnings() {
    for(int i=0;i<employee_container.size();i++)
        for(int j=1;j<employee_container.size()-i;j++) //pętla wewnętrzna
            if(employee_container[j-1].get_monthly_earnings() > employee_container[j].get_monthly_earnings())
                //zamiana miejscami
                swap(employee_container[j-1], employee_container[j]);
}

void Employee_vector::sort_seniority() {
    for(int i=0;i<employee_container.size();i++)
        for(int j=1;j<employee_container.size()-i;j++) //pętla wewnętrzna
            if(employee_container[j-1].get_seniority() > employee_container[j].get_seniority())
                //zamiana miejscami
                swap(employee_container[j-1], employee_container[j]);
}
