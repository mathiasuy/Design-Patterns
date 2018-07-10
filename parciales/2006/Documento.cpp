Documento::Documento(string a,string b):nombre(a),descripcion(b){};

	DataDocumento* Documento::getDataDocumento(){
		return DataDocumento(nombre,descripcion);
	};

	Documento::~Documento(){};