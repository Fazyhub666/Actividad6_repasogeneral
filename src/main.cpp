/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) — 5°
   Institución: E.E.S.T. N° 1 "Eduardo Ader" - Vicente López
   Archivo: src/main.cpp
   Actividad 6: Suite de Taller de Repaso e Integración
   ====================================================================
*/

#include <iostream>
using namespace std;

// Prototipos de funciones
int sumaRecursiva(int n);
void intercambiarValores(int* ptrA, int* ptrB);

int main() {

    cout << "=====================================================" << endl;
    cout << "       TALLER INTEGRADOR DE REPASO - C++" << endl;
    cout << "       ESTUDIANTE: Benjamin Hlynczuk" << endl;
    cout << "=====================================================" << endl;


    // RETO 1: RECURSIVIDAD

    cout << "\n=== RETO 1: SUMA RECURSIVA ===" << endl;

    int num = 5;

    cout << "Suma acumulada de 1 hasta " << num << ": ";
    cout << sumaRecursiva(num) << endl;


    // RETO 2: ARRAYS Y BUSQUEDA SECUENCIAL

    cout << "\n=== RETO 2: BUSQUEDA EN MEMORIA CONTIGUA ===" << endl;

    const int TAM = 10;

    int vectorDatos[TAM] = {
        12, 45, 78, 90, 122, 5, 18, 33, 67, 99
    };

    int numeroBuscar = 18;
    bool hallado = false;

    for (int i = 0; i < TAM; i++) {

        if (vectorDatos[i] == numeroBuscar) {

            cout << "[SISTEMA] Valor " << numeroBuscar;
            cout << " hallado en el indice [" << i << "]" << endl;

            cout << "Direccion RAM Hexadecimal: ";
            cout << &vectorDatos[i] << endl;

            hallado = true;

            break;
        }
    }

    if (!hallado) {
        cout << "[SISTEMA] El valor " << numeroBuscar;
        cout << " no existe en el arreglo." << endl;
    }


    // RETO 3: INTERCAMBIO CON PUNTEROS

    cout << "\n=== RETO 3: INTERCAMBIO DE VALORES ===" << endl;

    int x = 100;
    int y = 500;

    cout << "Valores previos -> X: " << x;
    cout << " | Y: " << y << endl;

    // Enviamos las direcciones de memoria
    intercambiarValores(&x, &y);

    cout << "Valores actuales -> X: " << x;
    cout << " | Y: " << y << endl;

    cout << "=====================================================" << endl;

    return 0;
}


// FUNCION RECURSIVA

int sumaRecursiva(int n) {

    // Caso base
    if (n <= 0) {
        return 0;
    }

    // Llamada recursiva
    return n + sumaRecursiva(n - 1);
}


// FUNCION DE INTERCAMBIO MEDIANTE PUNTEROS

void intercambiarValores(int* ptrA, int* ptrB) {

    int temporal = *ptrA;

    *ptrA = *ptrB;

    *ptrB = temporal;
}
