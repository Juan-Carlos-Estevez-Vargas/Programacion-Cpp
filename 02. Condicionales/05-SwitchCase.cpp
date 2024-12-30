#include<iostream>
using namespace std;

int main() {
	int opcion = 0;
	string salida = "";
	
	cout<<"\tINGRESE SU OPCIÓN"<<endl;
	cout<<"\n1. Asesoría Comercial"<<endl;
	cout<<"2. Asesoría Jurídica"<<endl;
	cout<<"3. Asesoría Personal"<<endl;
	cout<<"4. Asesoría Familiar"<<endl;	
	cout<<"5. Otra"<<endl;
	
	cin>>opcion;
	
	// Condicionales if
	/*if (opcion == 1) {
		cout<<"Elegiste asesoria comercial";
	} else if (opcion == 2) {
		cout<<"Elegiste asesoria juridica";
	} else if (opcion == 3) {
		cout<<"Elegiste asesoria personal";
	} else if (opcion == 4) {
		cout<<"Elegiste asesoria familiar";
	} else if (opcion == 5) {
		cout<<"Elegiste otra asesoria";
	} else {
		cout<<"Opcion no contemplada";
	}*/
	
	
	// Operador ternario
	/*salida = opcion == 1 ? "Elegiste asesoria comercial" 
		: opcion == 2 ? "Elegiste asesoria juridica" 
		: opcion == 3 ? "Elegiste asesoria personal" 
		: opcion == 4 ? "Elegiste asesoria familiar" 
		: opcion == 5 ? "Elegiste otra asesoria"
		: "Opcion no contemplada";
		
	cout<<salida;*/
	
	// Switch case
	switch (opcion) {
		case 1:
			cout<<"Elegiste asesoria comercial";
			break;
		case 2:
			cout<<"Elegiste asesoria juridica";
			break;
		case 3:
			cout<<"Elegiste asesoria personal";
			break;
		case 4:
			cout<<"Elegiste asesoria familiar";
			break;
		case 5: 
			cout<<"Elegiste otra asesoria";
			break;
		default:
			cout<<"Opcion no contemplada";
			break;
	}
	
	return 0;
}