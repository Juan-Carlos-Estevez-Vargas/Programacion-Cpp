/*Pedir al usuario dos cadenas de caracteres, una de números enteros
y otra de números flotantes, convertirlos y sumarlos*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char cadenaInt[10];
    char cadenaFloat[10];
    
    cout << "\t\t\nCONVERTIDOR CADENAS A NUMEROS" << endl;
    cout << "Digite un numero entero por favor -> ";
    cin.getline(cadenaInt, 10);

    cout << "Digite un numero float por favor -> ";
    cin.getline(cadenaFloat, 15);

    int entero = atoi(cadenaInt);
    float decimal = atof(cadenaFloat);

    cout << "Entero " << entero << endl;
    cout << "Flotante " << decimal << endl;
    cout << "Suma " << entero + decimal;

    return 0;
}
