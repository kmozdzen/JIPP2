#include <iostream>
#include "matrixLib.h"

using namespace std;

int **addMatrix(int **A, int **B, int number_of_rows, int number_of_columns){
    int **M;
    M = new int *[number_of_rows];
    for(int i = 0; i < number_of_rows; i++) {
        M[i] = new int[number_of_columns];
    }

    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = A[i][j] + B[i][j];
        }
    }
    return M;
}

int **subtractMatrix(int **A, int **B, int number_of_rows, int number_of_columns){
    int **M;
    M = new int *[number_of_rows];
    for(int i = 0; i < number_of_rows; i++) {
        M[i] = new int[number_of_columns];
    }

    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = A[i][j] - B[i][j];
        }
    }
    return M;
}
