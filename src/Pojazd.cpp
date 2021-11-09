#include "Pojazd.h"
#include <iostream>


using namespace std;

Pojazd::Pojazd(int numer_rejestrayjny, string nazwa, int ilosc_miejsc, string marka) {
    tab = new string[ilosc_miejsc];
    for (int i = 0; i < ilosc_miejsc; i++){
        tab[i] = "puste";
    }

    this->numer_rejestracyjny = numer_rejestrayjny;
    this->nazwa = nazwa;
    this->ilosc_miejsc= ilosc_miejsc;
    this->marka = marka;
}

Pojazd::Pojazd(Pojazd& pojazd){
    numer_rejestracyjny = pojazd.numer_rejestracyjny;
    nazwa = pojazd.nazwa;
    ilosc_miejsc = pojazd.ilosc_miejsc;
    marka = pojazd.marka;
    tab = new string[ilosc_miejsc];
    for (int i = 0; i < ilosc_miejsc; i++){
        tab[i] = pojazd.tab[i];
    }
}

void Pojazd::wypisz_informacje() const {
    cout<< "numer rejestacyjny: " << this->numer_rejestracyjny << endl;
    cout<< "marka: " << this->marka << endl;
    cout<< "nazwa: " << this->nazwa<< endl;
    cout<< "ilosc miejsc: " << this->ilosc_miejsc<< endl;
    for(int i =0; i < ilosc_miejsc; i++){
        cout << "miesjce " << i + 1 << ": " << tab[i] << endl;
    }
}

void Pojazd::zmien_informacje(int numer_miejsca, char informacje_o_pasazerze[20]) {
    tab[numer_miejsca - 1] = informacje_o_pasazerze;
}

Pojazd::~Pojazd(){
    delete [] tab;
};

string Pojazd::get_nazwa() {
        return nazwa;
}

void Pojazd::set_nazwa(string nazwa){
        this->nazwa = nazwa;
}

int Pojazd::get_numer_rejestracyjny(){
    return  numer_rejestracyjny;
}
void Pojazd::set_numer_rejestracyjny(int numer_rejestracyjny){
    this->numer_rejestracyjny = numer_rejestracyjny;
}

string Pojazd::get_marka(){
    return marka;
}

void Pojazd::wypisz_wersje_oprogramowania(){
    cout<<"wersja oprogramowania: " << zainstalowana_wersja_oprogramowania << endl;
}

void Pojazd::zaktualizuj_oprogramowanie(){
        zainstalowana_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
}

void Pojazd::opublikujNoweOprogramowanie(string nowa_wersja_oprogramowania){
    najnowsza_wersja_oprogramowania = nowa_wersja_oprogramowania;
}