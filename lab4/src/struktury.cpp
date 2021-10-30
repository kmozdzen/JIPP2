#include <iostream>
#include "library.h"
#include <string.h>
//struktury


//zadanie 3
int ile_podobnych_samochodw(struct samochod samochody[], int liczba_elementow){
    int podobne = 1;
    for(int i = 0; i < liczba_elementow; i++){
        for(int j = i + 1; j < liczba_elementow; j++){
            if(strcmp(samochody[i].marka, samochody[j].marka) == 0){
                podobne++;
            }
        }
    }
    return podobne;
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
