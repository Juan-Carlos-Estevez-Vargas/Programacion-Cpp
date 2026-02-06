/*Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de 
cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten las 
fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.*/
#include<iostream>
using namespace std;

struct Fecha
{
    int dia = 0;
    int mes = 0;
    int anio = 0;
};

Fecha pedirFecha(const string& titulo) {
    Fecha f;
    cout << "--- " << titulo << " ---\n";
    cout << "Día  : "; cin >> f.dia;
    cout << "Mes  : "; cin >> f.mes;
    cout << "anio  : "; cin >> f.anio;
    cout << endl;
    return f;
}

int valorFecha(const Fecha& f) {
    return f.anio * 10000 + f.mes * 100 + f.dia;
}

Fecha mayor(const Fecha& f1, const Fecha& f2) {
    return (valorFecha(f1) >= valorFecha(f2)) ? f1 : f2;
}

void mostrarFecha(const Fecha& f) {
    cout << "Fecha más reciente: " << f.dia << "/" << f.mes << "/" << f.anio << endl;
}

int main() {
    Fecha f1 = pedirFecha("Fecha 1");
    Fecha f2 = pedirFecha("Fecha 2");

    Fecha reciente = mayor(f1, f2);
    mostrarFecha(reciente);

    return 0;
}