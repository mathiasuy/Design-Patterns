#include "Usuario.h"

using namespace std;

class Premium : public Usuario{
	public:
		list<Cancion*> ordenar_favoritas(EnumOrder);

		Premium(string,string,string);
		virtual ~Premium();
}