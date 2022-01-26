#include <iostream>
#include "../include/Transformation.h"

using namespace std;

int string_to_int(string line){
    int number = 0;
    int i = 0;
    while(line[i] != '\0'){
        number = number*10;
        number += ((int)line[i] - 48);
        i++;
    }
    return number;
}

double string_to_double(string line){
    double number = 0;
    int i = 0;
    while(line[i] != '\0'){
        number = number*10;
        number += ((double)line[i] - 48);
        i++;
    }
    return number;
}
