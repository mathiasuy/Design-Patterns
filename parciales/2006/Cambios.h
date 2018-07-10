class Cambios : public ICollectible{
private:
	Date fecha;
public:
	Cambios(Date);
	virtual ~Cambios();
}