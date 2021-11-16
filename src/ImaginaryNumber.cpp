#include "../include/ImaginaryNumber.h"
#include <iostream>
#include <math.h>

using namespace std;

ImaginaryNumber::ImaginaryNumber(): n(0){}

ImaginaryNumber::ImaginaryNumber(double n): n(n){}

void ImaginaryNumber::print(){
    cout << n << "i";
}

ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber &rhs) const {
    return {(n + rhs.n)};
}