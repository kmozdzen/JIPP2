#include <iostream>
#include "../include/Average_earnings.h"

using namespace std;

Average_earnings::Average_earnings(double sum) : sum(sum){}

Average_earnings Average_earnings::operator+(const Average_earnings &rhs) const {
    return {sum + rhs.sum};
}

Average_earnings &Average_earnings::operator+=(const Average_earnings &rhs) {
    counter++;
    this->sum = this->sum + rhs.sum;
    return *this;
}

void Average_earnings::print() {
    if (counter == 0 || counter == 1)
        cout << sum<< endl; //wypisanie sredniej
    else
        cout << sum/counter<< endl; //wypisanie sredniej
}