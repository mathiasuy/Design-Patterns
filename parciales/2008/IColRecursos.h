class IColRecursos{
public:
	virtual void add(Recurso*)=0;
	virtual void remove(Recurso*)=0;
	virtual bool member(Recurso*)=0;
	virtual int size()=0;

	virtual ~IColRecursos();
}