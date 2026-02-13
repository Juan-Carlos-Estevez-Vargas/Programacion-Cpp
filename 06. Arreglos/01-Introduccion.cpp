/*Diseñar un programa que defina un arreglo de numeros y calcule la suma
de sus elementos*/
#include<iostream>

using namespace std;

int main() {
    
    int suma = 0;
    // Posiciones     0  1  2  3  4  5  6  7  8  9
    int numeros[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Posición 5 del arreglo " << numeros[5] << endl;

    for (int i = 0; i < 10 ; i++) { // 2
        suma += numeros[i]; // 6
    }

    cout << "\nLa suma de los números es: " << suma << endl;

    return 0;
}
