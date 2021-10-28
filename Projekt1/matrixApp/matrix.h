
#ifndef PROJEKT1_MATRIX_H
#define PROJEKT1_MATRIX_H

void show_matrix(int **M, int number_of_rows, int number_of_columns);
void show_matrix(double **M, int number_of_rows, int number_of_columns);

void fill_matrix(int **M, int number_of_rows, int number_of_columns);
void fill_matrix(double **M, int number_of_rows, int number_of_columns);

bool compare(char w1[], char w2[]);

int **allocate_matrix(int **M, int number_of_rows, int number_of_columns);
double **allocate_matrix(double **M, int number_of_rows, int number_of_columns);

void rows_columns(int *number_of_rows, int *number_of_columns, char name);

#endif //PROJEKT1_MATRIX_H