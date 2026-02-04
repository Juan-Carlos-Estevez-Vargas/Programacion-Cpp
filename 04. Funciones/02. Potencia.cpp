/*Escriba una función nombrada funpot() que eleve un número entero que se le 
transmita a una potencia en número entero positivo y despliegue el resultado. 
El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include<iostream>
#include<conio.h>
#include<locale.h>
#include<math.h>

using namespace std;

int base = 0;
int potencia = 0;

void pedirDatos();
void funpot(int basee, int potenciaa);

int main() {
	system("color B0");
	setlocale(LC_ALL, "spanish");
	pedirDatos();
	funpot(base, potencia);
	return 0;
}

void pedirDatos() {
	cout<<"Digite la base "<<endl; cin>>base;
	cout<<"Ingrese la potencia "<<endl; cin>>potencia;
}

void funpot(int basee, int potenciaa) {
	long resultado = pow(base, potencia);
	cout<<"El resultado de la operación es: -> "<<resultado;
}