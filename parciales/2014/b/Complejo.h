#include "Paquete.h"
#include "OptimizadorVolumen.h"
#include <set>

class Complejo : public Paquete{
private:
	set<Paquete*> componentes;
	OptimizadorVolumen* optimizador;
public:
	double calcularPeso();
	double calcularVolumen();
	void setOptVol(OptimizadorVolumen*);

	Complejo(OptimizadorVolumen*, set<Paquete*>);
	virtual ~Complejo();
}