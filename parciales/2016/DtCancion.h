#include <string>

using namespace std;

class DtCancion{
	private:
		int id;
		string nombre, autor, album, bitrate;
		list<Byte> contenido;
	public:
		int getId();
		string getNombre();
		string getAutor();
		string getAlbum();
		string getBitrate();
		list<Byte> getContenido();
}