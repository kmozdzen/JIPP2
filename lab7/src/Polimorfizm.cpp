#include <iostream>
#include <math.h>
#include "../include/Polimorfizm.h"

using namespace std;

Circle::Circle() : r(0) {}

Circle::Circle(double r) : r(r) {}

double Circle::getArea() {
    return M_PI * r * r;
}

Rectangle::Rectangle() : a(0), b(0) {}

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}

double Rectangle::getArea() {
    return a * b;
}


