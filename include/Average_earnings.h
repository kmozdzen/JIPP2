
#ifndef PROJEKT_KONCOWY_AVERAGE_EARNINGS_H
#define PROJEKT_KONCOWY_AVERAGE_EARNINGS_H

//klasa do obliczania sredniej zarobkow wedlug stazu pracy
//zastosowanie przeciazania operatorow
class Average_earnings{
    double sum = 0; //suma zarobkow
    int counter = 0; //licznik pracownikow spelniajacych zalozenia
public:
    Average_earnings() {};
    Average_earnings(double sum);
    Average_earnings operator+(const Average_earnings &rhs) const;
    Average_earnings &operator+=(const Average_earnings &rhs);

    void print();
};

#endif //PROJEKT_KONCOWY_AVERAGE_EARNINGS_H
