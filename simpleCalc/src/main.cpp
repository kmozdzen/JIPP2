#include <iostream>
#include "../include_calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    //simple calculator
    int choice = stoi(argv[1]);
    switch (choice) {
        case 1:
            if(argc == 4){ // nazwa + wybor + 2 parametry
                cout << add(stoi(argv[2]), stoi(argv[3]));
            }
            else{
                cout << "Zla ilosc parametrow"<<endl;
                help();
            }
            break;
        case 2:
            if(argc == 4) { // nazwa + wybor + 2 parametry
                cout << subtract(stoi(argv[2]), stoi(argv[3]));
            }
            else{
                cout << "Zla ilosc parametrow"<<endl;
                help();
            }
            break;
        case 3:
            if(argc == 6){ // nazwa + wybor + 4 parametry
                cout << volume(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]));
            }
            else{
                cout << "Zla ilosc parametrow"<<endl;
                help();
            }
            break;
        case 4:
            help();
            break;
        default:
            cout << "Blad, musisz podac wartosc 1-4" << endl;
    }

    return 0;
}