/*Crear un programa en C++ que gestione un catálogo de libros utilizando estructuras y arreglos. El programa debe proporcionar un menú con opciones para agregar y mostrar libros, y mostrar aquellos libros cuya publicación sea menor a 5 años.
1. Requisitos del Programa:
○ Definir la estructura del libro:
○ Título
○ Autor
○ ISBN
○ Año de publicación
2. Implementar las siguientes funciones:
○ Agregar un nuevo libro al catálogo.
○ Mostrar todos los libros en el catálogo.
○ Mostrar los libros publicados en los últimos 5 años.
3. Crear un menú que permita al usuario seleccionar una de las siguientes opciones:
○ Agregar un libro
○ Mostrar todos los libros
○ Mostrar libros recientes (menos de 5 años)
○ Salir
4. Restricciones adicionales:
○ Limitar el tamaño del catálogo a un número máximo de libros.
○ No permitir agregar libros con un año de publicación en el futuro.
○ Verificar que el ISBN tenga una longitud específica (13 caracteres).
○ No permitir que el año de publicación sea menor a 1900.*/

#include <iostream>
#include <string>
#include "variables.h"

using namespace std;
void addBook(Libro *libros, int &contador);
void showBooks(Libro *libros, int contador);
void showRecentBooks(Libro *libros, int contador);
void menu(Libro *libros, int &contador);

void addBook(Libro *libros, int &contador){
    
    int op; 
    int op2; 
    cout<<"Bienvedido al sistema de registro de libros"<<endl;
    do
    {
        cout<<"Ingrese el titulo del libro: ";
        scanf(" %[^\n]", libros[contador].title);
        fflush(stdin);
        cout<<"Ingrese el autor del libro: ";
        scanf(" %[^\n]", libros[contador].autor);
        fflush(stdin);
        
        cout<<"Ingrese el año de publicacion del libro: "; 
        cin>>libros[contador].date;
        if (libros[contador].date > CurrentYear|| libros[contador].date < MAX_YEAR)
        {
            cout<<"No es posible agregar una fecha futura, y tiene que ser mayor al año 1900"<<endl;
            cout<<"Desea volver a intentar? 1. Si 2. No"<<endl;
            cin>>op; 
            if (op == 2)
            {
                return menu(libros, contador);
            }
            return addBook(libros, contador);
        }
        fflush(stdin);
        cout<<"Ingrese el ISBN del libro: ";
        cin>>libros[contador].isbn;
        if (strlen(libros[contador].isbn) != MAX_ISBN)
        {
            cout<<"El ISBN debe tener 13 caracteres"<<endl;
            cout<<"Desea volver a intentar? 1. Si 2. No"<<endl;
            cin>>op; 
            if (op == 2)
            {
                return menu(libros, contador);
            }
            return addBook(libros, contador);
        }
        fflush(stdin);
        contador++;
        cout<<"Desea agregar otro libro? 1. Si 2. No"<<endl;
        cin>>op2;
        switch (op)
        {
        case 1:
            return addBook(libros, contador);
            
            break;
        case 2:
            return menu(libros, contador);

            break;
        
        default:
            break;
        }
    } while (op == 1);
    
}

void showBooks(Libro *libros, int contador){
    if(contador == 0){
        cout<<"No hay libros registrados"<<endl;
        return;
    }
    for (int i = 0; i < contador; i++)
    {
        cout<<"-------Libro "<<i+1<<"-------"<<endl;
        cout<<"Titulo: "<<libros[i].title<<endl;
        cout<<"Autor: "<<libros[i].autor<<endl;
        cout<<"Año de publicacion: "<<libros[i].date<<endl;
        cout<<"ISBN: "<<libros[i].isbn<<endl;
        cout<<endl;
    }
    
}

void showRecentBooks(Libro *libros, int contador){
    
    cout<<"-------Libros publicados en los ultimos 5 años-------"<<endl;

    
    
    
    for (int i = 0; i < contador; i++)
    {
        
        
        if (CurrentYear - libros[i].date <= 5)
        {
            cout<<"-------Libro "<<i+1<<"-------"<<endl;
            cout<<"Titulo: "<<libros[i].title<<endl;
            cout<<"Autor: "<<libros[i].autor<<endl;
            cout<<"Año de publicacion: "<<libros[i].date<<endl;
            cout<<"ISBN: "<<libros[i].isbn<<endl;
            
            
        }
    }

    for (int f = 0; f < contador; f++)
    {
        if (contador == 0||CurrentYear - libros[f].date > 5 )
        {
        cout<<"No hay libros recientes..."<<endl;
        return;
        }
        
    }
    
}

void menu(Libro *libros, int &contador){
    
    int op;

    char l; 
    do
    {
        system ("clear");
        cout<<"Bienvenido al sistema de registro de libros"<<endl;
        cout<<"1. Agregar un libro"<<endl;
        cout<<"2. Mostrar todos los libros"<<endl;
        cout<<"3. Mostrar libros recientes (menos de 5 años)"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>op;
        switch (op)
        {
        case 1:
            system ("clear");
            addBook(libros, contador);
            cout<<"Libro agregado correctamente"<<endl;
            cout<<"Ingrese una tecla para continuar... "<<endl;
            cin>>l; 
           
            
            break;
        case 2:
            system ("clear");
            showBooks(libros, contador);
            
            cout<<endl<<"Ingrese una tecla para continuar... ";
            cin>>l; 
           
            
            break;
        case 3:
            system ("clear");
            showRecentBooks(libros, contador);
            cout<<endl<< "Ingrese una tecla para continuar... ";
            cin>>l; 
            
            
            break;
        case 4:
            system ("clear");
            cout<<"Gracias por utilizar el sistema de registro de libros"<<endl;
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            cout<<endl<< "Ingrese una tecla para continuar... ";
            cin>>l; 
            break;
        }
    } while (op != 4);
}

