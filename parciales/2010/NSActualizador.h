#include "NSIAplicacion.h"
#include "NSMAnejadorConexion.h"

class NSActualizador{
private:
	ICollection* apps;
	static NSActualizador* instancia;
	NSActualizador();
public:
	virtual ~NSActualizador();
	void agregarAplicacion(NSIAplicacion*);
	void quitarAplicacion(NSIAplicacion*);
	void actualizarContenidoAplicaciones();
	static NSActualizador* obtenerInstancia();
}