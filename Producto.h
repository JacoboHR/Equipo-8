#ifndef PRODUCTO_H
#define PRODUCTO_H
//#include <string>
//#include <iostream>
//using namespace std;

class Producto{
    private:
        string nombre;
        float pcompra;
        float peso;
        float tam;
    public:
    //CONSTRUCTORES
        Producto();
        Producto(string _codigo, string _nombre, float _pcompra, float _pventa, float _peso, float _tam);
    //GETTERS
        string getCodigo();
        string getNombre();
        float getPcompra();
        float getPventa();
        float getPeso();
        float getTam();
    //SETTERS
        void setCodigo(string _codigo);
        void setNombre(string _nombre);
        void setPcompra(float _pcompra);
        void setPventa(float _pventa);
        void setPeso(float _peso);
        void setTam(float _tam);

    //METODO
        void mostrarProducto();
        string codigo;
        float pventa;

};

//CONSTRUCTORES
Producto::Producto(){
    codigo="---";
    nombre="---";
    pcompra=0;
    pventa=0;
    peso=0;
    tam=0;
}

Producto::Producto(string _codigo, string _nombre, float _pcompra, float _pventa, float _peso, float _tam){
    codigo=_codigo;
    nombre=_nombre;
    pcompra=_pcompra;
    pventa=_pventa;
    peso=_peso;
    tam=_tam;
}
//GETTERS
string Producto::getCodigo(){
    return codigo;
}

string Producto::getNombre(){
    return nombre;
}

float Producto::getPcompra(){
    return pcompra;
}

float Producto::getPventa(){
    return pventa;
}

float Producto::getPeso(){
    return peso;
}

float Producto::getTam(){
    return tam;
}


//SETTERS
void Producto::setCodigo(string _codigo){
    codigo=_codigo;
}

void Producto::setNombre(string _nombre){
    nombre=_nombre;
}

void Producto::setPcompra(float _pcompra){
    pcompra=_pcompra;
}

void Producto::setPventa(float _pventa){
    pventa=_pventa;
}

void Producto::setPeso(float _peso){
    peso=_peso;
}

void Producto::setTam(float _tam){
    tam=_tam;
}

//METODOS
void Producto::mostrarProducto(){
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
   // cout<<"Precio Compra: "<<pcompra<<endl;
    cout<<"Precio Venta: "<<pventa<<endl;
    cout<<"Peso: "<<peso<<endl;
    cout<<"Tamano: "<<tam<<endl;
    cout<<"........................................."<<endl;
}

#endif
