/*
Diseñe un programa que lea de la entrada estandar un vector de números
y muestre en la salida estandar el mayor de sus elementos
*/
#include<iostream>
using namespace std;

int main() {

    int numeroElementos = 0;
    int mayor = 0;

    cout << "Ingrese el número de elementos a operar " << endl;
    cin >> numeroElementos;

    if (numeroElementos <= 0) {
        cout << "El número de elementos debe ser mayor a 0" << endl;
        return 0;
    }

    int numeros[numeroElementos] = {};

    for ( int i = 0; i < numeroElementos; i++ ) { // 7 1 4 9
        cout << i << " - Ingrese un número ";
        cin >> numeros[i];

        if (i == 0) {
            mayor = numeros[i];
        }

        if (numeros[i] > mayor) {
            mayor = numeros[i]; // 9
        }
    }

    cout << "\nEl número mayor es: " << mayor;

    return 0;
}
