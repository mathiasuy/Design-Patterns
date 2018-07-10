class Paquete {
public:
	virtual double calcularPeso()=0;
	virtual double calcularVolumen()=0;

	Paquete();
	virtual ~Paquete();
}