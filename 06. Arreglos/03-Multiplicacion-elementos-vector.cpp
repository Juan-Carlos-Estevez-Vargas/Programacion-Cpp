/*Diseñe un programa que defina un vector de numeros y calcule la 
multiplicación de sus elementos*/
#include<iostream>
using namespace std;

int main () {

    int numeros[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int multiplicacion = 1; // Se inicializa en 1 para evitar errores como multiplicar siempre por 0
    
    cout << "\tMULTIPLICACION DE LOS ELEMENTOS DE UN VECTOR" << endl << endl;
    for ( int i = 0; i < 10; i++ ) {
        multiplicacion *= numeros[i];
    }

    cout << "La multiplicación es: " << multiplicacion;

    return 0;
}