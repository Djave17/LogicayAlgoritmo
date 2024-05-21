/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego calcule la suma de todos los elementos del
arreglo.*/
#include <iostream> 

using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[5];
    int i = 0, suma = 0; 
    while (i < 5)
    {
        cout<< "Ingrese un número entero: ";
        cin >> arreglo[i];
        suma += arreglo[i];
        i++;
    }
    cout<<"La suma de los números ingresados es: "<<suma<<endl;
    
    return 0;
}

