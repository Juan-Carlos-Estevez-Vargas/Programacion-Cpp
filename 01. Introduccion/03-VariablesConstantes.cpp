#include <iostream>
using namespace std;

int main() {

    // Definición Variables de tipo entero y flotante
    // tipo de dato - nombre variable = valor => variable
    // cont - tipo de dato - nombre variable = valor => constante
    int numeroEntero = 10;
    float numeroFlotante = 3.714; 
    const float NUMERO_EULER = 2.78;

    cout << numeroEntero << endl;
    cout << numeroFlotante << endl;
    cout << NUMERO_EULER << endl;
    
    numeroEntero = 15;
    numeroFlotante = 1.01;
    
    cout << numeroEntero << endl;
    cout << numeroFlotante << endl;

    return 0;
}
