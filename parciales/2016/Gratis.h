#include "Usuario.h"

using namespace std;

class Gratis : public Usuario{
	public:
		list<Cancion*> ordenar_favoritas(EnumOrder);

		Gratis(string,string,string);
		virtual ~Gratis();
}