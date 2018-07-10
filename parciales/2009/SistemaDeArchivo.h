#include "ISistemaDeArchivo.h"

class SistemaDeArchivo : public ISistemaDeArchivo{
private:
	IDictionary* elementos;
	static SistemaDeArchivo* instance;
	SistemaDeArchivo();
public:
	void crearArchivo(int,int,int);
	int calcularTamanio(int);
	static SistemaDeArchivo* getInstance();

	virtual ~SistemaDeArchivo();
}