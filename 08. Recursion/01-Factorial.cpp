// Hallar el factorial de un número con recursividad
// Solo funciona hasta el 20!
#include <iostream>

using namespace std;

unsigned long long factorialIterado(unsigned int);
unsigned long long factorialRecursivo(unsigned int);

int main() {
    unsigned int numero = 0;

    cout << "\n\tFACTORIAL RECURSIVO DE UN NÚMERO" << endl << endl;
    cout << "Ingrese el numero a calcular (Máximo 20) "; cin >> numero;
    cout << factorialRecursivo(numero);

    return 0;
}

unsigned long long factorialRecursivo(unsigned int numero) { // 5
    if (numero == 0) {
        numero = 1;
    } else {
        numero *= factorialRecursivo(numero - 1);
    }

    return numero;
}

unsigned long long factorialIterado(unsigned int numero) { 
    if (numero == 0 || numero == 1) return 1;

    unsigned long long factorial = 1; 

    for (unsigned int i = 2; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}