#include <iostream>
#include "Point.h"
#include "Pojazd.h"

using namespace std;

class TestClass {
private:
    const int t = 0;

public:
    TestClass(const int t) : t(t) {
    }

};

string Pojazd::najnowsza_wersja_oprogramowania = "v1.0";

int main() {
        Point p1("P1"), p2(5, 5, "P2");

        cout << "Initial values" << endl;
        p1.printData();
        p2.printData();

        cout << endl << "Create copy of point" << endl;
        Point p1c = p1, p2c = p2;
        //Update copied points names
        p1c.setName("P1c");
        p2c.setName("P2c");

        cout << "Values after copying" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();

        cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
        p1.setX(10);
        p1.setY(10);
        p2.setX(15);
        p2.setY(15);

        cout << "Values after update values" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();

    cout << endl;
    Pojazd pojazd1(1234, "audi", 4,  "a4");
    pojazd1.wypisz_informacje();
    cout << endl;
    pojazd1.zmien_informacje(2, "jan dzban");
    pojazd1.wypisz_informacje();
    cout << endl;

    Pojazd pojazd2(pojazd1);
    pojazd2.zmien_informacje(4, "mariusz pudzianowski");
    pojazd2.set_nazwa("bmw");
    pojazd2.wypisz_informacje();

    /*int cVal = 314;
    int *const p = &cVal;

    *p = 628;

    int cVal2 = 666;
    p = &cVal2;*/
    cout << endl;
    pojazd1.wypisz_wersje_oprogramowania();

    pojazd1.opublikujNoweOprogramowanie("v2.0");
    pojazd1.zaktualizuj_oprogramowanie();
    pojazd1.wypisz_wersje_oprogramowania();

    cout << "\nEnd program" << endl;

    return 0;
}