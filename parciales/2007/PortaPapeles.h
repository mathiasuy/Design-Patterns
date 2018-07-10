class PortaPapeles {
private:
	static PortaPapeles* instance;
	Object* contenido;
	PortaPapeles();
public:
	virtual ~PortaPapeles();
	static PortaPapeles* getInstance();
	void setObject(Object*);
	Object* getObject();
}