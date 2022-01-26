#include <iostream>
#include "include/Employee_write_read.h"
#include "include/help.h"
#include "include/Max_min.h"
//#include "include/Transformation.h"
#include "include/Security.h"
#include <vector>
#include <string>

using namespace std;

int main(int arc, char *argv[]) {

    Employee_write_read employee_vector; //kontener pracownikow
    string header; //wiersz naglowkowy
    char separator = ',';

    employee_vector.read_from_file(employee_vector, &header, separator); //czytanie danych z csv

    //MENU
    //opis funkcji programu
    if(strcmp(argv[1], "help") == 0 && arc == 2) {
        help();
    }
    //zmiana danych uzytkownika
    else if(strcmp(argv[1], "1") == 0 && arc == 2){
        string new_name, new_surname, new_student, string_age, string_earnings, string_seniority, string_number;
        int new_age, new_seniority;
        double new_monthly_earnigns;
        int employee_number;
        int lock = 0;
        while(lock == 0){
            cout << "Podaj numer pracownika: ";
            cin >> string_number;
            security(string_number, &employee_number, &lock);
        }
        string option;
        do{
            cout << "Wybierz opcje" << endl;
            cout << "1. Zmiana imienia" << endl;
            cout << "2. Zmiana nazwiska" << endl;
            cout << "3. Zmiana wieku" << endl;
            cout << "4. Zmiana zarobkow" << endl;
            cout << "5. Zmiana stazu pracy" << endl;
            cout << "6. Zmiana statusu studenta" << endl;
            cout << "0. Zamknij opcje zmiany danych pracownika" << endl;
            cin >> option;

            if(option.compare("1") == 0) {
                cout << "Podaj nowe imie: ";
                cin >> new_name;
                if (security(new_name))
                    employee_vector.change_name(employee_number - 1, new_name);
            }
            else if(option.compare("2") == 0) {
                cout << "Podaj nowe nazwisko: ";
                cin >> new_surname;
                if (security(new_surname))
                    employee_vector.change_surname(employee_number - 1, new_surname);
            }
            else if(option.compare("3") == 0) {
                cout << "Podaj nowy wiek: ";
                cin >> string_age;
                //zabezpieczenie przed wpisywaniem czego innego niz liczby
                security(string_age, &new_age);
                employee_vector.change_age(employee_number - 1, new_age);
            }
            else if(option.compare("4") == 0) {
                cout << "Podaj nowe zarobki: ";
                cin >> string_earnings;
                security(string_earnings, &new_monthly_earnigns);
                employee_vector.change_monthly_earnings(employee_number - 1, new_monthly_earnigns);
            }
            else if(option.compare("5") == 0) {
                cout << "Podaj nowy staz pracy: ";
                cin >> string_seniority;
                security(string_seniority, &new_seniority);
                employee_vector.change_seniority(employee_number - 1, new_seniority);
            }
            else if(option.compare("6") == 0) {
                cout << "Podaj nowy status studenta(yes/no): ";
                cin >> new_student;
                employee_vector.change_student(employee_number - 1, new_student);
            }
            else if(option.compare("0") == 0)
                    cout << "Zamknieto opcje do zmiany danych pracownika" << endl;
            else
                    cout << "Nie ma takiego wyboru" << endl;
            }
        while(option.compare("0") != 0);
        employee_vector.write_to_file(header, separator);
    }
    //pokaz liste pracownikow
    else if(strcmp(argv[1], "2") == 0 && arc == 2){
        employee_vector.print();
    }
    //usuniecie pracownika
    else if(strcmp(argv[1], "3") == 0 && arc == 2){
        string string_option;
        int option;
        cout << "Wybierz numer pracownika do usuniecia" << endl;
        int lock = 0;
        while(lock == 0){
            cout << "Podaj numer pracownika: ";
            cin >> string_option;
            security(string_option, &option, &lock);
        }
        employee_vector.remove(option - 1);
        employee_vector.write_to_file(header, separator);
    }
    //srednia zarobkow z zakresem
    else if(strcmp(argv[1], "4") == 0 && arc == 4){
        int beg, end;
        beg = stoi(argv[2]);
        end = stoi(argv[3]);
        cout << "Srednia dla zakresu (" << beg << ", " << end << ")" << endl;
        Average_earnings averageEarnings;
        employee_vector.average(&averageEarnings, beg, end);
        averageEarnings.print();
    }
    //brutto --> netto
    else if(strcmp(argv[1], "5") == 0 && arc == 2) {
        cout << "Udalo sie!" << endl;
        employee_vector.brutto_to_netto(header, separator);
    }
    //sortowanie
    else if(strcmp(argv[1], "6") == 0 && arc == 2) {
        string option;
        cout << "Wedlug czego chcesz posortowac?" << endl;
        cout << "1. Imie" << endl;
        cout << "2. Nazwisko" << endl;
        cout << "3. Wiek" << endl;
        cout << "4. Zarobki" << endl;
        cout << "5. Staz pracy" << endl;
        cin >> option;

        if (option.compare("1") == 0) {
           employee_vector.sort_name();
        }
        else if (option.compare("2") == 0) {
            employee_vector.sort_surname();
        }
        else if (option.compare("3") == 0) {
            employee_vector.sort_age();
        }
        else if (option.compare("4") == 0) {
            employee_vector.sort_monthly_earnings();
        }
        else if (option.compare("5") == 0) {
            employee_vector.sort_seniority();
        }
        else
            cout << "Bledne dane (podaj numer 1-5)" << endl;
        employee_vector.write_to_file(header, separator);
    }
    //max i min
    else if(strcmp(argv[1], "7") == 0 && arc == 2){
        string option, option2;
        cout << "Szukanie max lub min" << endl;
        cout << "Wybierz:" << endl;
        cout << "1. Zarobki" << endl;
        cout << "2. Staz pracy" << endl;
        cin >> option;
        cout << "Wybierz:" << endl;
        cout << "1. Max" << endl;
        cout << "2. Min" << endl;
        cin >> option2;
        if(option.compare("1") == 0){
                Max_min<double> max_min{employee_vector.container(), stoi(option)};
            if(option2.compare("1") == 0)
                cout << max_min.get_max() << endl;
            else if(option2.compare("2") == 0)
                cout << max_min.get_min() << endl;
            else
                cout << "Bledna warotsc (podaj numer 1-2)" << endl;
        }
        else if(option.compare("2") == 0){
            Max_min<int> max_min{employee_vector.container(), stoi(option)};
            if(option2.compare("1") == 0)
                cout << max_min.get_max() << endl;
            else if(option2.compare("2") == 0)
                cout << max_min.get_min() << endl;
            else
                cout << "Bledna warotsc (podaj numer 1-2)" << endl;
        }
        else
            cout << "Bledna wartosc (podaj numer 1-2)" << endl;
    }
    else {
        cout << "Podano bledny parametr\n" << endl;
        help();
    }
    return 0;
}
