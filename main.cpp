#include <iostream>
#include "include/Node.h"
#include "include/Vector.h"
using namespace std;

int main() {
    Node a;
    Node b;

    a.updateValue(2, 5);
    b.updateValue(5, 9);

    double distance = pointsDistance(a, b);
    cout <<"dystans miedzy a i b: "<< distance << endl;

    Vector v1(1, 2), v2(5,10);

    cout << "\nwektor 1" << endl;
    v1.print();
    cout << "\nwektor 2" << endl;
    v2.print();

    cout << "\nwynik dodawania" << endl;
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    v3.print();

    cout << "\nwynik odejmowania" << endl;
    Vector v4 = v1 - v2;
    v4 = v1.operator-(v2);
    v4.print();

    cout << "\nwektor przeciwny do wektora 1" << endl;
    Vector v5 = -v1;
    v5.print();

    cout << "\nmnozenie przez skalar" << endl;
    double scalar = 3;
    Vector v6 = v1 * scalar;
    v6.print();

    cout << "\niloczyn skalarny wektorow" << endl;
    Vector v7 = v1 * v2;
    v7 = v1.operator*(v2);
    v7.print();

    cout << "\nporownanie wektorow" << endl;
    Vector v8 = v1 = v2;
    v8 = v1.operator=(v2);
    v8.print();

    return 0;
}