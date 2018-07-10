	string DataDocumento::getNombre(){
		return nombre;
	};

	string DataDocumento::getDescripcion(){
		return descripcion;
	};

	int DataDocumento::getCantidadVersiones(){
		return cantidadVersiones;
	};

	DataDocumento::DataDocumento(string,string,int)
	:nombre(a),descripcion(b),cantidadVersiones(c)
	{};

	DataDocumento::DataDocumento(string a,string b)
	:DataDocumento(a,b,1)
	{};

	DataDocumento::~DataDocumento(){};