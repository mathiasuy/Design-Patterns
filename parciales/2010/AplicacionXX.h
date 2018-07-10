#include "NSIAplicacion.h"
#include "ICollection.h"
#include "ContenidoAplicacionXX.h"

class AplicacionXX : public NSIAplicacion{
private:
	ContenidoAplicacionXX* vistas[3];
	int idxActual;
	ContenidoAplicacionXX* visible;
public:
	AplicacionXX(ContenidoAplicacionXX* vistas[3], ContenidoAplicacionXX* visible);
	virtual ~AplicacionXX();
	virtual void actualizarContenido();
}