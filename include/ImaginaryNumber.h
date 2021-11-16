
#ifndef LAB6_IMAGINARYNUMBER_H
#define LAB6_IMAGINARYNUMBER_H

class ImaginaryNumber{
private:
    double n;
public:
    ImaginaryNumber();
    ImaginaryNumber(double n);
    void print();

    ImaginaryNumber operator+(const ImaginaryNumber &rhs) const;
};

#endif //LAB6_IMAGINARYNUMBER_H
