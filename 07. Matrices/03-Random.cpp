/*
Hacer una matriz de n filas y n columnas, llenarla de números aleatorias
pasarlo a otra matriz y mostrarla en pantalla
*/
#include<iostream>
#include<time.h>
using namespace std;

int main() {

    int numeroFilasColumnas = 0;
    int random = 0;

    cout << "\tCOPIANDO MATRIZ RANDOM A OTRA \n\n";
    cout << "Ingrese el tamaño de la matriz (n x n) "; cin >> numeroFilasColumnas;

    int matriz[numeroFilasColumnas][numeroFilasColumnas];
    int matrizCopia[numeroFilasColumnas][numeroFilasColumnas];
    srand(time(NULL));

    for ( int i = 0; i < numeroFilasColumnas; i++ ) {
        for ( int j = 0; j < numeroFilasColumnas; j++ ) {
            random = 1 + rand() % 100;
            cout << "Random -> " << random << " ";
            matriz[i][j] = random;
            matrizCopia[i][j] = random;
        }
        cout << endl;
    }

    cout << endl << endl;

    for ( int i = 0; i < numeroFilasColumnas; i++ ) {
        for ( int j = 0; j < numeroFilasColumnas; j++ ) {
            cout << matrizCopia[i][j] << " - ";
        }
        cout << endl;
    }

    return 0;
}