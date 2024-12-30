#include <iostream>
using namespace std;

int main() {
	int numero = 0;
	bool esPrimo = false;
	cout<<"Ingrese un número entero"<<endl;
	cin>>numero;
	
	if (numero <= 1) {
		cout<<"El número no es primo";
		return 0;
	}
	
	if (numero == 2) {
		cout<<"El número es primo";
		return 0;
	}
	
	if (numero%2 == 0) {
		cout<<"El número no es primo";
		return 0;
	} else {
		cout<<"El número podría ser primo";
		return 0;
	}
	
	
	return 0;
}