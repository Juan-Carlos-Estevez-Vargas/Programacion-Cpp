/*Diseñe una matriz nxn y muestre en pantalla la diagonal principal*/
#include<iostream>
using namespace std;

int main() {

    int filasColumnas = 0;

    cout << "\nDIAGONAL PRINCIPAL DE UNA MATRIZ " << endl << endl;
    cout << "Ingrese el número de filas y columnas "; cin >> filasColumnas; // 4

    if (filasColumnas <= 0) {
        cout << "El tamaño debe ser mayor que 0.\n";
        return 1;
    }

    int matriz[filasColumnas][filasColumnas];
    cout << endl << endl;

    for ( int i = 0; i < filasColumnas; i++ ) { // 
        for ( int j = 0; j < filasColumnas; j++) { // 
            cout << "Ingrese el valor de la posición [" << i << "][" << j << "] - ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "MATRIZ" << endl << endl;

    for ( int i = 0; i < filasColumnas; i++ ) { // 
        for ( int j = 0; j < filasColumnas; j++) { // 
            cout << matriz[i][j] << " - ";
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "Resultado" << endl << endl;

    for ( int i = 0; i < filasColumnas; i++ ) { // 
        for ( int j = 0; j < filasColumnas; j++) { // 
            if ( i != j ) matriz[i][j] = 0;
            cout << matriz[i][j] << " - ";
        }
        cout << endl;
    }

    return 0;
}