#include "Sombra.h"
#include <string>

using namespace std;

class Persona : public Sombra{
private:
	string nombre;
public:
	string getNombre();
	Persona* getCopia();
	void copiarContenido(Persona*);

	Persona();
	Persona(Persona*);
	virtual ~Persona();
}