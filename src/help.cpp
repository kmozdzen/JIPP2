#include <iostream>
#include "../include/help.h"

using namespace std;

void help(){
    cout << "------------MENU------------" << endl;
    cout << "Wybierz numer 1-7" << endl;
    cout << "1. Zmiana danych wybranego pracownika" << endl;
    cout << "2. Pokaz liste pracownikow" << endl;
    cout << "3. Usun pracownika" << endl;
    cout << "4. Srednia zarobkow zalezna od doswiadczenia w pracy" << endl;
    cout << "Podaj 3 parametry [4 (poczatek zakresu) (koniec zakresu) np 4 1 10)]" << endl;
    cout << "5. Przeliczanie brutto na netto uwzgledniajac ulgi podatkowe" << endl;
    cout << "6. Sortowanie wedlug wybranej zmiennej" << endl;
    cout << "7. Szukanie maksymalnej oraz minimalnej wartosci" << endl;
}