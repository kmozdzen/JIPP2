#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Przeciązanie funckji
//zadanie 1
int pole(int a){
    return a * a;
}

int pole(int a, int b){
    return a * b;
}
//Funkcja przyjmująca tablicę i dokonująca na niej obliczeń
//zadanie 1
int losowa(int min, int max){
    return rand()%max + min;
}

//zadanie 2
void wypisz_tablice(int tab[], int rozmiar){
    for(int i = 0; i < rozmiar; i++){
        cout << tab[i] << endl;
    }
}

int najwieksza_wartosc_tablicy(int tab[], int rozmiar){
    int max = tab[0];
    for (int i = 0; i < rozmiar; i++){
        if(max < tab[i])
            max = tab[i];
    }
    return max;
}

//zadanie 3

void odwrocenie_tablicy(int tab[], int rozmiar){
    for(int i = 0; i < rozmiar/2; i++){
        int pom = tab[i];
        tab[i] = tab[rozmiar - 1 - i];
        tab[rozmiar - 1 - i] = pom;
    }
}
//Przekazywanie przez wskaźnik
//zadanie 1

double srednia_wskazniki(int *a, int *b){
    return double(*a + *b) / 2;
}

//zadanie 2
void elementy_wieksze_od_0(int *w){
    for(int i = 0; i < 5; i++){
        if((*(w + i)) > 0 )
            cout << *(w + i) << endl;
    }
}

//zadanie 3
void sortowanie(int *z,int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++) //pętla wewnętrzna
            if(*(z + j-1)>*(z + j)) {
                int pom = *(z + j);
                *(z + j) = *(z + j-1);
                *(z + j-1) = pom;
            }
    for(int k = 0; k < n; k++){
        cout << *(z + k) << endl;
    }
}

//zadanie 4
void funkjcja(int x, int *w){
    *w = x;
}

//Obsługa błędów
//zadanie 1
void liczby_naturalne(int a, int b){
    if (a%b > 0)
        throw "Wynik nie moze byc ulamkiem";
}

//zadanie 2
void string_to_int(char tab[]){
    int i = 0;
    while(tab[i] != '\0'){
        if(tab[i] < 48 || tab[i] > 57){
            throw "Podano bledne znaki";
            break;
        }
        i++;
    }

    int v = atoi(tab);
    cout << v << endl;

    if (v > 2147483647)
        throw "Liczba jest za duza";
}

using namespace std;
int main(){
    cout << "---------Przeciazanie funckji---------" << endl; //Przeciązanie funckji
    //zadanie 1
    cout << "\nzadanie 1\n" << endl;
    cout << "pole kwadratu = " << pole(2) << endl;
    cout << "pole prostokata = " << pole(2, 4) << endl;

    cout << "---------Funkcja przyjmujaca tablice i dokonujaca na niej obliczen---------" << endl; // Funkcja przyjmująca tablicę i dokonująca na niej obliczeń
    //zadanie 1
    cout << "\nzadanie 1\n" << endl;
    srand(time(NULL));
    int min = 1;
    int max = 5;
    cout <<"Wartosc losowa z przedzialu (" << min << ", " << max << ") = " << losowa(1, 5) << endl;

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;
    int rozmiar = 6;
    int *tab = new int[rozmiar];

    for(int i = 0; i < rozmiar; i++){
        int r = rand()%100 + 1;
        tab[i] = r;
    }
    cout << "Najwieksza wartosc tablicy = " << najwieksza_wartosc_tablicy(tab, rozmiar) << endl;

    //zadanie 3
    cout << "\nzadanie 3\n" << endl;
    wypisz_tablice(tab, rozmiar);
    cout <<"\n";
    odwrocenie_tablicy(tab, rozmiar);
    wypisz_tablice(tab, rozmiar);

    cout << "---------Przekazywanie przez wskaznik---------" << endl; //Przekazywanie przez wskaźnik
    //zadanie 1
    cout << "\nzadanie 1\n" << endl;
    int a = 3;
    int b = 6;
    double srednia = srednia_wskazniki(&a, &b);
    cout << "srednia = " << srednia << endl;

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;
    int tab2[] = {4, -7, -5, 3, -1};
    elementy_wieksze_od_0(tab2);

    //zadanie 3
    cout << "\nzadanie 3\n" << endl;
    sortowanie(tab, rozmiar);

    //zadanie 4
    cout << "\nzadanie 4\n" << endl;
    int x = 30;
    funkjcja(14, &x);
    cout << x << endl;

    cout << "---------Obsluga bledow---------" << endl; //Obsługa błędów
    //zadanie 1
    cout << "\nzadanie 1\n" << endl;
    int aa = 2;
    int bb = 3;
    int wynik;

    try{
        liczby_naturalne(aa, bb);
    }
    catch(const char * e) {
        cout << e << endl;
    }

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;
    try{
        string_to_int("2147g3647");
    }
    catch(const char * msg){
        cout << msg << endl;
    }

    return 0;
}