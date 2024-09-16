// Intercambio de variables
#include<iostream>
using namespace std;

int main() {
	string masculino, femenino, auxiliar = "";
	
	cout<<"Ingrese el valor de la variable MASCULINO "; cin>>masculino;
	cout<<"Ingrese el valor de la variable FEMENINO "; cin>>femenino;
	
	cout<<"Ingresaste: "<<masculino<<" - "<<femenino;
	
	auxiliar = masculino; // MASCULINO
	masculino = femenino; // FEMENINO
	femenino = auxiliar; // MASCULINO
	
	cout<<"\nVariables alternadas: "<<masculino<<" - "<<femenino;
	
	return 0;
}