#include "Producto.h"
#include "Componente.h"
#include <string>

using namespace std;

class Personalizable : public Producto{
	private:
		float precioItem;
		map<string,Componente*> componentes;
	public:
		void setPrecioItem(float);
		void nuevoComp(string);
		void elimComp(string);
		void nuevaOpComp(string , string , float);

		Personalizable(int);
		virtual ~Personalizable();
}