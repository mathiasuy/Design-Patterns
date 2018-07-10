	void Hoja::addCelda(Celda* c){
		celdas->add(c);
	};

	Hoja::Hoja(string n,Celda* c):nombre(n){
		celdas = new List();
		//De acuerdo al diagrama, 
		//no pueden haber Hojas que
		//no tengan al menos una celda.
		//Exijo agregar la primera para
		//construir para cumplir
		celdas->add(c); 
	};

	Hoja::~Hoja(){
		IIterator i = celdas->getIterator();
		while (i->hasCurrent()){
			Celda* c = (Celda*)i->current();
			celdas->removeCurrent(c);
			delete c;
			i->next();
		}
		delete i;
		delete celdas;
	};

	Object* Hoja::copiar(){
		IIterator* i = celdas->getIterator();
		Hoja* hoja_nueva = new Hoja(nombre,((Celda*)i->current())->copia());
		i->next();
		while (i->hasCurrent()){
			Celda* c = (Celda*)i->current();
			hoja_nueva->add(c->copia());
			i->next();
		}
		delete i;
		return hoja_nueva;
	}