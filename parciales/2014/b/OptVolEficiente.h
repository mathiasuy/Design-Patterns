#include "OptVolEficiente.h"

class OptVolEficiente : public OptimizadorVolumen{
public:
	double volOptimo(set<Paquete*>);

	OptVolEficiente();
	virtual ~OptVolEficiente();
}