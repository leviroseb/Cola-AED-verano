#include<iostream>
#include "cola.h"

using namespace std;

int main()
{
    Cola<int> cola;
    int x,k;

    cout<<"Ingresar numero de elementos de la cola: ";
    cin>>x;

    for(int i=0;i<x;i++){
        int d;
        cout<<"Ingrese un elemento de la cola: ";
        cin>>d;
        cola.insertar(d);
    }

    while(!cola.colaVacia()){
        k=cola.quitar();
        cout<<k<<" ";
    }

}