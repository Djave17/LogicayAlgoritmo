/*Tabla de multiplicar con punteros*/

#include <iostream>

using namespace std; 

int main() 
{ 
    int *puntero;
    int num;
    puntero = &num; 

    cout << "Ingrese el numero: " << endl;
    cin>> num;
      
    
    for (int i = 0; i <= 12; i++)
    {
        cout<< *puntero << "x"<< i << "=" << *puntero * i << endl;
        
    }
    
   
    return 0;
}