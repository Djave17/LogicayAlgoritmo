/*Leer un numero y obtener la tabla de multiplicacion de dicho numero*/
#include <iostream> 

using namespace std; 

int main(int argc, char const *argv[])
{
    int num = 0; 

    cout << "Ingrese un numero: ";
    cin >> num; 

int i = 0;
    int multiplicacion = 0; 
    while (i < 12)
    {
        i++; 
        multiplicacion = num * i; 
        cout << num << " x " << i << " = " << multiplicacion << endl; 
    
    }
    
    return 0;
}