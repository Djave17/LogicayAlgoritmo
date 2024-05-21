/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0, j = 0, mayor;
    
    
    int array[10]; 
    while (i < 10)
    {
        cout<< "Escriba un numero en la posicion ["<< i +1 << "]: ";    
        cin >> array[i];
        
    
    
        if (array[i] > mayor)
        {
            mayor = array[i];
        }
        
        i++;

    }
    cout << "El número más grande es: " << mayor << endl;
    
   
    
    return 0;
}
