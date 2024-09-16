/*
* Escribir la expresión (a+b)/(c+d)
*/
#include<iostream>
using namespace std;

int main() {
	float a, b, c, d, resultado = 0;
	
	cout << "Ingrese el valor de la variable a "; cin >> a;
	cout << "Ingrese el valor de la variable b "; cin >> b;
	cout << "Ingrese el valor de la variable c "; cin >> c;
	cout << "Ingrese el valor de la variable d "; cin >> d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2); //Redondeamos a dos decimales
	cout<<"\nEl resultado de la operación es: "<<resultado;
	
	return 0;
}