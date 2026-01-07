#include <iostream>
using namespace std;

int main() {
	/**
	* Introducción al bucle o rutina de repetición for
	**/
	
	float peso = 0;
	float altura = 0;
	float imc = 0;
	int numeroPersonas = 0;
	
	cout<<"Ingrese el número de personas a evaluar "<<endl;
	cin>>numeroPersonas;
	
	for (int i = 0; i < numeroPersonas; i++) {
		cout<<"Iteracion "<<i<<endl<<endl;
		cout<<"Ingrese su peso en kg"<<endl;
		cin>>peso;
		
		cout<<"Ingrese su altura en m "<<endl;
		cin>>altura;
		
		imc = peso/(altura*altura);
		cout<<"Su IMC es "<<imc<<endl;
		
		if (imc < 16) {
			cout<<"Intradelgadez"<<endl;
		} else if (imc >= 16 && imc < 17) {
			cout<<"Delgadez Moderada"<<endl;
		} else if (imc >= 17 && imc < 19) {
			cout<<"Delgadez Aceptable"<<endl;
		} else if (imc >= 19 && imc < 25) {
			cout<<"Peso Normal"<<endl;
		} else {
			cout<<"Sobrepeso"<<endl;
		}
	}
	
	return 0;
}