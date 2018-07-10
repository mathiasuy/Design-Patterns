#include "Pago.h"

class Contado : public Pago{
	private:
		float descuento;
	public:
		Contado(float,float);
		virtual ~Contado();
}