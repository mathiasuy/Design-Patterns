#import "TTarjeta.h"
#import "Pago.h"

class Tarjeta : public Pago{
	private:
		TTarjeta tarjeta;
	public:
		Tarjeta(float, TTarjeta);
		virtual ~Tarjeta();
}