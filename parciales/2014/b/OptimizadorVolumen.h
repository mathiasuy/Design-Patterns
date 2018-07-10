#include "Paquete.h"
#include <set>

class OptimizadorVolumen {
public:
	virtual double volOptimo(set<Paquete*>)=0;

	virtual ~OptimizadorVolumen();
}