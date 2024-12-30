#include <iostream>
using namespace std;

int main() {
	//resultado = condicion ? valor_si_cierto : valor_si_falso
	int edad = 0;
	string resultado = "";
	
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	
	if (edad > 120) {
		cout<<"Edad no válida";
	} else if (edad >= 18) {
		cout<<"Eres mayor de edad";
	} else {
		cout<<"Eres menor de edad";
	}
	
	resultado = edad > 120 
		? "Edad no valida" 
			: edad >= 18 
				? "Eres mayor de edad" 
					: "Eres menor de edad";
	cout<<resultado;	
	return 0;
}