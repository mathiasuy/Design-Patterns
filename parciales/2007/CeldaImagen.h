class CeldaImagen : public Celda{
private:
	Imagen* img;
public:
	CeldaImagen(int,int,bool,Imagen*);
	virtual ~CeldaImagen();
	virtual Object* copiarEspecifico(int,int);
}