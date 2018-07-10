#include "Premium.h"

list<Cancion*> Premium::ordenar_favoritas(EnumOrder e){
	return CancionUtils::getInstance()->ordenar_lista(this->getFavoritas(),e);
};

Premium::Premium(string a,string b,string c):Usuario(a,b,c){};
Premium::~Premium(){};