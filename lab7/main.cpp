#include <iostream>
#include "include/Dziedziczenie.h"
#include "include/Polimorfizm.h"

using namespace std;

int main() {
    //dziedziczenie
    Prostokat prostokat(5, 8);
    prostokat.uzupelnij_dane("kwadrat", "czerwony");

    prostokat.wypisz_dane();
    cout << "obwod: " << prostokat.obwod() << endl;
    cout << "pole: " << prostokat.pole() << endl;

    cout << endl;

    Trojkat trojkat(5, 8, 2, 3);
    trojkat.uzupelnij_dane("trojkat", "niebieski");

    trojkat.wypisz_dane();
    cout << "obwod: " << trojkat.obwod() << endl;
    cout << "pole: " << trojkat.pole() << endl;

    cout << endl;

    //polimorfizm
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
    return 0;
}