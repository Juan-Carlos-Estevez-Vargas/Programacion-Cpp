
#include <iostream>
#include <locale>
using namespace std;

// Función que calcula la cantidad mínima de billetes
void cambio(int monto, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno) {
    if (monto < 0) { // Validación
        cien = cincuenta = veinte = diez = cinco = uno = 0;
        return;
    }

    cien = monto / 100;
    monto %= 100;

    cincuenta = monto / 50;
    monto %= 50;

    veinte = monto / 20;
    monto %= 20;

    diez = monto / 10;
    monto %= 10;

    cinco = monto / 5;
    monto %= 5;

    uno = monto; // Lo que queda son billetes de 1
}

// Función para imprimir resultados
void imprimirValores(int cien, int cincuenta, int veinte, int diez, int cinco, int uno) {
    cout << "\n\tCantidad de billetes a entregar:\n";
    cout << "Cien:     " << cien << endl;
    cout << "Cincuenta:" << cincuenta << endl;
    cout << "Veinte:   " << veinte << endl;
    cout << "Diez:     " << diez << endl;
    cout << "Cinco:    " << cinco << endl;
    cout << "Uno:      " << uno << endl;
}

int main() {
    setlocale(LC_ALL, "spanish");

    int dolares;
    cout << "Ingrese la cantidad en dólares: ";

    // Validación de entrada
    if (!(cin >> dolares) || dolares < 0) {
        cout << "Error: Ingrese un número entero positivo.\n";
        return 1;
    }

    int cien, cincuenta, veinte, diez, cinco, uno = 0;
    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    imprimirValores(cien, cincuenta, veinte, diez, cinco, uno);

    return 0;
}