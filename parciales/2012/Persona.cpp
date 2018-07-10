#include "Persona.h"

Sombra* Persona::getCopia(){
	return new Sombra(this);
};

void Persona::setNombre(string nombre){
	this->nombre = nombre;
	this->propagar();
};

void Persona::copiarContenido(Sombra* s){
	(Persona*)s->setNombre(this->nombre);
};

Persona::Persona(string nombre):Sombra(){
	setNombre(nombre);
}

Persona::Persona(Sombra* s):Sombra(){
	setNombre(s->getNombre());
}

Persona::~Persona(){};