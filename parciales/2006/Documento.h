class Documento : public ICollectible{
private:
	string nombre, descripcion;
public:
	Documento(string,string);
	DataDocumento* getDataDocumento();
	virtual ~Documento();
}