/*Diseñe un programa que calcule el producto de dos matrices nxn*/
#include <iostream>
#include <vector>
using namespace std;

void llenarMatriz(vector<vector<int>>&, int, int);

int main() {

    cout << "\n\t\tMULTIPLICACIÓN DE MATRICES NXN" << endl << endl;

    int filas = 0;
    int columnas = 0;

    cout << "Ingrese el número de filas "; cin >> filas; 
    cout << "Ingrese el número de columnas "; cin >> columnas; 

    if (filas != columnas) {
        cout << "La matriz no es cuadrada, por ende, NO se realizará ningún proceso ";
        return 0;
    }

    vector<vector<int>> matriz(filas, vector<int>(columnas)); // int [filas][columnas]
    vector<vector<int>> matriz2(filas, vector<int>(columnas));
    vector<vector<int>> matriz3(filas, vector<int>(columnas));

    cout<<"\n LLENANDO MATRIZ A"<<endl<<endl;
    llenarMatriz(matriz, filas, columnas);

    cout<<"\n LLENANDO MATRIZ B"<<endl<<endl;
    llenarMatriz(matriz2, filas, columnas);

    for (int i = 0; i < filas; i++) { // FILAS - 0
        for (int j = 0; j < columnas; j++) { // COLUMNAS - 0
            for (int k = 0; k < columnas; k++) { // ELEMENTOS - 0
                matriz3[i][j] += matriz[i][k] * matriz2[k][j]; // (1, 1) = 14
            }
        }
    }

    for ( int i = 0; i < filas; i++ ) { // 
        cout << endl;
        for ( int j = 0; j < columnas; j++) { // 
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void llenarMatriz(vector<vector<int>>& matriz, int filas, int columnas) {
    for ( int i = 0; i < filas; i++ ) { // 
        for ( int j = 0; j < columnas; j++) { // 
            cout << "Ingrese el valor de la posición [" << i << "][" << j << "] - ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }
}