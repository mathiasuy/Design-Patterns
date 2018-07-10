#include "Personalizable.h"

Personalizable::Personalizable(int id):Producto(id){
}

Personalizable::~Personalizable(){
	map<string,Componente*>::iterator i = this->componentes.begin();
	while (i != this->componentes.end()){
		delete (*i)->second;
		i++;
	}
}

void Personalizable::setPrecioItem(DataItemProd* dip){
	DataItemProdPers* dipp = dynamic_cast<DataItemProdPers*>(dip);
	float retorno = 0;
	for (list<DataCompOp>::iterator i; i != dipp->getPersonalizacion().end(); ++i){
		retorno += (*i)->getPrecioOp();
	}
	dip.setPrecio(retorno);
}

void Personalizable::nuevoComp(string nomComp){
	this->componentes.push_back(new Componente(nomComp));
}

void Personalizable::elimComp(string nomComp){
	Componente* c = componentes[nomComp];
	this->componentes.erase(nomComp);
	delete c;
}

void Personalizable::nuevaOpComp(string nomComp, string op, float precioOp){
	this->componentes[nomComp]->nuevaOp(op,precioOp);
}