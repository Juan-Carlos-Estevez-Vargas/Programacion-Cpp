//Escriba un programa que realice el factorial de un número
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int factorial = 1, numero;
	
	cout<<"\tFACTORIAL DE UN NUMERO"<<endl;
	cout<<"\nDigite un numero "; cin>>numero;
	
	for (int i = 1; i <= numero; i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero "<<numero<<" es: "<<factorial;
		
	getch();
	return 0;
}
