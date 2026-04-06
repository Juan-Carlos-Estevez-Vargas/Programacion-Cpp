#include <iostream>
using namespace std;

int main() {
    int numeros[] = { 10, 1, 7, 6, 3, 9, 2, 5, 4, 8 };
    // 1 3 2 5 4 6 7 8 9 10
    int aux = 0;

    cout << "\n\t\tORDENAMIENTO BURBUJA" << endl << endl;
    for ( int i = 0; i < 10; i++ ) { // i = 1 numero = 1
        for ( int j = 0; j < 10; j++ ) { // j = 0
            if (numeros[j] > numeros[j + 1]) { // 6 > 7
                aux = numeros[j]; // aux = 10
                numeros[j] = numeros[j + 1]; // 7
                numeros[j + 1] = aux; // 10
            }
        }
    }

    cout << "Arreglo ordenado " << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " - ";
    }

    return 0;
}