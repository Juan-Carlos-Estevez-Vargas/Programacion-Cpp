/*Realice un programa que lea de la entrada estandar los siguientes datos de una persona

*edad
*sexo
*altura

mostrar los datos en la salida estandar*/
#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    string sexo;
    float altura = 0.0;

    cout << "Ingrese su edad -> ";
    cin >> edad;
    cout << "Ingrese su sexo (Masculino/Femenino) -> ";
    cin >> sexo;
    cout << "Ingrese su altura en metros -> ";
    cin >> altura;

    cout << "Los datos que ingresó fueron: Edad: " << edad << " Sexo: " << sexo << " Altura: " << altura << endl;

    system("pause");
    return 0;
}