/*Un viajero desea saber cuánto tiempo tomó un viaje que realizó. El tiene la duración en
minutos de cada una de las escalas o tramos de viaje.

Desarrolle un programa que permita ingresar los tiempos de viaje de cada escala o tramos y
entregue como resultado el tiempo total de viaje en formato horas: minutos.*/
#include<iostream>
using namespace std;

int main() {
	system("color B0");
	int cantidadTramos = 0;
	int totalTramo = 0;
	int horas = 0;
	int tiempoTramo = 0;
	
	cout<<"Ingrese la cantidad de tramos a evaluar"<<endl;
	cin>>cantidadTramos;

	while(cantidadTramos != 0) {
		cout<<"Ingrese el tiempo del tramo "<<endl;
		cin>>tiempoTramo;
		totalTramo = totalTramo + tiempoTramo;
		cantidadTramos = cantidadTramos - 1;
		tiempoTramo = 0;
	}
	
	while (totalTramo >= 60) {
		horas = horas + 1;
		totalTramo = totalTramo - 60;
	}
	
	cout<<"El tiempo total del viaje fue de "<<horas<<" horas y "<<totalTramo<<" minutos."<<endl;
	return 0;
}