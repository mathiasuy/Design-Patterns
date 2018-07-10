#include "Cancion.h"
#include <string>

using namespace std;

class Usuario : public Usuario{
	private:
		string nombre, email, password;
		Cancion* en_reproduccion;
		map<int,Cancion*> favoritas;
	public:
		virtual map<int,Cancion*> ordenar_favoritas(EnumOrder)=0;
		list<Byte> descargar_cancion(int);
		void agregar_favorita(Cancion*)

		Usuario(string,string,string);
		virtual ~Usuario();
}