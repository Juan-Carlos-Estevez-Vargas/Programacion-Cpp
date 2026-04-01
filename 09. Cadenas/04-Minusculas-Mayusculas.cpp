/* Cree un programa que reciba dos cadenas unas en mayúsculas y otra en minúsculas y conviertlas a MAY o MIN*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char cadenaMinusculas[15];
    char cadenaMayusculas[15];
    
    cout << "\t\t\nCONVERTIDOR CADENAS MAYUSCULAS MINUSCULAS" << endl;
    cout << "Digite una palabra o frase (en minúscula) por favor -> ";
    cin.getline(cadenaMinusculas, 15);

    cout << "Digite una palabra o frase (en mayuscula) por favor -> ";
    cin.getline(cadenaMayusculas, 15);

    strupr(cadenaMinusculas);
    strlwr(cadenaMayusculas);

    cout << "Cadena minuscula a mayuscula " << cadenaMinusculas << endl;
    cout << "Cadena mayuscula a minuscula " << cadenaMayusculas << endl;

    return 0;
}
