#include <iostream> 
#include <string.h>
#include "variables.h"


using namespace std;

CIUDAD cuidades[MAX_REG]; 
int pos=0;
//crud 
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c);
void eliminar(CIUDAD *c);
CIUDAD buscar(int id);
int menu(int op);
void principal();

void agregar(CIUDAD *c){
    cuidades[pos]= *c;
    pos++;
}

CIUDAD buscar(int id){
    for(int i=0; i<pos; i++){
        if(cuidades[i].id==id){
            return cuidades[i];
        }
    }
    CIUDAD c;
    return c; 
    
}

int obtPos(int id){
    void eliminar(int id);
    int posi = 0;
     for(int i=posi; i<pos; i++){
        cuidades[i]=cuidades[i+1];
    }
    return -1;
}
void editar(CUIDAD *c, int id){ 
    int posi = obtpos9(id); 
    strpy(cuidades[posi].nombre, c->nombre);
    strpy(cuidades[posi].descripcion, c->descripcion);
    
}

void eliminar(int id){
    int posi = 0;
    for(int i=0; i<pos; i++){
        if(cuidades[i].id==id){
            posi = i;
            break;
        }
       
        
    }

    for(int i=posi; i<pos; i++){
        cuidades[i]=cuidades[i+1];
    }
    pos--;
}

int menu(int op){
    cout<<"==========Menú==========\n";
    cout<<"1. Agregar"<<endl;
    cout<<"2. Editar"<<endl;
    cout<<"3. Eliminar"<<endl;
    cout<<"4. Buscar"<<endl;
    cout<<"5. Mostrar"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Ingrese una opcion: ";

    cin>>op;
    return op;
}

void principal(){ 
    int op; 
    do
    {
        op = menu(op);
        switch (op)
        {
            case 1:
                pedirDatos();
                break;
            default: 

                break;
        }
    } while (while op =! 6);
    

}

void pedirDatos(){
    CIUDAD ciudad; 
    cout<<"Datos de cuiadad \n";
    cout<<"ID: ";
    cin>>cuidad.id;
    cout<<"Nombre: ";
    cin>>cuidad.nombre;
    cout<<"Descripcion: ";
    cin>>cuidad.descripcion;
    agregar(&ciudad);
    cout<<"Cuidad agregada con exito\n";
    
}