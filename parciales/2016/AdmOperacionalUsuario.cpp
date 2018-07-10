#include "AdmOperacionalUsuario.h"

AdmOperacionalUsuario::AdmOperacionalUsuario(){};

AdmOperacionalUsuario::~AdmOperacionalUsuario(){
	map<int,DtCancion*>::iterator i = this->canciones.begin();
	while (i != this->canciones.end()){
		delete (*i)->second;
		i++;
	}
	map<string,Usuario*>::iterator it = this->usuarios.begin();
	while (it != this->usuarios.end()){
		delete (*it)->second;
		it++;
	}
};

map<int,DtCancion*> AdmOperacionalUsuario::ordenar_favoritas(string p,EnumOrder q){
	list<Cancion*> l = this->usuarios[p]->ordenar_favoritas(p,q);
	map<int,DtCancion*> m;
	for (list<Cancion*>::iterator i = l.begin(); i != l.end(); i++){
		DtCancion* c = (*i)->second;
		m[c->getID()] = new DtCancion(c->getID(),c->getNombre(),c->getAutor(),c->getAlbum(),c->getBitrate(),c->getContenido());
	}

	return m;
};

list<Byte*> AdmOperacionalUsuario::descargar_cancion(string email,int id){
	return this->usuarios[email]->descargar_cancion(id);
};

void AdmOperacionalUsuario::agregar_favorita(string email,int id){
	this->usuarios[email]->agregar_favorita(id);
};