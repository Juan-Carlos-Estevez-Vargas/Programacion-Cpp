/* 1. Escribe un programa que lea de la entrada estandar dos números
y muestre en la salida estandar su suma, resta, multiplicación y división */
#include <iostream>
using namespace std;

int main()
{
    // Definir e inicializar las variables
    int numero1, numero2, suma, resta, multiplicacion, division = 0;

    cout << "Por favor digite el valor del número 1 -> " << endl;
    cin >> numero1;

    cout << "Por favor digite el valor del número 2 -> " << endl;
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout << "---------------------------------" << endl;
    cout << "-      Resultado                -" << endl;
    cout << "---------------------------------" << endl;
    cout << "1. Suma = " << suma << endl;
    cout << "1. Resta = " << resta << endl;
    cout << "1. Multiplicación = " << multiplicacion << endl;
    cout << "1. División = " << division << endl;

    system("pause");
    return 0;
}