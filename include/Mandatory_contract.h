
#ifndef PROJEKT_KONCOWY_MANDATORY_CONTRACT_H
#define PROJEKT_KONCOWY_MANDATORY_CONTRACT_H

//klasa abstrakcyjna okreslajaca umowe zlecenie
class Mandatory_contract{
public:
    virtual double getNetto() = 0; //metoda wirtualna ktora zwraca wartosc netto
};

//klasa dla pracownikow powyzej 26 roku zycia
class Over_26 : public Mandatory_contract{
double brutto;
public:
    Over_26(double brutto);

    virtual double getNetto();
};

//klasa dla pracownikow ponizej 26 roku zycia
class Under_26 : public Mandatory_contract{
    double brutto;
public:
    Under_26(double brutto);

    virtual double getNetto();
};

//klasa dla pracownikow ponizej 26 roku zycia i studentow
class Student_under_26 : public Mandatory_contract{
    double brutto;
public:
    Student_under_26(double brutto);

    virtual double getNetto();
};


#endif //PROJEKT_KONCOWY_MANDATORY_CONTRACT_H
