/*
Diseñar un programa para rellenar una matriz pidiendo al usuario el
numero de filas y columnas, posteriormente mostrar la matriz en pantalla
*/
#include<iostream>
using namespace std;

int main() {

    int filas = 0;
    int columnas = 0;

    cout << "\n\tRELLENANDO UNA MATRIZ " << endl << endl;
    cout << "Ingrese el número de filas "; cin >> filas; // 3
    cout << "Ingrese el número de columnas "; cin >> columnas; // 4

    int matriz[filas][columnas];
    cout << endl << endl;

    for ( int i = 0; i < filas; i++ ) { // 
        for ( int j = 0; j < columnas; j++) { // 
            cout << "Ingrese el valor de la posición [" << i << "][" << j << "] - ";
            cin >> matriz[i][j];
        }
    }

    cout << endl << endl;
    cout << "Resultado" << endl << endl;

    for ( int i = 0; i < filas; i++ ) {
        for ( int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " - ";
        }
        cout << endl;
    }


    return 0;
}