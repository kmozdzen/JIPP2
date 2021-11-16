
#ifndef LAB6_TRIANGLE_H
#define LAB6_TRIANGLE_H
#include "../include/Node.h"
#include <string.h>

class Triangle{
private:
    Node a;
    Node b;
    Node c;
    std::string triangleName;
    Node vertices[3] = {a, b, c};
public:
    Triangle(Node a, Node b, Node c, std::string triangleName);
    void display();

    friend std::ostream &operator<<(std::ostream  &lhs, const Triangle &rhs);

    double distance(int firstPointIndex, int secondPointIndex);
};

std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs);

void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);

#endif //LAB6_TRIANGLE_H
