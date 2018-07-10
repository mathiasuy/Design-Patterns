#include "ICollectible.h"
#include <string>

using namespace std;

class Producto : public ICollectible{
	private:
		string nombre, descr;
		float precio;
		int cantidad;
	public:
		Producto(string,string,float,cantidad);
		virtual ~Producto();
}