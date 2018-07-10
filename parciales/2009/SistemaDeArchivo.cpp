	SistemaDeArchivo* SistemaDeArchivo::instance = NULL;

	void SistemaDeArchivo::crearArchivo(int idCarpeta,int idArchivo,int tamanio){
//  VERSIÓN ALTERNATIVA DE KEY ESTATICA (NO PRECISA LIBERAR MEMORIA)
		/* VERSION 1 */
		KeyInteger key(idCarpeta);
		Directorio* directorio = (Directorio*)elementos->find(&key); //NOTAR EL &
		/* FIN VERSION 1 */

//  VERSIÓN ALTERNATIVA QUE CREA MEMORIA (LUEGO HAY QUE LIBERARLA)
		/* VERSION 2 */
		KeyInteger key = new KeyInteger(idCarpeta);
		Directorio* directorio = (Directorio*)elementos->find(key);
		delete key; // BORRO LA KEY
		/* FIN VERSION 2 */

		if (directorio != NULL){
			Archivo* archivo = directorio->crearArchivo(idArchivo,tamanio);
			// AL AGREGAR LA KEY A LA COLECCION DEBO CREARLE MEMORIA
			this->elementos->add(new KeyInteger(idArchivo),archivo);
		}else
			throw std::invalid_argument("Directorio no valido");
	};

	int SistemaDeArchivo::calcularTamanio(int id){
		KeyInteger ski(id);
		Elemento* e = elementos;
		id (e == NULL){
			throw std::invalid_argument("Elemento no existe!");
		}
		return e->calcularTamanio();
	};

	SistemaDeArchivo* SistemaDeArchivo::getInstance(){
		if (SistemaDeArchivo::instance == NULL){
			SistemaDeArchivo::instance = new SistemaDeArchivo();
		}
		return SistemaDeArchivo::instance;
	};

	SistemaDeArchivo::~SistemaDeArchivo(){
		IIterator* i = elementos->getIterator();
		while (i->hasCurrent()){
			Elemento* e = (Elemento*)i->getCurrent();
			elemenos->remove(e);
			delete e;
		}
	};

	SistemaDeArchivo::SistemaDeArchivo(){
		elementos = new List();
	};