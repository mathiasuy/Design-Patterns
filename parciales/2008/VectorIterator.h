#include "IIterator.h"
#include "VectorRecursos.h"

class VectorIterator : public IIterator{
private:
	VectorRecursos* v;
	int pos;
public:
	VectorIterator(VectorRecursos*);
	bool hasCurrent();
	Recurso* getCurrent();
	void next();
	
	virtual ~IIterator();	
}