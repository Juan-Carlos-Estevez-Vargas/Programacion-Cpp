/*Determinar si una palabra es palindroma*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char cadena[15];
    char cadenaReversada[15];
    
    cout << "\t\t\nPALABRA PALÍNDROMA" << endl;
    cout << "Digite una palabra o frase por favor -> ";
    cin.getline(cadena, 15);

    strcpy(cadenaReversada, cadena);
    strrev(cadenaReversada);

    if (strcmp(cadena, cadenaReversada) == 0) cout << "Palindroma" << endl;
    else cout << "NO Palindroma" << endl;


    cout << "Cadena normal " << cadena << endl;
    cout << "Cadena al reves " << cadenaReversada << endl;

    return 0;
}
