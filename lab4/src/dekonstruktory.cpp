#include <iostream>
#include "library.h"

using namespace std;

//destruktory

void Klasa::pause(){
    system("PAUSE");
}
Klasa::Klasa() {
    cout << "konstruktor nie zostal wywolany" << endl;
    tablica = new int[1024];
};
Klasa::~Klasa() {
    cout << "dowolny tekst" << endl;
    delete [] tablica;
};
