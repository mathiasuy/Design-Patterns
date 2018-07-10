#include "Producto.h"
#include "DataItemProd.h"

class Fijo : public Producto{
	private:
		float precioF;
	public:
		void setPrecioItem(DataItemProd*);

		Fijo(int,float);
		virtual ~Fijo();
}