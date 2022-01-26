

#include "../include/Employee_write_read.h"

using namespace std;

Employee_exception::Employee_exception(char * exceptionText): exceptionText(exceptionText) {}

const char *Employee_exception::what() {
    return exceptionText;
}