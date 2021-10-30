#include <iostream>
#include "library.h"
#include <string.h>
#include <math.h>

using namespace std;

//klasy

int Prostopadloscian::pole() {
    return 2 * (a * b + a * c + b * c);
}
int Prostopadloscian::get_a() {
    return a;
}
void Prostopadloscian::set_a(int a) {
    this->a = a;
}
int Prostopadloscian::get_b() {
    return b;
}
void Prostopadloscian::set_b(int b) {
    this->b = b;
}
int Prostopadloscian::get_c() {
    return c;
}
void Prostopadloscian::set_c(int c) {
    this->c = c;
}


double Kula::objetosc_kuli() {
    double V = (double)4/3 * M_PI * pow(r, 3);
    return V;
}
int Kula::get_r(){
    return r;
}
void Kula::set_r(int r){
    this->r = r;
}

//zdanie 3

void FunkcjaKwadratowa::wyswietl_funkcje() {
    cout<< "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}
int FunkcjaKwadratowa::get_a(){
    return a;
}
void FunkcjaKwadratowa::set_a(int a){
    this->a = a;
}
int FunkcjaKwadratowa::get_b(){
    return b;
}
void FunkcjaKwadratowa::set_b(int b){
    this->b = b;
}
int FunkcjaKwadratowa::get_c(){
    return c;
}
void FunkcjaKwadratowa::set_c(int c){
    this->c = c;
}

int Student::get_numer_albumu(){
    return numer_albumu;
}
void Student::set_numer_albumu(int numer_albumu){
    this->numer_albumu = numer_albumu;
}
int Student::get_liczba_pytan(){
    return liczba_pytan;
}
void Student::set_liczba_pytan(int liczba_pytan){
    this->liczba_pytan = liczba_pytan;
}
int Student::get_poprawne_odpowiedzi(){
    return poprawne_odpowiedzi;
}
void Student::set_poprawne_odpowiedzi(int poprawne_odpowiedzi){
    this->poprawne_odpowiedzi = poprawne_odpowiedzi;
}
string Student::get_imie(){
    return imie;
}
void Student::set_imie(string imie){
    this->imie = imie;
}
string Student::get_nazwisko(){
    return nazwisko;
}
void Student::set_nazwisko(string nazwisko){
    this->nazwisko = nazwisko;
}
double Student::procent_poprawnych_odpowiedzi(int liczba_pytan, int poprawne_odpowiedzi){
    double procent = (double)poprawne_odpowiedzi * liczba_pytan;
    return procent;
}

