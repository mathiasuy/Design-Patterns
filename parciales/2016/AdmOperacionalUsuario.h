#include "EnumOrder.h"
#include <string>

using namespace std;

class AdmOperacionalUsuario{
	private:
		map<int,Cancion*> canciones;
		map<string,Usuario*> usuarios;
	public:
		map<int,DtCancion*> ordenar_favoritas(string,EnumOrder);
		list<Byte*> descargar_cancion(string,int);
		void agregar_favorita(int);

		AdmOperacionalUsuario();
		virtual ~AdmOperacionalUsuario()
}
