#include "Inventario.h"
#include "Usuario.h"

class Orden{
    private:
        Inventario inventario;
        Usuario usuario;
        float total;
        string pago;
    public:
    //CONSTRUCTORES
        Orden();
        Orden(Inventario _inventario, Usuario _usuario, float _total, string _pago );
        //METODOS
        void calcularTotal();
        void formaPago();
        void imprimirOrden();
};

//CONSTRUCTORES
Orden::Orden(Inventario _inventario, Usuario _usuario, float _total, string _pago){
    inventario=_inventario;
    usuario=_usuario;
    total=_total;
    pago=_pago;
}

void Orden::calcularTotal(){
    total=0;
    float precio;
    int cantidad;
    for(int i=0; i<inventario.registro;i++){
        precio=inventario.producto[i].pventa;
        cantidad=inventario.cantidad[i];
        total += (precio*cantidad);
    }
}

void Orden::imprimirOrden(){
    calcularTotal();
    cout<<"\t\t\t\t\t.-.-.-.-.-Orden.-.-.-.-.-"<<endl;
    usuario.imprime();
    inventario.imprimirInventario();
    cout<<"\n-> Total: "<<total<<endl;
    cout<<"\n->Forma de pago: "<<pago;
}