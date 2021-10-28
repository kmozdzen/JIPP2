#include <limits>
#include <iostream>
#include "matrix.h"

using namespace std;

void show_matrix(int **M, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void show_matrix(double **M, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void fill_matrix(int **M, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        int j = 0;
        while(j != number_of_rows){
            while(true){
                cin >> M[i][j];
                if (cin)
                {
                    break;
                }
                cout << "Podaj prawidlowa liczbe" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            j++;
        }
    }
}

void fill_matrix(double **M, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        int j = 0;
        while(j != number_of_rows){
            while(true){
                cin >> M[i][j];
                if (cin)
                {
                    break;
                }
                cout << "Podaj prawidlowa liczbe" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            j++;
        }
    }
}



bool compare(char w1[], char w2[]) {
    int i = 0;
    while (w1[i] != '\0' || w2[i] != '\0') {
        if (w1[i] != w2[i]) {
            break;
        }
        i++;
        if (w1[i] == '\0' && w2[i] == '\0') {
            return true;
            break;
        }
    }
    return false;
}

int **allocate_matrix(int **M, int number_of_rows, int number_of_columns){
    M = new int*[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new int[number_of_columns];
    }
    return M;
}
double **allocate_matrix(double **M, int number_of_rows, int number_of_columns){
    M = new double *[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new double [number_of_columns];
    }
    return M;
}


void rows_columns(int *number_of_rows, int *number_of_columns, char name){
    cout << "Podaj ilosc wierszy dla macierzy " << name << ":";
    cin >> *number_of_rows;
    cout << "Podaj ilosc kolumn dla macierzy " << name << ":";
    cin >> *number_of_columns;
}