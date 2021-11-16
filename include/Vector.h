
#ifndef LAB6_VECTOR_H
#define LAB6_VECTOR_H
#include <iostream>

class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    Vector operator+(const Vector &rhs) const;
    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;
    Vector &operator-=(const Vector &rhs);

    Vector operator-() const;

    Vector operator*(const double &rhs) const;

    double operator*(const Vector &rhs) const;

    bool operator==(const Vector &rhs) const;

    friend Vector operator*(const double &lhs, const Vector &rhs);
    friend std::ostream &operator<<(std::ostream  &lhs, const Vector &rhs);

    void print();
};

Vector operator*(const double &lhs, const Vector &rhs);
std::ostream &operator<<(std::ostream &lhs, const Vector &rhs);

#endif //LAB6_VECTOR_H
