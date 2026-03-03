#include <iostream>
#include <vector>
#include <limits>

using namespace std;

/* ============================================================
   PROTOTIPOS DE FUNCIONES
   ============================================================ */

void mostrarMenu();
int leerOpcion();
void pedirDimensiones(int& filas, int& columnas, char nombre);
void llenarMatriz(vector<vector<int>>& matriz, char nombre);
void mostrarMatriz(const vector<vector<int>>& matriz);

bool mismasDimensiones(int fA, int cA, int fB, int cB);
bool esMultiplicable(int cA, int fB);
bool esCuadrada(int filas, int columnas);

vector<vector<int>> sumar(const vector<vector<int>>& A, const vector<vector<int>>& B);
vector<vector<int>> restar(const vector<vector<int>>& A, const vector<vector<int>>& B);
vector<vector<int>> multiplicar(const vector<vector<int>>& A, const vector<vector<int>>& B);
vector<vector<int>> transpuesta(const vector<vector<int>>& A);
bool esSimetrica(const vector<vector<int>>& A);
void mostrarDiagonalPrincipal(const vector<vector<int>>& A);

/* ============================================================
   FUNCIÓN PRINCIPAL
   ============================================================ */

int main() {
    while (true) {
        mostrarMenu();
        int opcion = leerOpcion();

        if (opcion == 7) {
            cout << "\nSaliendo del programa...\n";
            break;
        }

        int filasA = 0, columnasA = 0;
        int filasB = 0, columnasB = 0;

        if (opcion >= 1 && opcion <= 3) {
            pedirDimensiones(filasA, columnasA, 'A');
            pedirDimensiones(filasB, columnasB, 'B');
            vector<vector<int>> A(filasA, vector<int>(columnasA));
            vector<vector<int>> B(filasB, vector<int>(columnasB));

            if (opcion == 1 || opcion == 2) {
                if (!mismasDimensiones(filasA, columnasA, filasB, columnasB)) {
                    cout << "\nError: Las matrices deben tener el mismo tamaño.\n";
                    continue;
                }

                llenarMatriz(A, 'A');
                llenarMatriz(B, 'B');
                vector<vector<int>> resultado = (opcion == 1) ? sumar(A, B) : restar(A, B);
                mostrarMatriz(resultado);
            }

            if (opcion == 3) {
                if (!esMultiplicable(columnasA, filasB)) {
                    cout << "\nError: Columnas de A deben ser iguales a filas de B.\n";
                    continue;
                }

                llenarMatriz(A, 'A');
                llenarMatriz(B, 'B');
                vector<vector<int>> resultado = multiplicar(A, B);
                mostrarMatriz(resultado);
            }
        }

        if (opcion >= 4 && opcion <= 6) {
            pedirDimensiones(filasA, columnasA, 'A');
            vector<vector<int>> A(filasA, vector<int>(columnasA));
            llenarMatriz(A, 'A');

            if (opcion == 4) {
                mostrarMatriz(transpuesta(A));
            }

            if (opcion == 5 || opcion == 6) {
                if (!esCuadrada(filasA, columnasA)) {
                    cout << "\nError: La matriz debe ser cuadrada.\n";
                    continue;
                }

                if (opcion == 5) {
                    cout << (esSimetrica(A) ? "\nLa matriz es simétrica\n" : "\nLa matriz NO es simétrica\n");
                } else {
                    mostrarDiagonalPrincipal(A);
                }   
            }
        }
    }

    return 0;
}

/* ============================================================
   IMPLEMENTACIONES
   ============================================================ */

void mostrarMenu() {
    cout << "\n---------------------------------------\n";
    cout << " OPERACIONES CON MATRICES\n";
    cout << "---------------------------------------\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Transpuesta\n";
    cout << "5. Simetrica\n";
    cout << "6. Diagonal Principal\n";
    cout << "7. Salir\n";
    cout << "---------------------------------------\n";
    cout << "Seleccione una opcion: ";
}

/* Lee opción validando entrada numérica */
int leerOpcion() {
    int opcion;

    while (!(cin >> opcion) || opcion < 1 || opcion > 7) {
        cout << "Opcion invalida. Intente nuevamente: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return opcion;
}

/* Solicita dimensiones validando valores positivos */
void pedirDimensiones(int& filas, int& columnas, char nombre) {
    do {
        cout << "\nFilas de matriz " << nombre << ": ";
        cin >> filas;
    } while (filas <= 0);

    do {
        cout << "Columnas de matriz " << nombre << ": ";
        cin >> columnas;
    } while (columnas <= 0);
}

/* Llena matriz por referencia */
void llenarMatriz(vector<vector<int>>& matriz, char nombre) {
    cout << "\nIngrese valores de matriz " << nombre << ":\n";

    for (size_t i = 0; i < matriz.size(); i++) {
        for (size_t j = 0; j < matriz[i].size(); j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

/* Muestra matriz sin copiarla */
void mostrarMatriz(const vector<vector<int>>& matriz) {
    cout << "\nResultado:\n";
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << " ";
        }
        cout << endl;
    }
}

/* Validaciones */
bool mismasDimensiones(int fA, int cA, int fB, int cB) {
    return (fA == fB) && (cA == cB);
}

bool esMultiplicable(int cA, int fB) {
    return cA == fB;
}

bool esCuadrada(int filas, int columnas) {
    return filas == columnas;
}

/* Operaciones */

vector<vector<int>> sumar(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> R(A.size(), vector<int>(A[0].size()));
    for (size_t i = 0; i < A.size(); i++)
        for (size_t j = 0; j < A[i].size(); j++)
            R[i][j] = A[i][j] + B[i][j];

    return R;
}

vector<vector<int>> restar(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> R(A.size(), vector<int>(A[0].size()));
    for (size_t i = 0; i < A.size(); i++)
        for (size_t j = 0; j < A[i].size(); j++)
            R[i][j] = A[i][j] - B[i][j];

    return R;
}

vector<vector<int>> multiplicar(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> R(A.size(),vector<int>(B[0].size(), 0));
    for (size_t i = 0; i < A.size(); i++)
        for (size_t j = 0; j < B[0].size(); j++)
            for (size_t k = 0; k < B.size(); k++)
                R[i][j] += A[i][k] * B[k][j];

    return R;
}

vector<vector<int>> transpuesta(const vector<vector<int>>& A) {
    vector<vector<int>> T(A[0].size(), vector<int>(A.size()));
    for (size_t i = 0; i < A.size(); i++)
        for (size_t j = 0; j < A[i].size(); j++)
            T[j][i] = A[i][j];

    return T;
}

bool esSimetrica(const vector<vector<int>>& A) {
    for (size_t i = 0; i < A.size(); i++)
        for (size_t j = i + 1; j < A.size(); j++)
            if (A[i][j] != A[j][i])
                return false;

    return true;
}

void mostrarDiagonalPrincipal(const vector<vector<int>>& A) {
    cout << "\nDiagonal Principal:\n";
    for (size_t i = 0; i < A.size(); i++)
        cout << A[i][i] << " ";

    cout << endl;
}