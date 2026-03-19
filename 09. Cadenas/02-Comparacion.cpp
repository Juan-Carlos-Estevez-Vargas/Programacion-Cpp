/*
Pedir al usuario que digite dos cadenas de caracteres, e indicar 
si son iguales; en caso de no serlo indicar cual es mayor alfabeticamente
*/
#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string cadena1 = "";
    string cadena2 = "";

    cout << "Digite la cadena 1 -> ";
    getline(cin, cadena1);

    cout << "Digite la cadena 2 -> ";
    getline(cin, cadena2);

    if (cadena1 == cadena2) cout << "iGUALES";
    else if (cadena1 > cadena2) cout << "CADENA 1 MAYOR ALFABETICAMENTE";
    else cout << "Cadena 2 mayor alfabeticamente";

    return 0;
}