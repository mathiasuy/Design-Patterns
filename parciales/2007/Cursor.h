class Cursor {
private:
	Object* elementoActual;
public:
	void copiarActual();
	void setObject(Object* o);
	Cursor();
	virtual ~Cursor();
}