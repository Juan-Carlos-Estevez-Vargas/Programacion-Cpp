/*Escribir un programa que calcule la cantidad de horas, minutos y segundos que hay en
una cantidad de segundos digitados por el usuario*/
#include<iostream>
using namespace std;

int main() {
	system("color B0");
	int segundosUsuario = 0;
	int minutos = 0;
	int horas = 0;
	cout<<"Por favor ingrese la cantidad de segundos a convertir : "<<endl;
	cin>>segundosUsuario;
	
	//Procesar salida
	//Hora - 60 min
	//Minuto - 60 seg
	
	// 7000 seg
	// 1min -> 60seg
	// ?    -> 7000seg   ? = 700 * 1 / 60 = 116.66 min
	
	// 1h -> 60min
	// ?  -> 116.66min   ? = 116.66 * 1 / 60 = 1.94h
	
	while (segundosUsuario >= 60) { // 40
		minutos = minutos + 1; // 7
		segundosUsuario = segundosUsuario - 60; // 
		
		if (minutos >= 60) {
			horas = horas + 1; // 1
			minutos = minutos - 60;
		}
	}
	
	cout<<"El resultado final es "<<horas<<"h "<<minutos<<"m "<<segundosUsuario<<"seg"<<endl;
	return 0;
}