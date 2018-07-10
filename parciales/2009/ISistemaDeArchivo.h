class ISistemaDeArchivo{
public:
	virtual void crearArchivo(int,int,int)=0;
	virtual int void calcularElemento(int)=0;

	virtual ~ISistemaDeArchivo();
}