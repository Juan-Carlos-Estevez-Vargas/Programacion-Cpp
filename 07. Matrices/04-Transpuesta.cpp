/*Realice un programa que lea una matriz 3x3 y haga la matriz transpuesta*/
#include<iostream>
using namespace std;

int main() {

    int filas = 0;
    int columnas = 0;

    cout << "\n\tMATRIZ TRANSPUESTA" << endl << endl;
    cout << "Ingrese el número de filas "; cin >> filas; // 2
    cout << "Ingrese el número de columnas "; cin >> columnas; // 3
    
    int matriz[filas][columnas];

    for ( int i = 0; i < filas; i++ ) { // 
        for ( int j = 0; j < columnas; j++) { // 
            cout << "Ingrese el valor de la posición [" << i << "][" << j << "] - ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << "\n MATRIZ ORIGINAL" << endl << endl;
    for ( int i = 0; i < filas; i++ ) { // 
        for ( int j = 0; j < columnas; j++) { // 
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for ( int i = 0; i < columnas; i++ ) { // 2
        for ( int j = 0; j < filas; j++ ) { // 3
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}