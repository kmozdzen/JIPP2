
#ifndef LAB4_LIBRARY_H
#define LAB4_LIBRARY_H

#include <string.h>

using namespace std;
//struktury
struct samochod{
    char marka[20];
    char model[20];
    int rok_produkcji;
    char kolor[20];
    int liczba_drzwi;
};

int ile_podobnych_samochodw(struct samochod samochody[], int liczba_elementow);
int najnizszy_rok_produkcji(struct samochod samochody[], int liczba_elementow);


//klasy
class Prostopadloscian{
private:
    int a;
    int b;
    int c;
public:
    int pole();
    int get_a();
    void set_a(int a);
    int get_b();
    void set_b(int b);
    int get_c();
    void set_c(int c);

};

class Kula{
private:
    int r;
public:
    double objetosc_kuli();
    int get_r();
    void set_r(int r);
};

class FunkcjaKwadratowa{
private:
    int a;
    int b;
    int c;
public:
    void wyswietl_funkcje();
    int get_a();
    void set_a(int a);
    int get_b();
    void set_b(int b);
    int get_c();
    void set_c(int c);
};

class Student{
private:
    string imie;
    string nazwisko;
    int numer_albumu;
    int liczba_pytan;
    int poprawne_odpowiedzi;
public:
    int get_numer_albumu();
    void set_numer_albumu(int numer_albumu);
    int get_liczba_pytan();
    void set_liczba_pytan(int liczba_pytan);
    int get_poprawne_odpowiedzi();
    void set_poprawne_odpowiedzi(int poprawne_odpowiedzi);
    string get_imie();
    void set_imie(string imie);
    string get_nazwisko();
    void set_nazwisko(string nazwisko);
    double procent_poprawnych_odpowiedzi(int liczba_pytan, int poprawne_odpowiedzi);
};

//konstruktory
//zadanie 1
    class Punkt {
    public:
        double p1[2];
        double p2[2];

        Punkt();

        double odleglosc ();
    };

//zadanie 2
    class Figura{
    public:
        int pole;
        int *tablica_wierzcholkow;

        Figura();
    };

    //destruktory
    class Klasa{
    public:
        int *tablica;
        Klasa();

        void pause();
        ~Klasa();
    };
#endif //LAB4_LIBRARY_H
