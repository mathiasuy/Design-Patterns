class Elemento : public ICollectible{
private:
	int id;
public:
	virtual int calcularTamanio()=0;
	Elemento(int);
	virtual ~Elemento();
}