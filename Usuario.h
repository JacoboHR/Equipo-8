#ifndef USUARIO_H
#define USUARIO_H


class Usuario{
	private:
		string nombre;
		string rfc;
		string direccion;
	
	public:	
	//CONSTRUCTORES
		Usuario();
		Usuario(string _nombre, string _rfc, string _direccion);
	//GETTERS	
		string getNombre();
		string getRFC();
		string getDireccion();
	//SETTERS
		void setNombre(string _nombre);
		void setRFC(string _rfc);
		void setDireccion(string _direccion);
		void quitarUsuario(string _name);
		
		void imprime();	
};

//CONSTRUCTORES

Usuario::Usuario(){
	nombre="Desconocido";
	rfc="Desconocido";
	direccion="Desconocido";
}

Usuario::Usuario(string _nombre, string _rfc, string _direccion){
	nombre=_nombre;
	rfc=_rfc;
	direccion=_direccion;
}

//GETTERS

string Usuario::getNombre(){
	return nombre;
}

string Usuario::getRFC(){
	return rfc;
}

string Usuario::getDireccion(){
	return direccion;
}



//SETTERS
void Usuario::setNombre(string _nombre){
	nombre=_nombre;
}

void Usuario::setRFC(string _rfc){
	rfc=_rfc;
}

void Usuario::setDireccion(string _direccion){
	direccion=_direccion;
}

//METODO
void Usuario::quitarUsuario(string _name){
	if(nombre==_name){
		nombre="Usuario Borrado";
		rfc="Usuario Borrado";
		direccion="Usuario Borrado";
	}
	else
	{
		cout<<"El nombre que ingreso del usuario no existe";
	}
}

void Usuario::imprime(){
	cout<<"\n\t\t\t\t\t---Datos del Cliente---"<<endl;
	cout<<"\n\t\t\t\t\tNombre: "<< nombre;
	cout<<"\n\t\t\t\t\tRFC: "<< rfc;
	cout<<"\n\t\t\t\t\tDireccion: "<<direccion<<endl;
}


#endif
