#include <iostream>

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
int ile_podobnych_samochodw(struct samochod samochody[], int liczba_elementow){
    int podobne_samochody = 0;

    for (int i = 0; i < liczba_elementow - 1; i++){
        for(int j = i + 1; j < liczba_elementow; j++){
            if(samochody[i].liczba_drzwi == samochody[j].liczba_drzwi){
                //cout << samochody[i].liczba_drzwi << "  " << samochody[j].liczba_drzwi << endl;
                podobne_samochody++;
            }
        }
    }
    return podobne_samochody;
}

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
    public:
        int a;
        int b;
        int c;

        int pole(){
            return 2 * (a * b + a * c + b * c);
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
    prostopadloscian.a = 3;
    prostopadloscian.b = 4;
    prostopadloscian.c = 5;
    int pole = prostopadloscian.pole();
    cout << "pole = " << pole << endl;

    //zadanie 2
    cout << "\nzadanie 2\n" << endl;

    return 0;
}