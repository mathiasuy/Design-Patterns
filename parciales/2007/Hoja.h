class Hoja : public Object{
private:
	ICollection* celdas;
	string nombre;
public:
	virtual Object* copiar()=0;
	void addCelda(Celda*);
	Hoja(string,Celda*);
	virtual ~Hoja();
}