// Crear un programa que sume números complejos
#include <iostream>
using namespace std;

struct complejos
{
    float real = 0;
    float imaginaria = 0;
} imaginario1, imaginario2;

void pedirDatos();
complejos sumaComplejos(complejos, complejos);
void mostrar(complejos);

int main()
{
    system("color B0");
    cout << "---------- SUMA DE NÚMEROS COMPLEJOS ---------" << endl;

    pedirDatos();
    mostrar(sumaComplejos(imaginario1, imaginario2));

    return 0;
}

void pedirDatos()
{
    cout << "\nDigite el primer número complejo:" << endl;        // 8 - 13i
    cout << "Ingrese la parte real del número complejo " << endl; // 8
    cin >> imaginario1.real;

    cout << "Ingrese la parte imaginaria del número complejo (Sin la i)" << endl; // 13
    cin >> imaginario1.imaginaria;

    // --------------------------------------

    cout << "\nDigite el segundo número complejo:" << endl;       // 11 - 9i
    cout << "Ingrese la parte real del número complejo " << endl; // 11
    cin >> imaginario2.real;

    cout << "Ingrese la parte imaginaria del número complejo (Sin la i)" << endl; // 9
    cin >> imaginario2.imaginaria;
}

complejos sumaComplejos(complejos complejo1, complejos complejo2)
{
    complejo1.real += complejo2.real;             // 19
    complejo1.imaginaria += complejo2.imaginaria; // 22
    return complejo1;
}

void mostrar(complejos suma)
{
    cout << "\nLa suma de los números complejos es: " << endl;
    cout << suma.real << " - " << suma.imaginaria << "i";
}