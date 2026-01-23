/*Diseñar un programa que solicite un numero entre 1 y 100. El programa
debe generar un numero aleatorio en ese mismo rango e indicarle al 
usuario si el numero que digito es mayor o menor al numero random, asi
hasta que lo adivine y por ultimo mostrar el numero de intentos que le 
llevo*/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	
	int numero = 0;
	int random = 0;
	int numeroIntentos = 0; // 3
	
	srand(time(NULL));	
	random = 1 + rand() % (100); // 40
	
	cout<<"\n\t\tNÚMERO MÁGICO"<<endl;
	
	do {
		cout<<"Ingrese un número entre 1 al 100 y que sea entero"<<endl; 
		cin>>numero; //40
		
		if (numero > 0 && numero <= 100) {
			if (numero > random) { cout<<"\nEl número ingresado es mayor al número mágico"<<endl; }
			if (numero < random) { cout<<"\nEl número ingresado es menor al número mágico"<<endl; }

			numeroIntentos++;
		} else {
			cout<<"El número ingresado no está en el rango especificado";
		}
	} while (numero != random);
	
	cout<<"\n\t\tFelicitaciones, ¡Has adivinado el número mágico"<<endl;
	cout<<"Número Mágico "<<random<<endl;
	cout<<"Número de Intentos "<<numeroIntentos<<endl;
	
	return 0;
	
}