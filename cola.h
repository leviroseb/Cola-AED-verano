#include<iostream>
using namespace std;



const int tamcola=50;


template<typename T>

class Cola
{
    protected:
    int frente;
    int final;
    T listaCola[tamcola];
    public:
    Cola(){
        frente=0;
        final=-1;
    }
    void insertar(const T& elemento){
        if(!colaLlena()){
            listaCola[++final]=elemento;
        }
        else{
            throw "Desbordamiento cola.";
        }
    }

    T quitar(){
        if(!colaVacia()){
            return listaCola[frente++];

        }
        else
        {
            throw "Cola vacia";
        }
        
    }

    void borrarCola(){
        frente=0;
        final=-1;
    }

    T frenteCola(){
        if(!colaVacia()){
            return listaCola[frente];
        }
        else{
            throw "Cola vacia";
        }
    }

    bool colaVacia(){
        return frente>final;
    }

    bool colaLlena(){
        return final==tamcola-1;
    }

};

