class CeldaTexto : public Celda{
private:
	string texto;
public:
	CeldaTexto(int,int,bool,string);
	virtual Object* copiar();
	virtual ~CeldaTexto();
	virtual Object* copiarEspecifico(int,int);
}