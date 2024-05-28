#include <iostream>
using namespace std; 

//Pedir dos numeros y sumarlos, proceso con funciones, y luego imprimir el resultado

int sumar(int num1, int num2){ 
    return num1 + num2; 
}

int main(int argc, char const *argv[])
{
    int num1, num2; 
    cout << "Ingrese el primer numero: "; 
    cin >> num1; 
    cout << "Ingrese el segundo numero: "; 
    cin >> num2; 

    cout << "La suma de los numeros es: " << sumar(num1, num2) << endl; 
    return 0;
}

