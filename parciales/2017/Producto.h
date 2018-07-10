#include "DataItemProd.h"

class Producto{
private:
	int idP;
public:
	virtual void setPrecioItem(DataItemProd* dip)=0;
	
	Producto(int);
	virtual ~Producto();
}