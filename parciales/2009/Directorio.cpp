	int Directorio::calcularTamanio(){
		IIterator* i = contenido->getIterator();
		int ret = 0;
		while (i->hasCurrent()){
			ret += (Elemento*)i->getCurrent()->calcularTamanio();
			i->next();
		}
		delete i;
		return ret; 
	};

	Archivo* Directorio::crearArchivo(int idArchivo, int tamanio){
		contenido->add(new KeyInteger(idArchivo),new Archivo(idArchivo,tamanio));
	};

	Directorio::Directorio(){
		contenido = new List();
	};

	Directorio::~Directorio(){
		IIterator* i = contenido->getIterator();
		while (i->hasCurrent()){
			Elemento* e = (Elemento*)i->getCurrent();
			elemento->remove(e);
			delete e;
		}
	};