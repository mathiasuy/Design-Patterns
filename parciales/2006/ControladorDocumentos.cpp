	ControladorDocumentos* ControladorDocumentos::instance = NULL;

	ControladorDocumentos::ControladorDocumentos():documentos(new List){};

	ControladorDocumentos* getInstance(){
		if (instance == NULL)
			instance = new ControladorDocumentos;
		return instance;
	};

	IStringDictionary* listarDocumentos(){
		IIterator i = documentos->getIterator();
		IStringDictionary* l = new List;
		while (i->hasCurrent()){
			Documento* doc = ((Documento*)i)->getCurrent();
			// KEY NO ESTA EN LA LETRA, LO PONGO PARA PRACTICAR, EN REALIDAD VA EL STRING DIRECTAMENTE
			Key ssk(doc->getNombre());
			ICollectible* dt = new DataDocumento(doc->getDataDocumento()); 
			l->add(doc,ssk);
			i->next();
		}
		delete i;
		return l;
	};

	void ControladorDocumentos::borrarDocumento(string s){
		Key* k = new Key(s);
		// KEY NO ESTA EN LA LETRA, LO PONGO PARA PRACTICAR, EN REALIDAD VA EL STRING DIRECTAMENTE
		Documento* d = documentos->find(k);
		delete k;
		return d;
	};

	ControladorDocumentos::~ControladorDocumentos(){
		IIterator* i = documentos->getIterator();
		while (i->hasCurrent()){
			Documento* doc = (Documento*)(i->removeCurrent());
			delete doc;
		}
		delete i;
		delete documentos;
	};

