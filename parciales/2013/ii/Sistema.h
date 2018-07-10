#include "Subject.h"
#include "Tienda.h"

class Sistema : public Subject{
private:
	Tienda* tiendaConStock;
public:
	string comprar(int , int);
	void onCancel(Observer*);
}