#include <iostream>
#include "include/Node.h"
#include "include/Vector.h"
#include "include/Triangle.h"
#include "include/ImaginaryNumber.h"
using namespace std;

int main() {
    //node
    Node a;
    Node b;

    a.updateValue(2, 5);
    b.updateValue(5, 9);

    double distance = pointsDistance(a, b);
    cout <<"dystans miedzy a i b: "<< distance << endl;

    //vectors
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

    cout << "\niloczyn skalarny wektorow: ";
    cout <<  v1 * v2 << endl;

    cout << "\nporownanie wektorow" << endl;
    if(v1 == v2)
        cout << "wektory sa rowne" << endl;
    else
        cout << "wektory nie sa rowne" << endl;

    cout << endl;

    Vector v7(5, -3);
    cout << v7 << endl;
    cout << endl;

    //imaginary numbers
    ImaginaryNumber imaginaryNumber1(3);
    ImaginaryNumber imaginaryNumber2(4);
    ImaginaryNumber imaginaryNumber3 = imaginaryNumber1 + imaginaryNumber2;
    imaginaryNumber3.print();
    cout << "\n\n";

    //triangle
    Node aa, bb(5,8), cc(1, 16);
    Triangle triangle(aa, bb, cc, "First Triangle");

    triangle.display();
    cout << triangle << endl;

    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;

    //Triangle triangle nie kompiluje sie
    cout << endl;
    showTriangleData(&triangle);

    return 0;
}