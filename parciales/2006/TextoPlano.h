class TextoPlano : public Documento{
private:
	ICollection* cambios;
public:
	DataDocumento getDataDocumento();
	void addCambio(Cambios*);
	TextoPlano(string,string);
	virtual ~TextoPlano();
}