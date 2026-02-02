/*Elabore un programa que calcule la hipotenusa de un triángulo a partir de sus dos catetos*/
#include<iostream>
#include<math.h>
using namespace std;

void datos(double, double);
double hipotenusa(double, double);

int main() {
	double catetoA = 0;
	double catetoB = 0;
	datos(catetoA, catetoB);
	return 0;
}

void datos(double catetoA, double catetoB) {
	cout << "Ingrese el cateto A -> " << endl; cin >> catetoA;
	cout << "Ingrese el cateto B -> " << endl; cin >> catetoB;
	cout << "La hipotenusa es: " << hipotenusa(catetoA, catetoB);
}

double hipotenusa(double catetoA, double catetoB) {
	return sqrt(pow(catetoA, 2) + pow(catetoB, 2));
}

