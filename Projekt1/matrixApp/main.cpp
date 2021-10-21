#include <iostream>
#include <string>
#include "matrixLib.h"
using namespace std;

void show_matrix(int **M, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void fill_matrix(int **M, int number_of_rows, int number_of_columns){
    int k = 0;
    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = ++k;
        }
    }
}

bool compare(char w1[], char w2[]){
   int i = 0;
   while(w1[i] != '\0' || w2[i] != '\0'){
       if(w1[i] != w2[i]){
           break;
       }
       i++;
       if(w1[i] == '\0' && w2[i] == '\0'){
           return true;
           break;
       }
   }
    return false;
}


int main(int arc, char *argv[]){
    srand (time(NULL));

    int number_of_columns = 3;
    int number_of_rows = 2;

    int **A;
    A = new int *[number_of_rows];
    for(int i = 0; i < number_of_rows; i++) {
        A[i] = new int[number_of_columns];
    }

    int **B;
    B = new int *[number_of_rows];
    for(int i = 0; i < number_of_rows; i++) {
        B[i] = new int[number_of_columns];
    }

    fill_matrix(A, number_of_rows, number_of_columns);
    show_matrix(A, number_of_rows, number_of_columns);
    cout <<endl;

    fill_matrix(B, number_of_rows, number_of_columns);
    show_matrix(B, number_of_rows, number_of_columns);
    cout <<endl;
    int **M;

    //MENU

    //addMatrix
    if(compare(argv[1], "addMatrix") == true){
        M = addMatrix(A, B, number_of_rows, number_of_columns);
        show_matrix(M, number_of_rows, number_of_columns);
    }
    //subtractMatrix
    else if(compare(argv[1], "subtractMatrix") == true){
        M = subtractMatrix(A, B, number_of_rows, number_of_columns);
        show_matrix(M, number_of_rows, number_of_columns);
    }
    else{
        goto next;
    }
    delete [] M;
    next:
    delete [] A;
    delete [] B;
    return 0;
}