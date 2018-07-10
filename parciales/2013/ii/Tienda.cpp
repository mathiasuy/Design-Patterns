#include "Tienda.h"

void notify(Event* ev);{
	EventoCompra* evc = dynamic_cast<EventoCompra*>(ev);
	Producto* prod = lp.find(evc->getIdProducto());
	if(prod != evc.end() && prod->getStock() >= prod->getCant()){
		prod->setStock(prod->getStock() - evc->getCant());
		evc->cancel();
	}
}