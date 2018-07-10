#include "Gratis.h"

list<Cancion*> Gratis::ordenar_favoritas(EnumOrder e){
	throw std::invalid_argument("Error");
};

Gratis::Gratis(string a, string b, string c):Usuario(a,b,c){};
Gratis::~Gratis(){};