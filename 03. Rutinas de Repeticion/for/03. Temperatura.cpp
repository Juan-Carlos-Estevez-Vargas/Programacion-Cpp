/**
* Diseñar un programa que tome cada 4 horas la temperatura actual, leyendola durante un periodo de 24 horas
* para posteriormente calcular la temperatura media del día, la temperatura mas alta y la temperatura mas baja
* del día.
*/
#include<iostream>
using namespace std;

int main() {
	
	const int HORAS_DEL_DIA = 24;
	const int INTERVALO = 4;
	
	int numero_temperaturas = 0;
	float temperatura = 0;
	float maxima = -100;
	float minima = 100;
	float promedio = 0;
	float sumaTemperaturas = 0;
	
	if (INTERVALO <= 0) {
		cout<<"El intervalo no puede ser 0 o negativo";
		return 0;
	} 
		
	numero_temperaturas = HORAS_DEL_DIA / INTERVALO;

	for (int i = 1; i <= numero_temperaturas; i++) {
		cout<<"Ingrese la temperatura #"<<i<<endl;
		cin>>temperatura; // -1
		
		sumaTemperaturas += temperatura;
		
		if (temperatura > maxima) {
			maxima = temperatura; 
		}
		
		if (temperatura < minima) {
			minima = temperatura;
		}
	}
	
	promedio = sumaTemperaturas / numero_temperaturas;
	
	cout<<"Temperatura promedio del día "<<promedio<<endl;
	cout<<"Temperatura Máxima del día "<<maxima<<endl;
	cout<<"Temperatura Mínima del día "<<minima<<endl;
	
	return 0;
}