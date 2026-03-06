//Realice una función recursiva para la serie Fibonacci 
// 0 1 1 2 3 5 8 13 21 34 
#include <iostream>
using namespace std;

string fibonacci(int);
string fibonacciRecursivo(int);

int main () {
    int numero = 0;
    cout << "\n\tSERIE FIBONACCI RECURSIVA" << endl << endl;

    do {
        cout << "\nIngrese el número de elementos "; cin >> numero;
    } while (numero <= 0);

    cout << "\nResultado: " << fibonacciRecursivo(numero);
    return 0;
}

string fibonacciRecursivo(int n) { // 4
    if (n == 0) return "0";
    if (n == 1) return "0 1";

    // calcular fib(n) recursivamente dentro de la misma función
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) { // 2
        int temp = a + b; // 1
        a = b; // 0
        b = temp; // 1
    }

    return fibonacci(n - 1) + " " + to_string(b);
}

// 0 1 1 2 3 5 8 13

// Implementación iterativa
string fibonacci(int numero) { // 7
    int a = 0, b = 1;
    string serie = "0"; // 0 1 1 2 3 5 8 13

    for (int i = 1; i <= numero; i++) { // i = 7
        serie += " " + to_string(b);
        int temp = a + b; // 21
        a = b; // 13
        b = temp; // 21
    }

    return serie;
}