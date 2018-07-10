#include "ICollectible.h"

class Sombra : public ICollectible{
private:
	ICollection* sombras;
public:
	Sombra();
	virtual ~Sombra();
	Sombra* nuevaSombra();
	void propagar();
	virtual Sombra* getCopia()=0;
	virtual void copiarContenido(Sombra*)=0;
}