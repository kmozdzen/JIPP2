#include <iostream>
#include <exception>
#include "../include/CsvLib.h"

using namespace std;

CsvException::CsvException(char * exceptionText): exceptionText(exceptionText) {}

const char *CsvException::what() {
        return exceptionText;
}