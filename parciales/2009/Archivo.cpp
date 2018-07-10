#include "Archivo.h"

	int Archivo::calcularTamanio(){
		return tamanio;
	};

	Archivo* Archivo::crearArchivo(int idArchivo, int tamanio){
		return new Archivo(idArchivo,tamanio);
	};	

	Archivo::Archivo(int id,int tam):Elemento(id),tamanio(tam){ // PROBAR!!
	};

	Archivo::~Archivo(){};
