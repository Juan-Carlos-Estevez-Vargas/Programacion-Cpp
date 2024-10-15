#include<iostream>
using namespace std;

int main() {
	float nota1, nota2, nota3, nota4, promedio = 0;
	
	cout<<"Ingrese la nota 1 -> "<<endl; cin>>nota1;
	cout<<"Ingrese la nota 2 -> "<<endl; cin>>nota2;
	cout<<"Ingrese la nota 3 -> "<<endl; cin>>nota3;
	cout<<"Ingrese la nota 4 -> "<<endl; cin>>nota4;
	
	promedio = (nota1 + nota2 + nota3 + nota4)/4;
	cout.precision(3);
	
	if (promedio >= 3) {
		cout<<"APRUEBA";
		return 0;
	}
	
	cout<<"DESAPRUEBA";
	return 0;
}