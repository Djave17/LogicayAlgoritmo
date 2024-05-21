/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial.*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 0, factorial = 1;
    int n;
    cout << "Ingrese un número entero no negativo: ";
    cin >> num;
    n=num;
    if (num > 0)
    {
        while (num != 0)
        {
        factorial *= num;
        num--;
        }
  
    }
    else
    {
        cout << "El número ingresado no es válido" << endl;
        return 0;
    }
    cout << "El factorial de " << n  << " es: " << factorial << endl;
    return 0;
}
