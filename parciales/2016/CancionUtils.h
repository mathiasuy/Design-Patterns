#include "Cancion.h"
#include "EnumOrder.h"

class CancionUtils{
	private:
		map<int,Cancion*> canciones;
		EnumOrder criterio;
		CancionUtils();
		static CancionUtils* instance;
	public:
		virtual ~CancionUtils();
		static CancionUtils* getInstance();
		map<int,Cancion*> ordenar_lista(map<int,Cancion*> canciones, EnumOrder criterio);
}