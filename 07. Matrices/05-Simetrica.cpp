/*Diseñar un programa que calcule si una matriz es simetrica o no*/
#include <iostream>
using namespace std;

int main() {

    int filas = 0;
    int columnas = 0;

    cout << "\n\tMATRIZ SIMÉTRICA" << endl << endl;
    cout << "Ingrese el número de filas "; cin >> filas; // 2
    cout << "Ingrese el número de columnas "; cin >> columnas; // 3

    if (filas != columnas) {
        cout << "La matriz no es cuadrada, por ende, NO es simétrica ";
        return 0;
    }
    
    int matriz[filas][columnas];

    for ( int i = 0; i < filas; i++ ) { // 
        for ( int j = 0; j < columnas; j++) { // 
            cout << "Ingrese el valor de la posición [" << i << "][" << j << "] - ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << endl;
    for ( int i = 0; i < columnas; i++ ) { // 2
        for ( int j = 0; j < filas; j++ ) { // 3
            if (matriz[i][j] != matriz[j][i]) {
                cout << "La matriz no es simétrica " << endl;
                return 0;
            }
        }
        cout << endl;
    }

    cout << "La matriz es simétrica";

    return 0;
}