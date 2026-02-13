/*
Diseñe un programa que lea de la entrada estandar un vector de números
y muestre en la salida estandar sus elementos y su índice en posicion 
*/
#include<iostream>
using namespace std;

int main() {
    int elementos = 0;

    cout << "\tMOSTRANDO LA POSICION E INDICE DE LOS ELEMENTOS DE UN VECTOR" << endl << endl;
	cout << "\nDigite el numero de elementos de el vector "; 
    cin >> elementos;

    int numeros[elementos] = {};

    for ( int i = 0; i < elementos; i++ ) {
        cout << "Ingrese un elemento " << endl;
        cin >> numeros[i];
    }

    for ( int i = 0; i < elementos; i-- ) {
        cout << i << " -> " << numeros[i] << endl;
    }

    return 0;
}