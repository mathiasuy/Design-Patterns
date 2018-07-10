class Recurso{
private:
	string nombre;
public:
	virtual void cargar(); // TEMPLATE METHOD
	virtual ~Recurso();
	virtual void cargarEspecifico()=0;
}

void Recurso::cargar(){
	Log* l = Log::getInstance();
	l->registrarComienzoCarga(nombre);
	cargarEspecifico(); 
	l->registrarFinCarga(nombre);
};