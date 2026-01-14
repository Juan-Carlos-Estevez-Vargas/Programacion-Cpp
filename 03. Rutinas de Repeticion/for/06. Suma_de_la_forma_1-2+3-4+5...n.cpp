//Diseñar un programa que calcule 1-2+3-4+5...n
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, suma = 0, signo = 1; 
	
	cout<<"\tSUMA DE NUMEROS DE LA FORMA 1-2+3-4+5..N"<<endl<<endl;
	cout<<"\nDigite un numero "; cin>>numero;
	
	for (int i = 1; i <= numero; i+=2){
		suma += i * signo;
		signo *= -1;	
	}
	
	cout<<"El resultado es: "<<suma;
	
	getch();
	return 0;
}
