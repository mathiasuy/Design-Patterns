	Object* elementoActual;

	void Cursor::copiarActual(){
		Object* o = elementoActual->copiar();
		PortaPapeles* p = PortaPapeles::getInstance();
		Object* ob = p->getObject();
		if (ob != null)
			delete ob;
		p->setObject(o);
	};

	Cursor::Cursor(){
		elementoActual = NULL;
	};

	void Cursor::setObject(Object* o){
		elementoActual = o;
	};

	Cursor::~Cursor(){
		delete elementoActual;
	};
