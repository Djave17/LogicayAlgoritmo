#include <iostream> 

#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON Teacher; 
    PERSON student[MAXREGISTER]; 
    int op, i = 0;
    cout << "CIF: ";
    cin >> Teacher.CIF;

    cout << "Nombre: ";
    scanf(" %[^\n]", Teacher.nombre); 
    cout << "Apellido: ";
    scanf(" %[^\n]", Teacher.apellido);



    printf("El CIF es: %s\n", Teacher.CIF);
    printf("Nombre Completo: %s%s\n", Teacher.nombre , Teacher.apellido);

    do
    {
        printf("Ingrese los datos del estudiante %d\n");
        printf("CIF: " );
        scanf(" %s", student[i].CIF);
        printf("Nombre: ");
        scanf(" %[^\n]", student[i].nombre);
        printf("Apellido: ");
        scanf(" %[^\n]", student[i].apellido);
        printf("Nota: "); 
        scanf("%d", &student[i].nota);

        printf("Desea ingresar otro registro? \n1.Si\n0.No \n Digite su opcion: "); 
        cin>>op;
        i++;
    } while (op!=0);

    printf("DATOS DEL PROFESOR\n");
    printf("El CIF es: %s\n", Teacher.CIF);
    printf("Nombre Completo: %s%s\n", Teacher.nombre , Teacher.apellido);

    printf("DATOS DE LOS ESTUDIANTES\n"); 
    for (int j = 0; j < i; j++)
    {
        printf("CIF: %s\n", student[j].CIF);
        printf("Nombre Completo: %s%s\n", student[j].nombre, student[j].apellido);
        printf("Nota: %d\n", student[j].nota);
    }





    
    
    return 0;
}
