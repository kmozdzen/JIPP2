#include <iostream>
#include "include/CsvLib.h"
#include <fstream>

using namespace std;

int main() {
    Csv csv(',');
    csv.CsvRead();
    csv.CsvWrite();
    return 0;
}
