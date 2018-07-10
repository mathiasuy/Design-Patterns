#include "Elemento.h"

class Archivo : public Elemento{
private:
	int tamanio;
public:
	int calcularTamanio();
	Archivo(int,int);
	virtual ~Archivo();
}