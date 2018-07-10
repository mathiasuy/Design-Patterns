#include "NSIContenido.h"
#include <string>

using namespace std;

class ContenidoAplicacionXX : public NSIContenido{
	private:
		string url;
		string contenido;
	public:
		ContenidoAplicacionXX(string,string);
		virtual ~ContenidoAplicacionXX();

		string obtenerURL();
		string getContenido();
}