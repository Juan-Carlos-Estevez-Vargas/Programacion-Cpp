/*
Escriba una función recursiva que calcule un número elevado a una potencia 
entera mayor o igual que cero: x^y. 
*/
#include <iostream>

using namespace std;

double potenciaRecursiva(double, int);
double potenciaIterativa(double, int);
void pedirDatos(double&, int&);

int main() {
    double base = 0;
    int exponente = 0;

    pedirDatos(base, exponente);

    double resultadoRecursivo = potenciaRecursiva(base, exponente);
    double resultadoIterativo = potenciaIterativa(base, exponente);

    cout << "\nResultado Recursivo " << resultadoRecursivo << endl;
    cout << "Resultado Iterativo " << resultadoIterativo;

    return 0;
}

void pedirDatos(double& base, int& exponente) {
    cout << "\nIngrese la base -> "; cin >> base;

    do {
        cout << "Ingrese el exponente (>=0) -> "; cin >> exponente;
    } while (exponente < 0);
}

double potenciaRecursiva(double base, int exponente) { // base  = 3 exponente = 3
    if (exponente == 0) return 1;
    return base * potenciaRecursiva(base, exponente - 1);
}

// 3 * 3 * 3 * 1 = 27

double potenciaIterativa(double base, int exponente) { // base = 3 exponente = 3
    double resultado = 1; // 1 * 3 * 3 * 3 = 27

    for (int i = 0; i < exponente; i++) { // 3
        resultado *= base;
    }

    return resultado;
}