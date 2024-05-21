/*Imprimir pares de 0 a 300*/
#include <iostream> 

using namespace std; 

int main() 
{   
    int i = 0; 

    while (i <= 300)
    {
        i++; 
        if (i % 2 == 0)
        {
            cout << "Num: " << i << endl;
        }

        
    }
    
    return 0; 
}