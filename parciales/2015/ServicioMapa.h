#include "Posicion.h"
#include <string>

using namespace std;

class ServicioMapa {
	private:
		static ServicioMapa* instance;
		ServicioMapa();
	public:
		string* obtenerRuta(Posicion);
		virtual ~ServicioMapa();
		ServicioMapa* getInstance();
}