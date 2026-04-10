#include <iostream>
#include <time.h>

using namespace std;

int main() {

    int numeros[10] = {0};
    int minimo = 0;
    int aux = 0;

    cout << "\n\t\tMETODO DE ORDENAMIENTO POR SELECCION" << endl << endl;
    srand(time(NULL));
    
    for ( int i = 0; i < 10; i++ ) {
        numeros[i] = rand() % 100;
        cout << numeros[i] << " - ";
    }

    // [ 0, 1, 2, 3, 4, 6, 5, 9, 8, 7]

    for ( int i = 0; i < 10; i++ ) { // i = 3
        minimo = i; // 2

        // Encontrando el número menor dentro de los números restantes a la derecha
        for ( int j = i + 1; j < 10; j++ ) { // j = 9
            if ( numeros[j] < numeros[minimo] ) { // 7 < 2
                minimo = j; // 2
            }
        }

        aux = numeros[i]; // 5
        numeros[i] = numeros[minimo]; // 0
        numeros[minimo] = aux;
    }

    cout << "\n\nArreglo ordenado" << endl << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " - ";
    }

    return 0;
}