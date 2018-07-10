#include "ICollectible.h"

class ICollection{
private:
	IIterator* it;
public:
	virtual void add(ICollectible*)=0;
	virtual IIterator* getIterator()=0;

	virtual ~ICollection();
}