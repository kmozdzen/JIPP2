#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <string.h>

using namespace std;

//struktury
//zdanie 1

struct samochod{
    char marka[20];
    char model[20];
    int rok_produkcji;
    char kolor[20];
    int liczba_drzwi;
};

//zadanie 3
/*int ile_podobnych_samochodw(struct samochod samochody[], int liczba_elementow){
    int podobne_samochody = 0;

    for (int i = 0; i < liczba_elementow - 1; i++){
        for(int j = i + 1; j < liczba_elementow; j++){
            if(strcmp(samochody[i], samochody[j])){
                //cout << samochody[i].liczba_drzwi << "  " << samochody[j].liczba_drzwi << endl;
                podobne_samochody++;
            }
        }
    }
    return podobne_samochody;
}
*/
//zadanie 4
int najnizszy_rok_produkcji(struct samochod samochody[], int liczba_elementow){
    int najnizszy_rok = samochody[0].rok_produkcji;
    int indeks = 0;
    for (int i = 1; i < liczba_elementow; i++){
        if (samochody[i].rok_produkcji < najnizszy_rok){
            najnizszy_rok = samochody[i].rok_produkcji;
            indeks = i;
        }
    }
    return indeks;
}

//klasy
//zadanie 1
class Prostopadloscian{
    private:
        int a;
        int b;
        int c;
    public:
        int pole(){
            return 2 * (a * b + a * c + b * c);
        }
        int get_a(){
            return a;
        }
        void set_a(int a){
            this->a = a;
        }
        int get_b(){
            return b;
        }
        void set_b(int b){
            this->b = b;
        }
        int get_c(){
            return c;
        }
        void set_c(int c){
            this->c = c;
        }

};
//zadanie 2
class Kula{
    private:
        int r;
    public:
        double objetosc_kuli(){
           double V = (double)4/3 * M_PI * pow(r, 3);
            return V;
        }
        int get_r(){
            return r;
        }
        void set_r(int r){
            this->r = r;
        }
};
//zdanie 3
class FunkcjaKwadratowa{
    private:
        int a;
        int b;
        int c;
    public:
        void wyswietl_funkcje(){
            cout<< "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
        }
        int get_a(){
            return a;
        }
        void set_a(int a){
            this->a = a;
        }
        int get_b(){
            return b;
        }
        void set_b(int b){
            this->b = b;
        }
        int get_c(){
            return c;
        }
        void set_c(int c){
            this->c = c;
        }
};
//zadanie 4
class Student{
    private:
        string imie;
        string nazwisko;
        int numer_albumu;
        int liczba_pytan;
        int poprawne_odpowiedzi;
    public:
        int get_numer_albumu(){
            return numer_albumu;
        }
        void set_numer_albumu(int numer_albumu){
            this->numer_albumu = numer_albumu;
        }
        int get_liczba_pytan(){
            return liczba_pytan;
        }
        void set_liczba_pytan(int liczba_pytan){
            this->liczba_pytan = liczba_pytan;
        }
        int get_poprawne_odpowiedzi(){
            return poprawne_odpowiedzi;
        }
        void set_poprawne_odpowiedzi(int poprawne_odpowiedzi){
            this->poprawne_odpowiedzi = poprawne_odpowiedzi;
        }
        string get_imie(){
            return imie;
        }
        void set_imie(string imie){
            this->imie = imie;
        }
        string get_nazwisko(){
            return nazwisko;
        }
        void set_nazwisko(string nazwisko){
            this->nazwisko = nazwisko;
        }
        double procent_poprawnych_odpowiedzi(int liczba_pytan, int poprawne_odpowiedzi){
            double procent = (double)poprawne_odpowiedzi * liczba_pytan;
         return procent;
    }
};

int main() {
    //struktury
    cout << "\nSTRUKTURY\n" << endl;
    cout << "zadanie 1\n" << endl;

    samochod samochody[4] = {{"audi", "a4", 2008, "czerwony"},
    {"bmw", "e36", 1997, "szary"},
    {"toyota", "supra", 1999, "czarny"},
    {"mercedes", "benz", 2017, "bialy"}
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
    cout <<"liczba podobnych samochodow = " << ile_podobnych_samochodw(samochody, 4) << endl;

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

    return 0;
}