#include<iostream>
using namespace std;

struct casa {
	int puertas = 0;
	int banios = 0;
	string propietario = "";
	bool alcantarillado = false;
};

struct acudiente {
	string nombre = "";
	string apellido = "";
	int edad = 0;
};

struct estudiante {
	string nombre = "";
	string apellido = "";
	double promedio = 0;
	acudiente acudiente;
};

int main() {
	
	casa casaJuan;
	casaJuan.puertas = 5;
	casaJuan.banios = 3;
	casaJuan.propietario = "Juan Estevez";
	
	casa casaMargarita;
	casaMargarita.puertas = 7;
	casaMargarita.banios = 2;
	casaMargarita.propietario = "Margarita Rosa de Francisco";
	
	cout << "\t\tCASA DE JUAN" << endl << endl;
	cout << "Puertas -> " << casaJuan.puertas << endl;
	cout << "Baños -> " << casaJuan.banios << endl;
	cout << "Propietario -> " << casaJuan.propietario << endl;
	cout << "alcantarillado -> " << casaJuan.alcantarillado << endl << endl; 

	cout << "\t\tCASA DE MARGARITA" << endl << endl;
	cout << "Puertas -> " << casaMargarita.puertas << endl;
	cout << "Baños -> " << casaMargarita.banios << endl;
	cout << "Propietario -> " << casaMargarita.propietario << endl;
	cout << "alcantarillado -> " << casaMargarita.alcantarillado << endl << endl; 	
	
	acudiente acudienteJuan;
	acudienteJuan.nombre = "Bob";
	acudienteJuan.apellido = "Esponja";
	acudienteJuan.edad = 48;
	
	estudiante estudianteJuan;
	estudianteJuan.nombre = "Carlos";
	estudianteJuan.apellido = "Vargas";
	estudianteJuan.promedio = 4.8;
	estudianteJuan.acudiente = acudienteJuan;
	
	cout << "\t\tESTUDIANTE JUAN" << endl << endl;
	cout << "Nombre: " << estudianteJuan.nombre << endl;
	cout << "Apellido: " << estudianteJuan.apellido << endl;
	cout << "Promedio: " << estudianteJuan.promedio << endl;
	cout << "Acudiente Nombre " << estudianteJuan.acudiente.nombre << endl;
	cout << "Acudiente Apellido " << estudianteJuan.acudiente.apellido << endl;
	cout << "Acudiente Edad " << estudianteJuan.acudiente.edad << endl;
	
	estudiante estudianteLaura;
	estudianteLaura.nombre = "Laura";
	estudianteLaura.apellido = "Rodriguez";
	estudianteLaura.promedio = 3.8;
	estudianteLaura.acudiente = acudienteJuan;
	
	cout << "\t\tESTUDIANTE LAUURA" << endl << endl;
	cout << "Nombre: " << estudianteLaura.nombre << endl;
	cout << "Apellido: " << estudianteLaura.apellido << endl;
	cout << "Promedio: " << estudianteLaura.promedio << endl;
	cout << "Acudiente Nombre " << estudianteLaura.acudiente.nombre << endl;
	cout << "Acudiente Apellido " << estudianteLaura.acudiente.apellido << endl;
	cout << "Acudiente Edad " << estudianteLaura.acudiente.edad << endl;	
	
	return 0;
	
}