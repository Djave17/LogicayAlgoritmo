/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int cant, suma, promedio, i = 0; 
    int nota[100];
    cout<< "Escribe la cantidad de notas: "<<endl;
    cin>> cant; 
    
    while (i<cant)
    {
        cout<< "Escribe la nota #"<< i +1 <<endl; 
        cin >> nota[cant]; 
        suma += nota[cant]; 
        i++; 
    }
    promedio= suma/cant;
    cout<< "El promedio es: "<< promedio << endl;  
    return 0;
}
