#include "include_calc.h"
#include <iostream>
using namespace std;

add(int a, int b){
    return a + b;
}

subtract(int a, int b){
    return a - b;
}

volume(int a, int b, int h, int H){
    int Pp, V;
    Pp = (a + b) * h / 2;
    V = Pp * H;
    return V;
}

help(){
    cout << "Simple calculator\n" << endl;
    cout << "Dzialania:" << endl;
    cout << "add [a] [b]" << endl;
    cout << "Dodawanie dwoch liczb ([a] i [b]) calkowitych\n" << endl;
    cout << "subtract [a] [b]" << endl;
    cout << "Odejmowanie dwoch liczb ([a] i [b]) calkowitych\n" << endl;
    cout << "volume [a] [b] [h] [H]" << endl;
    cout << "Obliczenie objetosci graniastoslupa prostego o podstawie trapezu" << endl;
    return 0;
}

