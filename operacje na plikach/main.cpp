#include <iostream>
#include <fstream>
#include <string>

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

int main(){
    ofstream autobus("autobus.csv");
    ofstream tramwaj("tramwaj.csv");
    ifstream data("dataQuotes.csv");
    if(data.is_open()) {
        string firstLine;
        getline(data, firstLine);
        string line;
        string number_line;
        while(!data.eof()){
            getline(data, line);
            int i = 0, number;
            while(line[i] != ','){
                number_line[i] = line[i];
                i++;
            }
            number = string_to_int(number_line);
            number_line = "\0";
            if(number < 100){
                tramwaj << line;
            }
            else if (number >= 100 && number <= 999){
                autobus << line;
            }
        }
        data.close();
    } else {
        cout << "Error on opening file" << endl;
        exit(1);
    }
    autobus.close();
    tramwaj.close();
   return 0;
}
