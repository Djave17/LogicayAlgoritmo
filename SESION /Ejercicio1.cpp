/*Escribir un programa para deducir si una variable o
expresión numérica es par. Dar énfasis al uso de la estructura de
decisión simple (if-then).*/

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " es un número par." << endl;
    } else {
        cout << numero << " es un número impar." << endl;
    }

    return 0;
}

