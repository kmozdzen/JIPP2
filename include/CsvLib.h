
#ifndef LAB10_1_CSVLIB_H
#define LAB10_1_CSVLIB_H
#include <vector>
#include <exception>
using namespace std;

class Csv{
    vector <string> data;
    char separator;
    string temp;
public:
    Csv(char separator);

    void CsvRead();
    void CsvWrite();
};

class CsvException: public exception {
private:
    char *exceptionText;

public:
    CsvException(char * exceptionText);

    const char * what();
};

#endif //LAB10_1_CSVLIB_H
