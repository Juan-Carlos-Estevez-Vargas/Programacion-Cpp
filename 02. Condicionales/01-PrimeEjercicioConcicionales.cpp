/**
* Solicitar 4 números al usuario y evaluar si el cuarto número es 
* estrictamente igual a alguno de los anteriores.
*/
#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3, num4 = 0;
	
	cout<<"Digite los 4 números seguidos de la tecla ENTER "; 
	cin>>num1>>num2>>num3>>num4;
	
	if (num1 == num4 || num2 == num4 || num3 == num4) {
		cout<<"El número que ingresó en órden 4 coincide con alguno de los anteriores";
	} else {
		cout<<"El número que ingresó en órden 4 NO coincide con alguno de los anteriores";
	}
	
	return 0;
}