//Diseñe un programa que calcule 1 + 3 + 5 + 2n-1;
#include<iostream>
using namespace std;

int main(){
	int n, resultado = 0;

	cout<<"\tSuma de n numeros"<<endl;
	cout<<"\nDigite el numero de elementos "; cin>>n;

	for (int i = 1; i <= n ; i += 2){
		resultado += (2 * n - 1);
	}

	cout<<"\nLa suma es: "<<resultado;

	return 0;
}
