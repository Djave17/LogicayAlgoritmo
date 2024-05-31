#include <iostream> 

using namespace std; 

int main() 
{ 
    int variable; 
    int *puntero;

    puntero = &variable;
    variable = 5;
    
    printf("Variable: %d\n", variable);
    printf("Puntero  %d\n", *puntero);

    *puntero = 8;
    printf("\nVariable: %d\n", variable);
    printf("Puntero  %d\n", *puntero);
    return 0;
}