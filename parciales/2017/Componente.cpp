#include "Componente.h"

void Componente::nuevaOp(string t, float p){
	this->opciones.push_back(new Opcion(t,p));
};

Componente::Componente(string n){
	this->nomComp = n;
};

Componente::~Componente(){
	list<Opcion*>::iterator i = this->opciones.begin();
	while (i != this->opciones.end()){
		delete *i;
		i++;
	}
};