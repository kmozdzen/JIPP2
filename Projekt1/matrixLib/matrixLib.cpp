#include <iostream>
#include "matrixLib.h"
#include "../matrixApp/matrix.h"

using namespace std;

int **addMatrix(int **A, int **B, int number_of_rows, int number_of_columns){
    int **M;
    M = new int*[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new int[number_of_columns];
    }

    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = A[i][j] + B[i][j];
        }
    }
    return M;
}

double **addMatrix(double **A, double **B, int number_of_rows, int number_of_columns){
    double **M;
    M = new double *[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new double [number_of_columns];
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
    M = new int*[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new int[number_of_columns];
    }

    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = A[i][j] - B[i][j];
        }
    }
    return M;
}

double **subtractMatrix(double **A, double **B, int number_of_rows, int number_of_columns){
    double **M;
    M = new double *[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        M[i] = new double [number_of_columns];
    }

    for(int i = 0; i < number_of_rows; i++){
        for(int j = 0; j < number_of_columns; j++){
            M[i][j] = A[i][j] - B[i][j];
        }
    }
    return M;
}

int **multiplyMatrix(int **A, int **B, int number_of_rows_A, int number_of_columns_A, int number_of_columns_B){
    int **M;
    M = new int*[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new int[number_of_columns_A];
    }

        for(int k = 0; k < number_of_rows_A; k++){
            for(int i = 0; i < number_of_columns_B; i++){
                int sum = 0;
                for(int j = 0; j < number_of_columns_A; j++){
                    sum += A[k][j] * B[j][i];
                }
                M[k][i] = sum;
            }
        }
    return M;
}

double **multiplyMatrix(double **A, double **B, int number_of_rows_A, int number_of_columns_A, int number_of_columns_B){
    double **M;
    M = new double *[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new double [number_of_columns_A];
    }

    for(int k = 0; k < number_of_rows_A; k++){
        for(int i = 0; i < number_of_columns_B; i++){
            double sum = 0;
            for(int j = 0; j < number_of_columns_A; j++){
                sum += A[k][j] * B[j][i];
            }
            M[k][i] = sum;
        }
    }
    return M;
}

int **multiplyByScalar(int **A, int number_of_rows_A, int number_of_columns_A, int scalar) {
    int **M;
    M = new int*[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++) {
        M[i] = new int[number_of_columns_A];
    }

    for(int i = 0; i < number_of_rows_A; i++){
        for(int j = 0; j < number_of_columns_A; j++){
            M[i][j] = A[i][j] * scalar;
        }
    }
    return M;
}

double **multiplyByScalar(double **A, int number_of_rows_A, int number_of_columns_A, double scalar){
    double **M;
    M = new double *[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new double [number_of_columns_A];
    }

    for(int i = 0; i < number_of_rows_A; i++){
        for(int j = 0; j < number_of_columns_A; j++){
            M[i][j] = A[i][j] * scalar;
        }
    }
    return M;
}


int **transpozeMatrix(int **A, int number_of_rows_A, int number_of_columns_A){
    int **M;
    M = new int*[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++) {
        M[i] = new int[number_of_columns_A];
    }

    for(int i = 0; i < number_of_columns_A; i++){
        for(int j = 0; j < number_of_rows_A; j++){
            M[i][j] = A[j][i];
        }
    }

    return  M;
}

double **transpozeMatrix(double **A, int number_of_rows_A, int number_of_columns_A){
    double **M;
    M = new double *[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new double [number_of_columns_A];
    }
    for(int i = 0; i < number_of_columns_A; i++){
        for(int j = 0; j < number_of_rows_A; j++){
            M[i][j] = A[j][i];
        }
    }

    return  M;
}

int **powerMatrix(int **A, unsigned int exponent, int number_of_rows_A, int number_of_columns_A){
    cout << exponent << endl;
    int **M;
    M = new int*[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new int[number_of_columns_A];
    }
    M = A;
    for(int i = 1; i < exponent; i++){
        M = multiplyMatrix(M, A, number_of_rows_A, number_of_columns_A, number_of_columns_A);
    }

    return  M;
}

double **powerMatrix(double **A, unsigned int exponent, int number_of_rows_A, int number_of_columns_A){
    double **M;
    M = new double *[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new double [number_of_columns_A];
    }
    M = A;
    for(int i = 1; i < exponent; i++){
        M = multiplyMatrix(M, A, number_of_rows_A, number_of_columns_A, number_of_columns_A);
    }

    return  M;
}

int determinantMatrix(int **A, int number_of_rows_A, int number_of_columns_A){
    int detA = 0;

    int **M;
    M = new int*[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new int[number_of_columns_A];
    }

    if(number_of_rows_A && number_of_columns_A == 1){
        return A[0][0];
    }
    if(number_of_rows_A && number_of_columns_A == 2){
        return A[0][0] * A[1][1] - A[1][0] * A[0][1];
    }

    int sign = 1;
    for(int i = 0; i < number_of_columns_A; i++){
        int M_j = 0, M_k = 0;
        for(int j = 0; j < number_of_rows_A; j++){
            for(int k = 0; k < number_of_rows_A; k++) {
                if(j != 0 && k != i){
                    M[M_j][M_k] = A[j][k];
                    M_k++;
                    if(M_k == number_of_rows_A - 1){
                        M_k = 0;
                        M_j++;
                    }
                }
            }
        }
        detA += sign * A[0][i] * determinantMatrix(M, number_of_rows_A - 1, number_of_columns_A - 1);
        sign = -sign;
    }
    remove_matrix(M, number_of_rows_A);
    return detA;
}

double determinantMatrix(double **A, int number_of_rows_A, int number_of_columns_A){
    double detA = 0;

    double **M;
    M = new double *[number_of_rows_A];
    for(int i =0; i < number_of_rows_A; i++){
        M[i] = new double [number_of_columns_A];
    }

    if(number_of_rows_A && number_of_columns_A == 1){
        return A[0][0];
    }
    if(number_of_rows_A && number_of_columns_A == 2){
        return A[0][0] * A[1][1] - A[1][0] * A[0][1];
    }

    int sign = 1;
    for(int i = 0; i < number_of_columns_A; i++){
        int M_j = 0, M_k = 0;
        for(int j = 0; j < number_of_rows_A; j++){
            for(int k = 0; k < number_of_rows_A; k++) {
                if(j != 0 && k != i){
                    M[M_j][M_k] = A[j][k];
                    M_k++;
                    if(M_k == number_of_rows_A - 1){
                        M_k = 0;
                        M_j++;
                    }
                }
            }
        }
        detA += sign * A[0][i] * determinantMatrix(M, number_of_rows_A - 1, number_of_columns_A - 1);
        sign = -sign;
    }
    remove_matrix(M, number_of_rows_A);
    return detA;
}

bool matrixIsDiagonal(int **A, int number_of_rows_A, int number_of_columns_A){
    for(int i = 0; i < number_of_columns_A; i++){
        for(int j = 0; j < number_of_rows_A; j++){
            if(i != j && A[i][j] != 0){
                goto next;
            }
        }
    }
    return true;
    next:
    return false;
}

bool matrixIsDiagonal(double **A, int number_of_rows_A, int number_of_columns_A){
    for(int i = 0; i < number_of_columns_A; i++){
        for(int j = 0; j < number_of_rows_A; j++){
            if(i != j && A[i][j] != 0){
                goto next;
            }
        }
    }
    return true;
    next:
    return false;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}

void sortRow(int *tab, int number_of_columns){
    for(int i = 0; i < number_of_columns; i++){
        for(int j = i + 1; j < number_of_columns; j++){
            if(tab[i] > tab[j]){
                swap(tab[i], tab[j]);
            }
        }
    }
}

void sortRow(double *tab, int number_of_columns){
    for(int i = 0; i < number_of_columns; i++){
        for(int j = i + 1; j < number_of_columns; j++){
            if(tab[i] > tab[j]){
                swap(tab[i], tab[j]);
            }
        }
    }
}

void sortRowsInMatrix(int **A, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
            sortRow(A[i], number_of_columns);
    }
}

void sortRowsInMatrix(double **A, int number_of_rows, int number_of_columns){
    for(int i = 0; i < number_of_rows; i++){
        sortRow(A[i], number_of_columns);
    }
}