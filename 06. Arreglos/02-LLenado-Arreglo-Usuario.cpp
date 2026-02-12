/*Diseñe un programa que lea de la entrada estandar un vector de números
y muestre en la salida estandar sus elementos y su índice*/
#include<iostream>
using namespace std;

int main() {

    int numeroElementos = 0;

    cout << "Ingrese el número de elementos (o Tamaño) del arreglo " << endl;
    cin >> numeroElementos;

    int numeros[numeroElementos] = {};

    for (int i = 0; i < numeroElementos; i++) {
        cout << "Ingrese el valor de la posición " << i << " - ";
        cin >> numeros[i];
    }

    for (int i = 0; i < numeroElementos; i++) {
        cout << "Elemento " << i << " - " << numeros[i] << endl;
    }

    return 0;
}