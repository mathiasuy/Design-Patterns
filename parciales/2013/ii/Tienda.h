#include "Observer.h"
#include "EventoCompra.h"

class Tienda : public Observer{
	private:
		string nombre;
		set<Producto*> lp;
	public:
		void notify(Event*);
}