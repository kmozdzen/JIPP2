#include "../include/Vector.h"
#include <iostream>
#include <math.h>


using namespace std;


Vector::Vector() {
    x = 0;
    y = 0;
}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
        return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
};

Vector& Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector& Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

Vector Vector::operator-() const {
    return {-x, -y};
}

Vector Vector::operator*(const double &rhs) const {
    return {x * rhs, y * rhs};
}

double Vector::operator*(const Vector &rhs) const {
    return x * rhs.x + y * rhs.y;
}

bool Vector::operator==(const Vector &rhs) const {
    return x==rhs.x && y==rhs.y;
};

void Vector::print() {
    cout << "x: " << x << " y: " << y << endl;
}

Vector operator*(const double &lhs, const Vector &rhs){
    return {rhs.x * lhs, rhs.y * lhs};
}

std::ostream &operator<<(std::ostream  &lhs, const Vector &rhs){
    return lhs<<"[" << rhs.x << ", " << rhs.y << "]";
}
