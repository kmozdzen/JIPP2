
#ifndef PROJEKT_KONCOWY_MAX_MIN_H
#define PROJEKT_KONCOWY_MAX_MIN_H

#include "../include/Employee_write_read.h"
#include "../include/Employee_vector.h"

template <typename type>
class Max_min{
    type variable; //zmienna ktora przechowuje szukana wartosc
    type *tab_of_values; // tablica za wartoscami
    int option; //wybor
    int size; //wielkosc tablicy
    vector<Employee> employee_container; //kontener pracownikow
public:
    //w konstruktorze tworzona jest tablica i jest uzupelniana w zaleznosci od wyboru
    Max_min(vector<Employee> employee_container, int option) : employee_container(employee_container), option(option) {
        tab_of_values = new type[employee_container.size()];
        size = employee_container.size();
        if(option == 1){
            for(int i = 0; i < size; i++){
                tab_of_values[i] = employee_container[i].get_monthly_earnings();
            }
        }
        else if(option == 2){
            for(int i = 0; i < size; i++){
                tab_of_values[i] = employee_container[i].get_seniority();
            }
        }
        else
            cout << "Bleda wartosc max_min" << endl;

    };
    //zwraca maksymalna wartosc
    type get_max(){
        for(int i = 0; i < size; i++) {
            if (i == 0)
                variable = tab_of_values[0];
            else if (variable < tab_of_values[i])
                variable = tab_of_values[i];
        }
        return variable;
    }
    //zwraca minimalna wartosc
    type get_min(){
        for(int i = 0; i < size; i++){
            if (i == 0)
                variable = tab_of_values[0];
            if(variable > tab_of_values[i])
                variable = tab_of_values[i];
        }
        return variable;
    }
    //sprzatanie
    ~Max_min(){
        delete [] tab_of_values;
    }
};

#endif //PROJEKT_KONCOWY_MAX_MIN_H
