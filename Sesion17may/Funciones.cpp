#include <iostream> 
#include "variables.h" 

using namespace std;

/*prototipo de funciones*/
void menu();
void AgregarEdad(); 
void principal();
void mostrarEdades();
void mostrarmayor(); 
void mostrarmenor();
void promedioedad();

//principal

void principal(){
    int opcion = 0; 

    while (opcion!= 6)
    {

        menu();
        cin>>opcion;
        switch (opcion)
        {
            case 1:
                AgregarEdad();
                break;
            case 2: 
                mostrarEdades(); 
                break; 
            case 3: 
                mostrarmayor(); 
                break; 
            case 4: 
                mostrarmenor();
                break;
            case 5: 
                promedioedad();
                break;
            case 6: 
                cout<<"Gud bai"<<endl;
                break;
            default:
                break;  
        }
        
        
    }
    
}
//funciones 
void menu(){
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostrar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;

    
}

/*Agregar edades*/

void AgregarEdad(){
    system("cls || clear");
    cout<<"Ingrese la cantidad de edades que desea agregar: ";
    cout<<endl;
    cin>>cantidad; 
    for (int i = 1; i <= cantidad; i++)
    {
        cout<< "Dime la edad: "; 
        cin>> ages[i];
    }
   
}

void mostrarEdades(){
    system("cls || clear");

    for (int i = 1; i <= cantidad; i++)
    {
        cout<<"Edad #"<< i << " : " <<ages[i]<<endl;
    }
    
    
}

void mostrarmayor(){
    system("cls || clear");
    int mayor = 0;
    for(int i = 1; i <ages[cantidad]; i++){ 
        if(ages[i]>mayor)
        {
            mayor = ages[i];
        }
        
    }
    cout<<"La edad mayor es: "<< mayor<< endl;
    
}
void mostrarmenor(){
    system("cls || clear");
    int menor = MAX;
    for(int i = 1; i <cantidad; i++){ 
        if(ages[i]<menor)
        {
            menor = ages[i];
        }
        
    }
    cout<<"La edad menor es: "<< menor<< endl;
    
}

void promedioedad(){
    system("cls || clear");
    int suma = 0; 
    int promedio = 0; 

    for (int i = 1; i <= cantidad; i++){ 
        suma += ages[i];
    }
    promedio = suma /cantidad; 
    cout<<"El promedio de edades es: "<< promedio<< endl; 
    
    

}


