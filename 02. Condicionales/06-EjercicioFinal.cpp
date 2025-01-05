/**
Escribe un programa en C++ que realice las siguientes operaciones:

Solicite al usuario ingresar una calificación numérica (de 0 a 100).
Evalúe la calificación ingresada y determine:
 * Si la calificación está entre 90 y 100: Imprime "Excelente".
 * Si está entre 80 y 89: Imprime "Muy Bueno".
 * Si está entre 70 y 79: Imprime "Bueno".
 * Si está entre 60 y 69: Imprime "Suficiente".
 * Si está entre 0 y 59: Imprime "Reprobado".
 * Si la calificación está fuera del rango de 0 a 100: Imprime "Calificación inválida".
 
Usa un operador ternario para determinar si el usuario puede "Intentar de nuevo" 
(si la calificación está entre 50 y 59).

Usa un switch-case para proporcionar recomendaciones basadas en la calificación:
 * Para "Excelente": Imprime "Sigue así, no necesitas ayuda."
 * Para "Muy Bueno": Imprime "Considera reforzar algunos puntos para mejorar."
 * Para "Bueno": Imprime "Dedica más tiempo al estudio."
 * Para "Suficiente": Imprime "Busca apoyo adicional para mejorar."
 * Para "Reprobado": Imprime "Es crucial que busques ayuda."
*/ 
#include <iostream>
using namespace std;

int main() {
	int calificacion = 0;
	string intentarNuevamente = "";
	
	cout<<"Ingrese una calificación numerica (0-100)"<<endl;
	cin>>calificacion;
	
	// Evaluación de la calificación utilizando if-else o ternarios.
	if (calificacion >= 90 && calificacion <=100) {
		cout<<"Excelente"<<endl;
	} else if (calificacion >= 80 && calificacion <= 89) {
		cout<<"Muy Bueno"<<endl;
	} else if (calificacion >= 70 && calificacion <= 79) {
		cout<<"Bueno"<<endl;
	} else if (calificacion >= 60 && calificacion <= 69) {
		cout<<"Suficiente"<<endl;
	} else if (calificacion >= 0 && calificacion <= 59) {
		cout<<"Reprobado"<<endl;
	} else {
		cout<<"Calificación inválida"<<endl;
	}
	
	if (calificacion <= 59) {
		// Evalua si el usuario debe intentar nuevamente
		intentarNuevamente = calificacion >= 50 && calificacion <= 59 ? "Intentar de nuevo" : "No debes intentar de nuevo";
		cout<<endl<<intentarNuevamente<<endl;
	}
	
	// Imprimir recolemndaciones usando switch case
	switch (calificacion  / 10) {
		case 10:
		case 9:
			cout<<"Sigue así, no necesitas ayuda.";
			break;
		case 8:
			cout<<"Considera reforzar algunos puntos para mejorar.";
			break;
		case 7:
			cout<<"Dedica más tiempo al estudio.";
			break;
		case 6: 
			cout<<"Busca apoyo adicional para mejorar.";
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout<<"Es crucial que busques ayuda.";
			break;
		default:
			cout<<"Sin recomendaciones, calificación inválida";
			break;
	}

    return 0;
}