	PortaPapeles* PortaPapeles::instance = NULL;

	PortaPapeles::PortaPapeles():conteido(NULL){};

	PortaPapeles::~PortaPapeles(){
		delete contenido;
	};

	PortaPapeles* PortaPapeles::getInstance(){
		if (instance == NULL)
			instance = new PortaPapeles();
		return instance;
	};

	void PortaPapeles::setObject(Object* o){
		contenido = o;
	};

	Object* PortaPapeles::getObject(){
		return contenido!=NULL?contenido->copiar():NULL;
	};
