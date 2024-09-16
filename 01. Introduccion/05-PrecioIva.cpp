/* 2. Escribe un programa que lea de la entrada estandar el precio de un
producto y muestre en la salida estandar el precio final con IVA*/

#include <iostream>
using namespace std;

int main()
{
    // Definir y declarar las variables
    float precio, total = 0;
    const int IVA = 19;

    cout << "Ingrese el precio del producto -> " << endl;
    cin >> precio;

    total = precio + (precio * IVA) / 100;

    cout << "El precio total a pagar es: " << total << endl;

    system("pause");
    return 0;
}