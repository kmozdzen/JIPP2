#include <iostream>
#include "help.h"

using namespace std;

void help(){
    cout << "Dokumentacja matrixApp\n" << endl;
    cout << "Wpisz odpowiedni parametr np. addMatrix , podaj ilosc wierszy, podaj ilosc kolumn, wpisz liczby do macierzy" << endl;
    cout << "Przyklad jak powinna wygladac wpisana macierz 3x3:\n 1 2 3 \n 4 5 6 \n 7 8 9" << endl;
    cout << "\nFunkcje: " << endl;
    cout << "---------addMatrix---------" << endl;
    cout << "Dodawanie 2 macierzy" << endl;
    cout << "addMatrix [macierz A] [macierz B] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------subtractMatrix---------" << endl;
    cout << "Odejmowanie 2 macierzy" << endl;
    cout << "subtractMatrix [macierz A] [macierz B] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------multiplyMatrix---------" << endl;
    cout << "Mnozenie 2 macierzy" << endl;
    cout << "multiplyMatrix [macierz A] [macierz B] [liczba wierszy macierzy A] [liczba kolumn macierzy A] [liczba kolumn macierzy B]\n" << endl;

    cout << "---------multiplyByScalar---------" << endl;
    cout << "Mnozenie macierzy przez skalar" << endl;
    cout << "multiplyByScalar [macierz A] [liczba wierszy] [liczba kolumn] [skalar]\n" << endl;

    cout << "---------transpozeMatrix---------" << endl;
    cout << "Transponowanie macierzy" << endl;
    cout << "transpozeMatrix [macierz A] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------powerMatrix---------" << endl;
    cout << "Potegowanie macierzy" << endl;
    cout << "powerMatrix [macierz A] [stopien potegi] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------determinantMatrix---------" << endl;
    cout << "Wyznacznik macierzy" << endl;
    cout << "determinantMatrix [macierz A] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------matrixIsDiagonal---------" << endl;
    cout << "Sprawdzanie, czy macierz jest diagonalna" << endl;
    cout << "matrixIsDiagonal [macierz A] [liczba wierszy] [liczba kolumn]\n" << endl;

    cout << "---------swap---------" << endl;
    cout << "Zamiana dwoch wartosci miejscami" << endl;
    cout << "swap [a] [b]\n" << endl;

    cout << "---------sortRow---------" << endl;
    cout << "Sortowanie tablicy" << endl;
    cout << "sortRow [tablica] [ilosc kolumn]\n" << endl;

    cout << "---------sortRowsInMatrix---------" << endl;
    cout << "Sortowanie wszystkich wierszy w macierzy" << endl;
    cout << "sortRowsInMatrix [macierz A] [ilosc wierszy] [ilosc kolumn]\n" << endl;
}