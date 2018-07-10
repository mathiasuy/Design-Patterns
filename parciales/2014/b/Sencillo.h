#include "Paquete.h"

class Sencillo : public Paquete {
private:
	double peso;
	double volumen;
public:
	double calcularPeso();
	double calcularVolumen();

	Sencillo(double,double);
	virtual ~Sencillo();
}