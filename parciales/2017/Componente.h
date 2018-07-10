#include "Opcion.h"
#include <string>

using namespace std;

class Componente{
	private:
		string nomComp;
		list<Opcion*> opciones;
	public:
		void nuevaOp(string, float);

		Componente(string);
		virtual ~Componente();
}