/*Pedir al usuario una cadena de caracteres y contar cuantas de las
distintas vocales hay en la frase*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // IMPLEMENTACIÓN 1
    /* int conteoA = 0;
    int conteoE = 0;
    int conteoI = 0;
    int conteoO = 0;
    int conteoU = 0;
    char cadena[15];

    cout << "Ingrese por favor una frase ";
    cin.getline(cadena, 15); // ["H", "o", "l", "a", " ", "a", "m", "i", "g", "O"]

    for (int i = 0; i < 15; i++) { // 3
        switch(cadena[i]) {
            case 'a': conteoA++; break; // 2
            case 'A': conteoA++; break;
            case 'e': conteoE++; break;
            case 'E': conteoE++; break;
            case 'i': conteoI++; break; // i
            case 'I': conteoI++; break;
            case 'o': conteoO++; break; // 2
            case 'O': conteoO++; break;
            case 'u': conteoU++; break;
            case 'U': conteoU++; break;
            default: break;
        }
    }

    cout << "La cadena " << cadena << " consta de las siguientes vocales: " << endl;
    cout << "A -> " << conteoA << endl;
    cout << "E -> " << conteoE << endl;
    cout << "I -> " << conteoI << endl;
    cout << "O -> " << conteoO << endl;
    cout << "U -> " << conteoU << endl;
    cout << "Para un total de " << conteoA + conteoE + conteoI + conteoO + conteoU << " vocales"; */

    // IMPLEMANTACIÓN 2
    /* int conteoA = 0;
    int conteoE = 0;
    int conteoI = 0;
    int conteoO = 0;
    int conteoU = 0;
    string cadena = "";

    cout << "Ingrese por favor una frase ";
    getline(cin, cadena);

    for (char caracter : cadena) { 
        switch(tolower(caracter)) {
            case 'a': conteoA++; break; // 2
            case 'e': conteoE++; break;
            case 'i': conteoI++; break; // i
            case 'o': conteoO++; break; // 2
            case 'u': conteoU++; break;
            default: break;
        }
    }

    cout << "La cadena " << cadena << " consta de las siguientes vocales: " << endl;
    cout << "A -> " << conteoA << endl;
    cout << "E -> " << conteoE << endl;
    cout << "I -> " << conteoI << endl;
    cout << "O -> " << conteoO << endl;
    cout << "U -> " << conteoU << endl;
    cout << "Para un total de " << conteoA + conteoE + conteoI + conteoO + conteoU << " vocales";*/

    // IMPLEMENTACION 3
    int vocales[5] = { 0 };
    string cadena = "";

    cout << "Ingrese por favor una frase ";
    getline(cin, cadena);

    for (char caracter : cadena) { 
        switch(tolower(caracter)) {
            case 'a': vocales[0]++; break; // 2
            case 'e': vocales[1]++; break;
            case 'i': vocales[2]++; break; // i
            case 'o': vocales[3]++; break; // 2
            case 'u': vocales[4]++; break;
            default: break;
        }
    }

    int conteoGeneral = vocales[0] + vocales[1] + vocales[2] + vocales[3] + vocales[4];

    cout << "La cadena " << cadena << " consta de las siguientes vocales: " << endl;
    cout << "A -> " << vocales[0] << endl;
    cout << "E -> " << vocales[1] << endl;
    cout << "I -> " << vocales[2] << endl;
    cout << "O -> " << vocales[3] << endl;
    cout << "U -> " << vocales[4] << endl;
    cout << "Para un total de " << conteoGeneral << " vocales";
    return 0;
}
