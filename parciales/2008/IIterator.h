class IIterator{
public:
	virtual void first()=0;
	virtual bool hasCurrent()=0;
	virtual Recurso* getCurrent()=0;
	virtual void next()=0;

	virtual ~IIterator();
}