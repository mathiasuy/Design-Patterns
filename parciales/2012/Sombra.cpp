#include "Sombra.h"

ICollection* col;

Sombra::Sombra(){
	sombras = NULL;
};

Sombra::~Sombra(){
	IIterator it = sombras->getIterator();
	while (it->hasNext() != NULL){
		ICollectible* e = it->next();
		Sombra* s = dynamic_cast<Sombra*>(e);
		delete s;
	}
};

Sombra* Sombra::nuevaSombra(){
	if (sombras == NULL)
		sombras = new List();
	Sombra* c = this->getCopia(this);
	c->sombras = this->sombras;
	this->sombras->add(c);
	return c;
};

void Sombra::propagar(){
	if (sombras != NULL){
		IIterator* i = sombras->getIterator();
		while (i->hasNext()){
			Sombra* s = dynamic_cast<Sombra*>(i->next());
			this->copiarContenido(s);
		}
	}
};