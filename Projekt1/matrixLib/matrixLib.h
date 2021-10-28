
#ifndef PROJEKT1_MACIERZE_H
#define PROJEKT1_MACIERZE_H

int **addMatrix(int **A, int **B, int number_of_rows, int number_of_columns);
double **addMatrix(double **A, double **B, int number_of_rows, int number_of_columns);

int **subtractMatrix(int **A, int **B, int number_of_rows, int number_of_columns);
double **subtractMatrix(double **A, double **B, int number_of_rows, int number_of_columns);

int **multiplyMatrix(int **A, int **B, int number_of_rows_A, int number_of_columns_A,int number_of_columns_B);
double **multiplyMatrix(double **A, double **B, int number_of_rows_A, int number_of_columns_A,int number_of_columns_B);

int **multiplyByScalar(int **A, int number_of_rows_A, int number_of_columns_A, int scalar);
double **multiplyByScalar(double **A, int number_of_rows_A, int number_of_columns_A, double scalar);

int **transpozeMatrix(int **A, int number_of_rows_A, int number_of_columns_A);
double **transpozeMatrix(double **A, int number_of_rows_A, int number_of_columns_A);

int **powerMatrix(int **A, unsigned int exponent, int number_of_rows_A, int number_of_columns_A);
double **powerMatrix(double **A, unsigned int exponent, int number_of_rows_A, int number_of_columns_A);

int determinantMatrix(int **A, int number_of_rows_A, int number_of_columns_A);
double determinantMatrix(double **A, int number_of_rows_A, int number_of_columns_A);

bool matrixIsDiagonal(int **A, int number_of_rows_A, int number_of_columns_A);
bool matrixIsDiagonal(double **A, int number_of_rows_A, int number_of_columns_A);

void swap(int &a, int &b);
void swap(double &a, double &b);

void sortRow(int *tab, int number_of_columns);
void sortRow(double *tab, int number_of_columns);

void sortRowsInMatrix(int **A, int number_of_rows, int number_of_columns);
void sortRowsInMatrix(double **A, int number_of_rows, int number_of_columns);

#endif //PROJEKT1_MACIERZE_H