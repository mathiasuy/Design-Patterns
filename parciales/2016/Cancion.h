#include <string>
#include <list>

using namespace std;

class Cancion{
	private:
		int id;
		string nombre, autor, album, bitrate;
		list<Byte> contenido;
	public:
		Cancion(int,string,string,string,string);
		virtual ~Cancion();
}