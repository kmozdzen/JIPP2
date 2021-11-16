

#ifndef LAB6_NODE_H
#define LAB6_NODE_H
#include <iostream>

class Node {
private:
    double x, y;
public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node, Node);
    friend std::ostream &operator<<(std::ostream& lhs, const Node &rhs);
};

std::ostream &operator<<(std::ostream& lhs, const Node &rhs);

double pointsDistance(Node a, Node b);

#endif //LAB6_NODE_H
