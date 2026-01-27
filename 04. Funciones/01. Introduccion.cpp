#include<iostream>
using namespace std;

int main() {
	
	int numero1 = 0;
	int numero2 = 0;
	int acumulador = 0;
	int numeroSumas = 0;
	
	cout<<"Ingrese el número de sumas que desea "<<endl;
	cin>>numeroSumas;
	
	for (int i = 0; i <= numeroSumas; i++) {
		cout<<"Ingrese el número 1 "<<endl;
		cin>>numero1;
		
		cout<<"Ingrese el número 2 "<<endl;
		cin>>numero2;
		
		int suma = sumar(numero1, numero2);
		cout<<"La suma es: "<<suma<<endl;
		
		acumulador += suma;
	}
	
	cout<<"Acumulado: "<<acumulador;	
	return 0;
}

// valor de retorno - nombre funcion - argumentos
int sumar(int numero1, int numero2) {
	return numero1 + numero2;
}