
#ifndef PROJEKT_KONCOWY_SECURITY_H
#define PROJEKT_KONCOWY_SECURITY_H

//zabezpieczenie przed wpisywanie blednych danych przez uzytkownika
void security(string data, int *new_data); //zabezpieczenie przed wpisywaniem nie liczb
void security(string data, int *new_data, int *lock); //zabezpieczenie przed wpisywaniem nie liczb z blokada
void security(string data, double *new_data); //zabezpieczenie przed wpisywaniem nie liczb zmiennoprzecinkowych
bool security(string data); //zabezpieczenie przed wpisywaniem czego innego niz litry

#endif //PROJEKT_KONCOWY_SECURITY_H
