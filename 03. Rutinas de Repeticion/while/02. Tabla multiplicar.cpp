#include<iostream>
using namespace std;

// Imprima la tabla de multiplicar de x número.
int main() {
	setlocale(LC_ALL, "spanish");
	// numero
	int numero = 0; // 2
	int contador = 1; // 2
	
	cout<<"Ingrese el número a calcular su tabla de multiplicar\n";
	cin>>numero;
	
	// imprimir la tabla de multiplicar
	while (contador < 12) {
		cout<<numero * contador<<endl;
		contador++;
	}
	
	return 0;
}