/**
* Diseñar un programa por consola que permita mostrar y calcular la tabla de 
* multiplicar de un número cualquiera.
*/
#include<iostream>
using namespace std;

int main() {
	
	float numero = 0;
	int tamanoTabla = 0;
	float total = 0;
	
	cout<<"Ingrese el número al cual desea calcular la tabla de multiplicar "<<endl;
	cin>>numero; 
	
	cout<<"Ingrese el tamaño de la tabla de multiplicar "<<endl;
	cin>>tamanoTabla; 
	
	for (int i = 1; i <= tamanoTabla; i++) { 
		total = numero * i;
		cout<<numero<<" x "<<i<<" = "<<total<<endl;
	}
	
	return 0;
}