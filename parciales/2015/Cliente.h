#import <string>
#import "Posicion.h"

class Cliente {
	private:
		string ci, nombre, tel , dir;
		Posicion* dirMapa;
	public:
		string getCI();
		string getNombre();
		string getTel();
		string getDir();
		Posicion getPosicion();
		Cliente(string,string,string,string,Posicion*);
		virtual ~Cliente();
}