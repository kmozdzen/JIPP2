#ifndef LAB5_POJAZD_H
#define LAB5_POJAZD_H

#include <string>
using namespace std;

class Pojazd{
private:
    string nazwa;
    string marka;
    int numer_rejestracyjny;
    static string najnowsza_wersja_oprogramowania;
    string zainstalowana_wersja_oprogramowania = "v1.0";
public:
    int ilosc_miejsc;
    string *tab;

    Pojazd(int numer_rejestrayjny, string nazwa, int ilosc_miejsc, string marka);

    void wypisz_informacje() const;
    void zmien_informacje(int numer_miejsca, char informacje_o_pasazerze[20]);

    Pojazd(Pojazd& pojazd);

    string get_nazwa();
    void set_nazwa(string nazwa);

    int get_numer_rejestracyjny();
    void set_numer_rejestracyjny(int numer_rejestracyjny);

    string get_marka();

    void wypisz_wersje_oprogramowania();
    void zaktualizuj_oprogramowanie();
    static void opublikujNoweOprogramowanie(string nowa_wersja_oprogramowania);

    ~Pojazd();
};

#endif //LAB5_POJAZD_H
