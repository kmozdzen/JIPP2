#include <iostream>
#include "../include/CsvLib.h"
#include <fstream>
#include <vector>

using namespace std;

Csv::Csv(char separator) : separator(separator) {}

void Csv::CsvRead() {
    ifstream database("database.csv");
    try {
        if (database.is_open()) {
            char sign;
            while (!database.eof()) {
                database.get(sign);
                if (sign != separator) {
                    temp.push_back(sign);
                } else {
                    data.push_back(temp);
                    cout << data.back() << endl;
                    temp = "";
                }
            }
            if (temp != "") {
                temp.pop_back();
                data.push_back(temp);
                cout << data.back() << endl;
            }
            database.close();
        } else {
            throw invalid_argument("error while opening file");
        }
    }
        catch(const invalid_argument &e){
            cout << e.what() << endl;
        }
}

void Csv::CsvWrite() {
    ofstream output("changed_database.csv");
    try {
    if(output.is_open()) {
        vector<string>::iterator ptr;
        for(ptr = data.begin(); ptr < data.end(); ptr++){
            output << *ptr;
            if(ptr+1 != data.end())
                output << separator;
        }
        output.close();
    } else {
        throw invalid_argument("error on opening file");
    }
    }
    catch(const invalid_argument &e){
        cout << e.what() << endl;
    }
}

using namespace std;
