/*
Diseñar un programa que pida al usuario que dijite una cadena de 
caracteres, luego verificar la longitud de la cadena y si esta 
supera los 10 caracteres mostrarla, de lo contrario no.
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string cadena = "";
    string frase = "";
    int contador = 0;

    cout << "Digite una frase separada por ';': ";
    getline(cin, frase);
    stringstream ss(frase); // Es un flujo vació de tipo string

    while (getline(ss, cadena, ';')) {
        cout << "Cadena " << contador << ": " << cadena << endl;
        cout << "Tamanio: " << cadena.length() << endl;
        contador++;
    }

    return 0;
}
