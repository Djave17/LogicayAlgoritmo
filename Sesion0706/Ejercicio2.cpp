/*. Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo.*/

#include <iostream> 
using namespace std; 

int main(int argc, char const *argv[])
{
    int num =0 , suma = 0; 
    while (num >= 0)
    {
        suma += num;
        cout << "Ingrese un número entero positivo(Ingresa un numero negativo para salir): "; 
        cin >> num; 
        

        /*if (num > 0)
        {
            suma += num; 
        }
        else
        {
            break;
        }*/
        
    }
    cout << "La suma de los números ingresados es: " << suma << endl;
    return 0;
}
