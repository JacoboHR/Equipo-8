#include <iostream>
using namespace std;

#include "Usuario.h"
#include "Producto.h"
#include "Inventario.h"
#include "Orden.h"

int main(){
    float * cantidad;
    Producto * producto;
    cantidad=new float[100];
    producto=new Producto[100];
    Inventario inventario(cantidad, producto, 0);


    cout<<"\t\t\t\t.........d) Agregar 3 clientes......."<<endl;
    Usuario u1 ("Andrea", "M02T52", "CDMX");
    Usuario u2 ("Martin", "E42P55", "GDL");
    Usuario u3 ("Hidalgo", "H87N59", "PV");
    u1.imprime(); u2.imprime(); u3.imprime();

    cout<<"\t\t\t\t.........e) Modificar un cliente......."<<endl;
    u1.setNombre("Alejandra"); u1.setRFC("G07N69");u1.setDireccion("MTY");
    u1.imprime();
    
    cout<<"\t\t\t\t.........f) Quitar 1 cliente......."<<endl;
    u1.quitarUsuario("Alejandra");
    u1.imprime();

  
    Producto p1("123","Cama",4000,5000,60,30);
    Producto p2("456","Comoda",2000,1500,20,40);
    Producto p3("789","Silla",800,100,8,10);
    Producto p4("012","Mesa",3000,3500,25,15);
    Producto p5("345","Sala",35000,40000,190,85);
    Producto p6("678","Armario",25000,35000,50,90);
    Producto p7("901","Escritorio",8000,9000,10,15);
    Producto p8("234","Lampara",800,1000,4,5);


    cout<<"\n\t\t\t\t.........a) Agregar 8 productos......."<<endl;
    inventario.agregarProducto(p1,5);
    inventario.agregarProducto(p2,10);
    inventario.agregarProducto(p3,8);
    inventario.agregarProducto(p4,6);
    inventario.agregarProducto(p5,3);
    inventario.agregarProducto(p6,1);
    inventario.agregarProducto(p7,6);
    inventario.agregarProducto(p8,4);
    cout<<"\n\t\t\t\tSe han agregado "<<inventario.registro<<" productos al inventario"<<endl;
    inventario.imprimirInventario();
   
    cout<<"\n\t\t\t\t.........b) Modificar un producto (producto1)......."<<endl;
    inventario.modificarProducto("456",20);
    inventario.modificarProducto("123",20);
    inventario.modificarProducto("789",20);
    inventario.modificarProducto("012",20);
    inventario.imprimirInventario();


    cout<<"\n\t\t\t\t.........c) Eliminar un producto (producto1)......"<<endl;
    inventario.quitarProducto("123");
    inventario.imprimirInventario();


    cout<<"\n\t\t\t\t.........g) Generar una orden......"<<endl;
    Orden orden(inventario, u2,0.0,"Tarjeta");
    orden.calcularTotal();

    cout<<"\n\t\t\t\t.........h) Mostrar los datos de la orden generada......"<<endl;
    orden.imprimirOrden();

    return 0;
}