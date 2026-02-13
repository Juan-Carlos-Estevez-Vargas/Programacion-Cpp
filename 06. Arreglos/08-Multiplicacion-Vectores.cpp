/**
 * Llene dos vectores y multipliquelos valor a valor
 * 
 * [ 2, 7, 9, 3 ]
 * [ 3, 5, 1, 0 ]
 * 
 * [ 6, 35, 9, 0 ]
 */
#include<iostream>
using namespace std;

int main() {

    int numeroElementos = 0;
    string resultadoMultiplicacionVectores = "[ ";

    cout << "\n\tMULTIPLICACIÓN DE VECTORES" << endl << endl;
    cout << "Ingrese el número de elementos a operar los vectores ";
    cin >> numeroElementos;

    int numeros1[numeroElementos] = {};
    int numeros2[numeroElementos] = {};

    cout << "\nLlenando arreglos" << endl;
    for ( int i = 0; i < numeroElementos; i++ ) { 
        cout << i << " - Ingrese un número (A) ";
        cin >> numeros1[i];

        cout << i << " - Ingrese un número (B) ";
        cin >> numeros2[i];

        resultadoMultiplicacionVectores += to_string(numeros1[i] * numeros2[i]).append(", ");
    }

    resultadoMultiplicacionVectores += "]";
    cout << "\n" << resultadoMultiplicacionVectores;

    return 0;
}

