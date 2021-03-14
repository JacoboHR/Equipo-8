#ifndef INVENTARIO_H
#define INVENTARIO_H


#include "Producto.h"

class Inventario{
    private:
    public:
        //CONSTRUCTORES
        Inventario();
        Inventario(float * _cantidad, Producto * _producto, int _registro);
       //METODOS
        void agregarProducto(Producto p, int _cantidad);
        void modificarProducto(string _cod, int _cantidad);
        void quitarProducto(string _cod);
        void imprimirInventario();
        int buscarProducto(string _cod);

        Producto * producto;
        int registro;
        float * cantidad;
};

//CONSTRUCTORES

Inventario::Inventario(){
    cantidad= new float[100];
    producto= new Producto[100];
    registro=0;
}

Inventario::Inventario(float * _cantidad, Producto * _producto, int _registro){
    cantidad=_cantidad;
    producto=_producto;
    registro=_registro;
}

//METODOS

void Inventario::agregarProducto(Producto p, int _cantidad){
    producto[registro]=p;
    cantidad[registro]=_cantidad;
    registro +=1;
}

int Inventario::buscarProducto(string _cod){
    for(int i=0; i<registro; i++){
        if(producto[i].codigo == _cod){
            return 0;
        }
        else{
            return -1;
        }
    }
}

void Inventario::quitarProducto(string _cod){
    int i= buscarProducto(_cod);
    if (i>=0){
        producto[i]=producto[registro -1];
        cantidad[i]=cantidad[registro -1];
//Actualizando el producto borrado
        producto[registro -1]=producto[registro];
        cantidad[registro -1]=0;

        registro--;
    }
}

void Inventario::modificarProducto(string _cod, int _cantidad){
    int i= buscarProducto(_cod);
    cantidad[i]=_cantidad;
}


void Inventario::imprimirInventario(){
    for (int i=0; i<registro; i++){
        cout<< "Cantidad de piezas: "<<cantidad[i]<<endl;
        producto[i].mostrarProducto();
    }
}

#endif