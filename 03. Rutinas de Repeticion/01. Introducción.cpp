#include<iostream>
using namespace std;

// Imprimir los primeros 100 numeros natutales
int main() {
	
	// contador
	int contador = 0; // 101
	
	while (contador <= 100) {
		cout<<contador<<endl; // 0 1 2 3 4 5 6
		contador = contador + 1;
	}
	
	return 0;
}