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
#include <ctime>
#include "variables.h"

using namespace std; 

void addBook(Libro *libros, int &size)
{
    if(size < MAX_BOOKS)
    {
        cout << "Ingrese el título del libro: ";
        cin >> libros[size].title;
        cout << "Ingrese el autor del libro: ";
        cin >> libros[size].autor;
        fflush(stdin);
        cout << "Ingrese el ISBN del libro: ";
        cin >> libros[size].isbn;
        fflush(stdin);
        cout << "Ingrese el año de publicación del libro: ";
        cin >> libros[size].date;
        fflush(stdin);
        size++;
    }
    else
    {
        cout << "El catálogo está lleno." << endl;
    }
}

void showBooks(Libro *libros, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Título: " << libros[i].title << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "ISBN: " << libros[i].isbn << endl;
        cout << "Año de publicación: " << libros[i].date << endl;
    }
}

void showRecentBooks(Libro *libros, int size)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    for(int i = 0; i < size; i++)
    {
        if(currentYear - libros[i].date <= 5)
        {
            cout << "Título: " << libros[i].title << endl;
            cout << "Autor: " << libros[i].autor << endl;
            cout << "ISBN: " << libros[i].isbn << endl;
            cout << "Año de publicación: " << libros[i].date << endl;
        }
    }
}

int main()
{
    Libro libros[MAX_BOOKS];
    int size = 0;
    int option;
    do
    {
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Mostrar libros recientes (menos de 5 años)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> option;
        switch(option)
        {
            case 1:
                system("cls");
                addBook(libros, size);
                break;
            case 2:
                system("cls");
                showBooks(libros, size);
                break;
            case 3:
                system("cls");
                showRecentBooks(libros, size);
                break;
            case 4:
                system("cls");
                cout << "Saliendo..." << endl;
                break;
            default:
                system("cls");
                cout << "Opción inválida." << endl;
                break;
        }
    } while(option != 4);
    return 0;
}