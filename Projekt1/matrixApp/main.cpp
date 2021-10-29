#include <iostream>
#include <string.h>
#include "matrixLib.h"
#include "matrix.h"
#include "help.h"
using namespace std;
enum TYPE {INT, DOUBLE};

int main(int arc, char *argv[]){
    int number_of_rows_A;
    int number_of_columns_A;
    int number_of_rows_B;
    int number_of_columns_B;

    //MENU
    if(strcmp(argv[1], "help") == 0) {
        help();
    }
    else{
        TYPE type;
        char which_type;
        cout << "Podaj typ zmiennych jakie bedziesz wporwadzal (1 - INT, 2 - DOUBLE):";
        cin >> which_type;

        while (which_type != 49 || which_type != 50){
            if(which_type == 49){
                type = INT;
                break;
            }
            else if(which_type == 50){
                type = DOUBLE;
                break;
            }
            else
                cout << "Podano zla wartosc, wpisz ponowanie" << endl;
            cout << "Podaj typ zmiennych jakie bedziesz wporwadzal (1 - INT, 2 - DOUBLE):";
            cin >> which_type;
        }
        //addMatrix
        if(strcmp(argv[1], "addMatrix") == 0){
            if(type == INT){
                int **B{nullptr}, **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                M = addMatrix(A, B, number_of_rows_A, number_of_columns_A);
                cout << "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **B{nullptr}, **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                M = addMatrix(A, B, number_of_rows_A, number_of_columns_A);
                cout << "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //subtractMatrix
        else if(strcmp(argv[1], "subtractMatrix") == 0){
            if(type == INT) {
                int **B{nullptr}, **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz" << endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                M = subtractMatrix(A, B, number_of_rows_A, number_of_columns_A);
                cout << "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **B{nullptr}, **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz" << endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                M = subtractMatrix(A, B, number_of_rows_A, number_of_columns_A);
                cout << "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //multiplyMatrix
        else if(strcmp(argv[1], "multiplyMatrix") == 0) {
            if(type == INT) {
                int **B{nullptr}, **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz" << endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                if (number_of_columns_A == number_of_rows_B) {
                    M = multiplyMatrix(A, B, number_of_rows_A, number_of_columns_A, number_of_columns_B);
                    cout << "Macierz wynikowa" << endl;
                    show_matrix(M, number_of_rows_A, number_of_columns_B);
                } else {
                    cout << "Liczba kolumn pierwszej macierzy nie jest rowna liczbie wierszy drugiej macierzy" << endl;
                }

                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE) {
                double **B{nullptr}, **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                rows_columns(&number_of_rows_B, &number_of_columns_B, 'B');
                B = allocate_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Wypelnij macierz" << endl;
                fill_matrix(B, number_of_rows_B, number_of_columns_B);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz B" << endl;
                show_matrix(B, number_of_rows_B, number_of_columns_B);

                if (number_of_columns_A == number_of_rows_B) {
                    M = multiplyMatrix(A, B, number_of_rows_A, number_of_columns_A, number_of_columns_B);
                    cout << "Macierz wynikowa" << endl;
                    show_matrix(M, number_of_rows_A, number_of_columns_B);
                } else {
                    cout << "Liczba kolumn pierwszej macierzy nie jest rowna liczbie wierszy drugiej macierzy" << endl;
                }
                remove_matrix(A, number_of_rows_A);
                remove_matrix(B, number_of_rows_B);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //multiplyByScalar
        else if(strcmp(argv[1], "multiplyByScalar") == 0){
            if(type == INT){
                int **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                int scalar;
                cout <<  "Podaj skalar:";
                cin >> scalar;

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = multiplyByScalar(A, number_of_rows_A, number_of_columns_A, scalar);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                double scalar;
                cout <<  "Podaj skalar:";
                cin >> scalar;

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = multiplyByScalar(A, number_of_rows_A, number_of_columns_A, scalar);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //transpozeMatrix
        else if(strcmp(argv[1], "transpozeMatrix") == 0){
            if(type == INT){
                int **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = transpozeMatrix(A, number_of_rows_A, number_of_columns_A);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = transpozeMatrix(A, number_of_rows_A, number_of_columns_A);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //powerMatrix
        else if(strcmp(argv[1], "powerMatrix") == 0){
            if(type == INT){
                int **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                unsigned int exponent;
                cout << "Podaj stopien potegi:";
                cin >> exponent;

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = powerMatrix(A, exponent, number_of_rows_A, number_of_columns_A);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                unsigned int exponent;
                cout << "Podaj stopien potegi:";
                cin >> exponent;

                cout << "Macierz A" <<endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                M = powerMatrix(A, exponent, number_of_rows_A, number_of_columns_A);
                cout <<  "Macierz wynikowa" << endl;
                show_matrix(M, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //determinantMatrix
        else if(strcmp(argv[1], "determinantMatrix") == 0){
            if(type == INT){
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                int detA;
                detA= determinantMatrix(A, number_of_rows_A, number_of_columns_A);
                cout << "detA = " << detA << endl;

                remove_matrix(A, number_of_rows_A);
            }
            else if(type == DOUBLE){
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                double detA;
                detA= determinantMatrix(A, number_of_rows_A, number_of_columns_A);
                cout << "detA = " << detA << endl;
                remove_matrix(A, number_of_rows_A);
            }
        }
            //matrixIsDiagonal
        else if(strcmp(argv[1], "matrixIsDiagonal") == 0){
            if(type == INT){
                int **M{nullptr};
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                bool diagonal;
                diagonal = matrixIsDiagonal(A, number_of_rows_A, number_of_columns_A);
                if (diagonal == true){
                    cout << "Macierz jest diagonalna" << endl;
                }
                else{
                    cout << "Macierz nie jest diagonalna" << endl;
                }
                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
            else if(type == DOUBLE) {
                double **M{nullptr};
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                bool diagonal;
                diagonal = matrixIsDiagonal(A, number_of_rows_A, number_of_columns_A);
                if (diagonal == true) {
                    cout << "Macierz jest diagonalna" << endl;
                } else {
                    cout << "Macierz nie jest diagonalna" << endl;
                }
                remove_matrix(A, number_of_rows_A);
                remove_matrix(M, number_of_rows_A);
            }
        }
            //swap
        else if(strcmp(argv[1], "swap") == 0) {
            if(type == INT){
                int a_row;
                int a_column;
                int b_row;
                int b_column;
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Podaj wiersz gdzie wystepuje 1 wartosc:";
                cin >> a_row;
                cout << "Podaj kolumne gdzie wystepuje 1 wartosc:";
                cin >> a_column;

                cout << "Podaj wiersz gdzie wystepuje 2 wartosc:";
                cin >> b_row;
                cout << "Podaj kolumne gdzie wystepuje 2 wartosc:";
                cin >> b_column;

                cout << "przed swapem "<<endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                swap(A[a_row - 1][a_column - 1], A[b_row -1][b_column - 1]);
                cout << "po swapie "<<endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
            }
            else if(type == DOUBLE){
                int a_row;
                int a_column;
                int b_row;
                int b_column;
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Podaj wiersz gdzie wystepuje 1 wartosc:";
                cin >> a_row;
                cout << "Podaj kolumne gdzie wystepuje 1 wartosc:";
                cin >> a_column;

                cout << "Podaj wiersz gdzie wystepuje 2 wartosc:";
                cin >> b_row;
                cout << "Podaj kolumne gdzie wystepuje 2 wartosc:";
                cin >> b_column;

                cout << "przed swapem "<<endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                swap(A[a_row - 1][a_column - 1], A[b_row -1][b_column - 1]);
                cout << "po swapie "<<endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
            }

        }
            //sortRow
        else if(strcmp(argv[1], "sortRow") == 0) {
            if (type == INT) {
                int row;
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Podaj wiersz do posortowania: " << endl;
                cin >> row;

                cout << "Przed sortowanmiem" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                sortRow(A[row - 1], number_of_columns_A);
                cout << "Po sortowaniu" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
            }
            else if (type == DOUBLE) {
                int row;
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Podaj wiersz do posortowania: " << endl;
                cin >> row;

                cout << "Przed sortowanmiem" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                sortRow(A[row - 1], number_of_columns_A);
                cout << "Po sortowaniu" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                remove_matrix(A, number_of_rows_A);
            }
        }
            //sortRowsInMatrix
        else if(strcmp(argv[1], "sortRowsInMatrix") == 0) {
            if(type == INT){
                int **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                sortRowsInMatrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz posortowana" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                delete [] A;
            }
            else if(type == DOUBLE){
                double **A{nullptr};

                rows_columns(&number_of_rows_A, &number_of_columns_A, 'A');
                A = allocate_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Wypelnij macierz"<< endl;
                fill_matrix(A, number_of_rows_A, number_of_columns_A);

                cout << "Macierz A" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);

                sortRowsInMatrix(A, number_of_rows_A, number_of_columns_A);
                cout << "Macierz posortowana" << endl;
                show_matrix(A, number_of_rows_A, number_of_columns_A);
                remove_matrix(A, number_of_rows_A);
            }
        }
            //bledny parametr
        else{
            cout << "Bledny parametr\n" << endl;
            help();
        }

    }
    return 0;
}