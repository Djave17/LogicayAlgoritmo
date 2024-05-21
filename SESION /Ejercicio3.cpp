#include <iostream> 

using namespace std; 
/* Una compañía dedicada
al alquiler de automóviles, cobra $30
hasta un máximo de 500 KM de
distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más
un monto adicional del 5% por cada
kilómetro en exceso sobre 500. Para
más de 1,000 KM, cobra $30 más un
monto adicional del 8% por cada
kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin
impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada (if-then-else, if-then-else, if…). */

int main(int argc, char const *argv[])
{
    int distancia; 
    float iva; 
    float preciototal;
    float preciosiniva; 
    cout<<"Digite la distancia recorrida: ";
    cin>> distancia; 
    cout<<endl;
    if (distancia<=500)
    {   
        cout<<"El precio sin iva es 25.5"<< endl;
        cout<<"El precio total que debe pagar es 30"<< endl;
        
    }
    else if (distancia<=1000)
    {
        float distancia_extra = distancia - 500;
        preciototal = distancia_extra * (30*0.05); 
        preciototal += 30;
        iva = preciototal * 0.15; 
        preciosiniva= preciototal-iva; 
        cout<<"El precio sin iva es " << " " << preciosiniva << endl;
        cout<<"El precio total que debe pagar es: "<< preciototal << endl; 
    }
    else if (distancia>1000)
    {
        float distancia_extra = distancia - 500;
        preciototal = distancia_extra * (30*0.08); 
        preciototal += 30; 
        iva = preciototal * 0.15; 
        preciosiniva= preciototal-iva;
        cout<<"El precio sin iva es: " << preciosiniva << endl;
        cout<<"El precio total que debe pagar es: "<< preciototal << endl; 
    }
    
    
    
    return 0;
}
