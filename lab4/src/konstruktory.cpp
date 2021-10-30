#include <iostream>
#include "library.h"
#include <cmath>

using namespace std;

//konstruktory
//zadanie 1

double Punkt::odleglosc (){
    double odleglosc;
    odleglosc = sqrt(pow((p2[0] - p1[0]), 2) + pow((p2[1] - p1[1]), 2));
    return odleglosc;
}

Punkt::Punkt()
{
    p1[0] = 1.3;
    p1[1] = 2.5;
    p2[0] = 3.1;
    p2[1] = 4.7;
    cout << "Punkt 1: (" << p1[0] << "," << p1[1] << ")" << endl;
    cout << "Punkt 2: (" << p2[0] << "," << p2[1] << ")" << endl;
}

Figura::Figura() : pole(4){
    tablica_wierzcholkow = new int[pole];
    for (int i = 0; i < pole; i++){
        tablica_wierzcholkow[i] = rand()%10 + 1;
        cout << i + 1 << " wierzcholek = " << tablica_wierzcholkow[i] << endl;
    }
    delete [] tablica_wierzcholkow;
}
