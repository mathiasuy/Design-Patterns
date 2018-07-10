#include "NSActualizador.h"

	NSActualizador* NSActualizador::instancia = NULL;

	NSActualizador::NSActualizador(){
		this->apps = List();
	};

	NSActualizador::~NSActualizador(){
		IIterator* i = this->apps->getIterator();
		while (i->hasCurrent()){
			NSIAplicacion* a = dynamic_cast<NSIAplicacion*>(i->getCurrent());
			this->apps->remove(a);
			delete a;
			i->next();
		}
		delete i;
		delete apps;
	};

	void NSActualizador::agregarAplicacion(NSIAplicacion* a){
		this->apps->add(a);
	};

	void NSActualizador::quitarAplicacion(NSIAplicacion* a){
		this->apps->remove(a);
	};
	
	void NSActualizador::actualizarContenidoAplicaciones(){
		IIterator* i = this->apps->getIterator();
		while (i->hasCurrent()){
			NSIAplicacion* a = dynamic_cast<NSIAplicacion*>(i->getCurrent());
			a->actualizarContenido();
			i->next();
		}
		delete i;
	};
	
	NSActualizador* NSActualizador::obtenerInstancia(){
		if (instancia == NULL)
			instancia = new NSActualizador();
		return instancia;
	};
	