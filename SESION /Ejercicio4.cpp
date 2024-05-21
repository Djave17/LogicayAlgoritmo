#include <iostream> 
/* : El director de una escuela, está organizando un viaje de estudios, y requiere
determinar, cuánto debe cobrar a cada alumno, y cuánto debe pagar a la compañía de
viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, el
costo por cada alumno es de $60.00; de 50 a 99 alumnos, el costo es de $70.00; de
30 a 49, de $100.00; y si son menos de 30, el costo de la renta del autobús es de
$4,500.00, sin importar el número de alumnos. Escriba un programa que permita
determinar el pago a la compañía de autobuses y lo que debe pagar cada alumno por el
viaje. Dar énfasis al uso de la estructura de decisión múltiple (switch-case). Además, utilice
un menú de opciones por consola con sus respectivas funciones (módulos).
*/
using namespace std; 

#include <iostream>

using namespace std;

void calcularCostos(int numAlumnos);
void calcularPagoAutobus(int numAlumnos);

int main() {
    int opcion;
    int numAlumnos;

    do {
        // Mostrar el menú de opciones
        cout << "Menu de opciones:" << endl;
        cout << "1. Calcular costo por alumno y pago a la compañia de autobuses." << endl;
        cout << "2. Salir del programa." << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCostos(numAlumnos);
                break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
        }
    } while (opcion != 2);

    return 0;
}

void calcularCostos(int numAlumnos) {
    double costoPorAlumno;
    double costoTotalAutobus;

    switch (numAlumnos) {
        case 0 ... 29:
            costoTotalAutobus = 4500.00;
            cout << "El costo del autobús es de $4500.00." << endl;
            break;
        case 30 ... 49:
            costoPorAlumno = 100.00;
            cout << "El costo por alumno es de $100.00." << endl;
            break;
        case 50 ... 99:
            costoPorAlumno = 70.00;
            cout << "El costo por alumno es de $70.00." << endl;
            break;
        default:
            costoPorAlumno = 60.00;
            cout << "El costo por alumno es de $60.00." << endl;
    }

    if (numAlumnos <= 29) {
        cout << "El total a pagar a la compañía de autobuses es de $" << costoTotalAutobus << "." << endl;
    } else {
        double totalPago = numAlumnos * costoPorAlumno;
        cout << "El total a pagar a la compañía de autobuses es de $" << totalPago << "." << endl;
    }
}
