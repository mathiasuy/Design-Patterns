class ControladorDocumentos{
private:
	IStringDictionary* documentos;
	ControladorDocumentos();
	static ControladorDocumentos* instance;
public:
	static ControladorDocumentos* getInstance();
	IStringDictionary* listarDocumentos();
	void borrarDocumento(string);
	virtual ~ControladorDocumentos();
}