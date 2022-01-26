#include <iostream>
#include "../include/Transformation.h"
#include "../include/Employee_write_read.h"
#include <vector>
#include <string>

using namespace std;

void Employee_write_read::write_to_file(string header, char separator) {
    //zapisywanie do nowego pliku
    ofstream changed_database("changed_database.csv");
    try{
        if(changed_database.is_open()){
            header.pop_back();
            changed_database << header << "t" << endl;
            vector<Employee>::iterator x;
            for(x = employee_container.begin(); x < employee_container.end(); x++){
                changed_database << (*x).get_name() << separator;
                changed_database << (*x).get_surname() << separator;
                changed_database << (*x).get_age() << separator;
                changed_database << (*x).get_monthly_earnings() << separator;
                changed_database << (*x).get_seniority() << separator;
                if((*x).get_student())
                    changed_database << "yes" << "\n";
                else
                    changed_database << "no" << "\n";
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

void Employee_write_read::read_from_file(Employee_vector &employee_vector, string *header, char separator) {
    Employee employee;
    string name, surname;
    int age;
    int counter = 0;
    string temp;

    //czytanie z bazy danych
    ifstream database("database.csv");
    try {
        database >> *(header); //pominiecie linii z naglowkami
        if (database.is_open()) {
            char sign;
            while (!database.eof()) {
                //zapisywanie plikow z bazy danych do kontenera
                database.get(sign);
                if (sign != separator) {
                    temp.push_back(sign);
                    if (sign == '\n') {
                       temp.pop_back();
                        if(counter == 5)
                            goto next;
                    }
                    //else
                    //cout << "znak " << sign << endl;
                }
                else {
                    next:
                    if (counter == 0) {
                       // cout << "imie: " << temp << endl;
                        employee.set_name(temp);
                    } else if (counter == 1) {
                      //  cout << "nazwisko: " << temp << endl;
                        employee.set_surname(temp);
                    } else if (counter == 2) {
                      //  cout << "wiek: " << temp << endl;
                        employee.set_age(string_to_int(temp));
                    }
                    else if (counter == 3) {
                       // cout << "zarobki: " << temp << endl;
                        employee.set_monthly_earnings(stod(temp));
                    }
                    else if (counter == 4) {
                       // cout << "staz: " << temp << endl;
                        employee.set_seniority(string_to_int(temp));
                    }
                    else if (counter == 5) {
                      //  cout << "status studenta: " << temp << endl;
                        if(temp.compare("yes") == 0)
                            employee.set_student(true);
                        else if(temp.compare("no") == 0)
                            employee.set_student(false);
                        else
                            cout << "Bledne dane" << endl;
                    }
                    temp.clear();
                    counter++;
                }
                if (counter == 6) {
                    employee_vector.add(employee);
                    name.clear();
                    surname.clear();
                    counter = 0;
                }
            }
            employee_vector.add(employee);
            database.close();
        }
        else {
            throw invalid_argument("Blad przy otwarciu pliku database");
        }
    }
    catch(const invalid_argument &e){
        cout << e.what() << endl;
    }
}
