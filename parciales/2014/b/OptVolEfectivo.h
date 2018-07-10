#include "OptimizadorVolumen.h"

class OptVolEfectivo : public OptimizadorVolumen {
public:
	double volOptimo(set<Paquete*>);

	OptVolEfectivo();
	virtual ~OptVolEfectivo();
}