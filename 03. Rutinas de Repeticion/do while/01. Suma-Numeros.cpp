/*Diseñar un programa que lea valores enteros hasta que se digite un
valor entre [20 - 30] o el valor 0. El programa debe entregar la suma
de los valores mayores a 0 introducidos*/
#include <iostream>
using namespace std;

int main()
{

    int numero = 0;
    int suma = 0; // 31

    do { // 20
        cout << "Digite un numero ";
        cin >> numero;

        if (numero > 0 || (numero < 20 || numero > 30)){
            suma += numero;
        }
    } while ((numero < 20 || numero > 30) && (numero != 0));

    cout << "\nEl resultado de la suma es: " << suma << endl;
    return 0;
}
