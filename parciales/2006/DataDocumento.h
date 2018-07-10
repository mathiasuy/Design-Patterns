class DataDocumento : public ICollectible{
private:
	string nombre, descripcion;
	int cantidadVersiones;
public:
	string getNombre();
	string getDescripcion();
	int getCantidadVersiones();
	DataDocumento(string,string);
	DataDocumento(string,string,int);
	virtual ~DataDocumento();
}