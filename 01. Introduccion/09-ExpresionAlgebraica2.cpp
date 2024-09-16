/*
* Escribir la expresión ((a+b)/c)/(d+e/f)
*/
#include<iostream>
using namespace std;

int main() {
	float a, b, c, d, e, f, resultado = 0;
	
	cout << "Ingrese el valor de la variable a "; cin >> a;
	cout << "Ingrese el valor de la variable b "; cin >> b;
	cout << "Ingrese el valor de la variable c "; cin >> c;
	cout << "Ingrese el valor de la variable d "; cin >> d;
	cout << "Ingrese el valor de la variable c "; cin >> e;
	cout << "Ingrese el valor de la variable d "; cin >> f;	
	
	resultado = ((a+b)/c)/(d+e/f);
	
	cout.precision(2); //Redondeamos a dos decimales
	cout<<"\nEl resultado de la operación es: "<<resultado;
	
	return 0;
}