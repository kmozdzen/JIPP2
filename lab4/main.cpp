#include <iostream>
#include "library.h"

using namespace std;

int main() {
    //struktury
    cout << "\nSTRUKTURY\n" << endl;
    cout << "zadanie 1\n" << endl;

    samochod samochody[4] = {{"audi", "a4", 2008, "czerwony"},
    {"bmw", "e36", 1997, "szary"},
    {"toyota", "supra", 1999, "czarny"},
    {"bmw", "benz", 2017, "bialy"}
    };
    for (int i = 0; i < 4; i++) {
        cout << samochody[i].marka << " ";
        cout << samochody[i].model << " ";;
        cout << samochody[i].rok_produkcji << " ";;
        cout << samochody[i].kolor << " ";;
        cout << endl;
    }
    cout << "\nzadanie 2\n" << endl;

    samochody[0].liczba_drzwi = 3;
    samochody[1].liczba_drzwi = 3;
    samochody[2].liczba_drzwi = 3;
    samochody[3].liczba_drzwi = 5;

    for (int i = 0; i < 4; i++){
        cout << samochody[i].marka << " ";
        cout << samochody[i].model<< " ";;
        cout << samochody[i].rok_produkcji<< " ";;
        cout << samochody[i].kolor<< " ";;
        cout << samochody[i].liczba_drzwi<< " ";;
        cout << endl;
    }

    cout << "\nzadanie 3\n" << endl;
    cout <<"liczba podobnych samochodow = "<<  ile_podobnych_samochodw(samochody, 4)<< endl;

    cout << "\nzadanie 4\n" << endl;
    int indeks = najnizszy_rok_produkcji(samochody, 4);
    cout << "marka: "<< samochody[indeks].marka << " " << samochody[indeks].model <<"  indeks samochodu z najnizszym rokiem produkcji = " << indeks<< endl;

    //klasy
    //zadanie 1
    cout << "\nKLASY" << endl;
    cout << "\nzadanie 1\n" << endl;
    Prostopadloscian prostopadloscian;
    prostopadloscian.set_a(4);
    prostopadloscian.set_b(3);
    prostopadloscian.set_c(5);
    int pole = prostopadloscian.pole();
    cout << "pole = " << pole << endl;

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;
    Kula kula;
    kula.set_r(5);
    double V = kula.objetosc_kuli();
    cout << "objetosc kuli = " << V << endl;

    //zadanie 3
    cout << "\nzadanie 3\n" << endl;
    FunkcjaKwadratowa funkcja;
    funkcja.set_a(-3);
    funkcja.set_b(5);
    funkcja.set_c(2);
    funkcja.wyswietl_funkcje();

    //zadanie 4
    cout << "\nzadanie 4\n" << endl;
    Student student;
    double procent;
    student.set_imie("michal");
    student.set_nazwisko("nowak");
    student.set_numer_albumu(412354);
    student.set_liczba_pytan(11);
    student.set_poprawne_odpowiedzi(4);

    procent = student.procent_poprawnych_odpowiedzi(student.get_liczba_pytan(), student.get_poprawne_odpowiedzi());
    cout << "Procent poprawnych odpowiedzi: " << procent << "%" << endl;

    //konstruktory
    cout << "\nKONSTRUKTORY\n" << endl;
    //zadanie 1
    cout << "\nzadanie 1\n" << endl;
    Punkt punkt;
    double odleglosc = punkt.odleglosc();
    cout <<"Odleglosc = " << odleglosc << endl;

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;
    Figura figura;

    //destruktory
    cout << "\nDESTRUKTORY\n" << endl;
    Klasa klasa;
    klasa.pause();
    return 0;
}