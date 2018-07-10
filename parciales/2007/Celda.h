class Celda : public Object{
private:
	int fila, columna;
	bool protegida;
public:
	Celda(int,int,bool);
	virtual ~Celda();
	Object* copiar();
	virtual copiarEspecifico(int,int);
}