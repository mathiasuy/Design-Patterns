#include "IColRecursos.h"


class VectorRecursos : public IColRecursos{
private:
	IIterator* i;
public:
	void add(Recurso*);
	void remove(Recurso*);
	void member(Recurso*);
	int size();
	
	Recurso*   getElement(int);
	IIterator* getIterator();

	virtual ~VectorRecursos();
	VectorRecursos();
}