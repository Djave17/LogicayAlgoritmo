#include <iostream> 
/*: Escribir un programa que lea los tres lados
de un triángulo. Determinar el tipo de triángulo:
equilátero, si tiene tres lados iguales; o isósceles, si tiene
dos lados iguales. Dar énfasis al uso de la estructura de
decisión doble (if-then-else).*/

using namespace std; 

int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3;
    cout << "Escriba un lado del triangulo: "; 
    cin >> lado1; 
    cout << "Escriba el segundo lado del triangulo: "; 
    cin >>lado2; 
    cout << "Escriba el tercer lado del triangulo: "; 
    cin >>lado3; 

    if (lado1==lado2 && lado2== lado3)
    {
        cout<<"Es un triangulo equilatero"; 
        
    }
    else if (lado1==lado2 || lado2== lado3 || lado3==lado1)
    {
       cout<<"Es un triangulo isoceles"; 
    }
    else
    {
        cout<<"Es un triangulo escaleno, ninguno de sus lados son iguales"; 
    }
    
    
    
    return 0;
}
