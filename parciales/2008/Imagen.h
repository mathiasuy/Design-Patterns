#include "Recurso.h"

class Imagen : public Recurso{
private:
	void cargar();
	void cargarEspecifico();
public:
	Imagen();
	virtual ~Imagen();
}