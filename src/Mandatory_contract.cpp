#include "../include/Mandatory_contract.h"

using namespace std;

Over_26::Over_26(double brutto) : brutto(brutto) {}

double Over_26::getNetto() {
    return brutto * 0.686866666667;
}

Under_26::Under_26(double brutto) : brutto(brutto) {}

double Under_26::getNetto() {
    return brutto * 0.807533333333;
}

Student_under_26::Student_under_26(double brutto) : brutto(brutto) {}

double Student_under_26::getNetto() {
    return brutto;
}