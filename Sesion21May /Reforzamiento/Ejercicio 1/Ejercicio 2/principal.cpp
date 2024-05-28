/*Almacenar numeros pares*/

#include <iostream>
using namespace std; 

#define MAX 10000



int main(int argc, char const *argv[])
{
    int pos; 
    int op = 1; 
    int array[MAX]; 
    cout<<"Almacenar numeros pares"<<endl; 

    while (op != 0)
    {
        if (pos<MAX)
        {
            cout<<" Ingresa un numero: ";
            cin >> array[pos];
            pos++;
        }
        cout<<"Desea ingresar un numero \n0. No \n1. Si: "; 
        cin >> op; 
        
       


    }
    
    



    /*cout<< "Ingrese el limite de numeros pares a almacenar: "; 
    cin>> n;

    for(int i = 0; i < n; i++){ 
        if (array[i] % 2 == 0)
        {
            cout<<"Par: "<<array[i]<<endl;
        }
        
    }*/

    return 0;
}
