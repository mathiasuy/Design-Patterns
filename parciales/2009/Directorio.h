#include "Elemento.h"

class Directorio : public Elemento{
private:
	IDictionary* contenido;
public:
	int calcularTamanio();
	Archivo* crearArchivo(int idArchivo, int tamanio);
	Directorio();
	virtual ~Directorio();
}