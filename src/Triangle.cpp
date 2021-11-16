#include <iostream>
#include "../include/Triangle.h"
#include "../include/Node.h"

using namespace std;

Triangle::Triangle(Node a, Node b, Node c, std::string triangleName): a(a), b(b), c(c), triangleName(triangleName){}

void Triangle::display() {
    cout << "a = ";
    a.display();
    cout << "b = ";
    b.display();
    cout << "c = ";
    c.display();
}

std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs){
    return lhs << rhs.triangleName << " a(" << rhs.a << ")" << " b(" << rhs.b << ")" << " c(" << rhs.c << ")";
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    return pointsDistance(vertices[firstPointIndex], vertices[secondPointIndex]);
}
void showTriangleData(Triangle triangle){
    triangle.display();
}
void showTriangleData(Triangle &triangle){
    triangle.display();
}
void showTriangleData(Triangle *triangle){
    (*triangle).display();
}