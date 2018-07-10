#include "DataItemProd.h"
#include "DataCompOp.h"
#include <list>

class DataItemProdPers : public DataItemProd{
	private:
		list<DataCompOp> personalizacion;
	public:
		list<DataCompOp> getPersonalizacion();
		
		DataItemProdPers(int,float);
		virtual ~DataItemProdPers();
}