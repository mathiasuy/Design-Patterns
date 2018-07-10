#include "Usuario.h"

list<Byte> Usuario::descargar_cancion(int id){
	if (!this->favoritas.fnid(id) == this->favoritas.end()){
		throw std::invalid_argument("Error");
	}
	return this->favoritas[id]->getContenido();
};

Usuario::Usuario(string a,string b,string c){
	this->nombre = a;
	this->email = b;
	this->password = c;
	this->en_reproduccion = NULL;
};


Usuario::~Usuario(){};