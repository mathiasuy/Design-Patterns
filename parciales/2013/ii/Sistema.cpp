#include "Sistema.h"

string 	Sistema::comprar(int id, int cant){
	tiendaConStock = NULL;
	Evento* ev = EventoCompra(id,cant);
	notifyObservers(ev);
	delete ev;
	if (tiendaConStock == NULL){
		throw std::invalid_argument("Error");
	}
	return tiendaConStock->getNombre();
};

void 	Sistema::onCancel(Observer* o){
	this->tiendaConStock = dynamic_cast<Tienda*>(o);
};