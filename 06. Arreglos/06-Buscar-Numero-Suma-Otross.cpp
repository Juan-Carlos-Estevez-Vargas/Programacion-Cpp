/*
Diseñe un programa que lea un vector y calcule si hay un numero que
sea igual a la suma de los demas elementos del vector
*/
#include<iostream>
using namespace std;

int main() {

    int numeroElementos = 0;
    int suma = 0;

    cout << "\n\tDETERMINANDO SI EXISTE ALGÚN NÚMERO DE UN VECTOR QUE EQUIVALGA A LA SUMA DE LOS DEMÁS \n" << endl;
    cout << "Ingrese el número de elementos a operar " << endl;
    cin >> numeroElementos;

    if (numeroElementos <= 0) {
        cout << "El número de elementos debe ser mayor a 0" << endl;
        return 0;
    }

    int numeros[numeroElementos] = {}; // 5 3 10 2 = 20

    for ( int i = 0; i < numeroElementos; i++ ) { 
        cout << i << " - Ingrese un número ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    for ( int i = 0; i< numeroElementos; i++ ) {
        if (numeros[i] == suma - numeros[i]) {
            cout << "El número " << numeros[i] << " satisface la condición dada" << endl;
            return 0;
        }
    }

    cout << "No se encontró ningún elemento que satisfaga la condición dada." << endl;
    return 0;

}