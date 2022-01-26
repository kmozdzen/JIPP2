#include <iostream>
#include "../include/Transformation.h"
#include "../include/Security.h"
#include <string>
using namespace std;

void security(string data, int *new_data){
    for(int i = 0; i < data.size(); i++) {
        if (data.at(i) < 48 || data.at(i) > 57) {
            cout << "Podano bledne dane(wpisz liczby)" << endl;
            break;
        }
        if (i + 1 == data.size())
            *new_data = string_to_int(data);
    }
}

void security(string data, int *new_data, int *lock){
    for(int i = 0; i < data.size(); i++) {
        if (data.at(i) < 48 || data.at(i) > 57) {
            cout << "Podano bledne dane(wpisz liczby)" << endl;
            break;
        }
        if (i + 1 == data.size()){
            *new_data = string_to_int(data);
            *lock = 1;
        }
    }
}

void security(string data, double *new_data){
    for(int i = 0; i < data.size(); i++) {
        if (data.at(i) != 46 && data.at(i) < 48 || data.at(i) > 57) { //rozne od liczb oraz od '.'
            cout << "Podano bledne dane(wpisz liczby)" << endl;
            break;
        }
        if (i + 1 == data.size())
            *new_data = stod(data);
    }
}

bool security(string data){
    for(int i = 0; i < data.size(); i++) {
        if(i == 0) {
            if (data.at(i) < 65 || data.at(i) > 90) {
                cout << "Podano bledne dane(1 duza litera)" << endl;
                break;
            }
        }
        else if (data.at(i) < 97 || data.at(i) > 122) { //rozne od liter
            cout << "Podano bledne dane(podaj litery)" << endl;
            break;
        }
        if (i + 1 == data.size())
            return true;
    }
    return false;
}