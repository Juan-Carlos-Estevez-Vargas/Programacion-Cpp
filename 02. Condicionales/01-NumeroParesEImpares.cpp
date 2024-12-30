#include <iostream>
using namespace std;

int main() {
	int numero = 0;
	
	cout<<"Por favor ingrese un número entero"<<endl;
	cin>>numero;
	
	if (numero%2 == 0) {
		cout<<"El número es par"<<endl;
	} else {
		cout<<"El número es impar"<<endl;
	}
	
	return 0;
}