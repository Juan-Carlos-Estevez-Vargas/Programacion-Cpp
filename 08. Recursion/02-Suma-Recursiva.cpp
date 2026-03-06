// Realice una función recursiva que sume los primeros n enteros positivos.
#include <iostream>
using namespace std;

unsigned long long sumaRecursiva(unsigned long long);

int main() {
    unsigned long long numeroElementos = 0;

    do {
        cout << "\nIngrese el número de elementos "; cin >> numeroElementos;
    } while (numeroElementos <= 0);

    cout << "\nLa suma es: " << sumaRecursiva(numeroElementos);
    return 0;
}

unsigned long long sumaRecursiva(unsigned long long numero) { // 7
    unsigned long long suma = 0;

    if (numero == 1) {
        suma = 1;
    } else {
        suma = numero + sumaRecursiva(numero - 1); // 7 + 6 + 5 + 4 + 3 + 2 + 1
    }

    return suma;
}
