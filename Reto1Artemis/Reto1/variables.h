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

#define MAX_BOOKS 10
#define MAX_YEAR 1900
#define MAX_ISBN 13
#define CurrentYear 2024

struct Libro
{
    char title[100];
    char autor[100];
    char isbn[MAX_ISBN];
    int date;
};

