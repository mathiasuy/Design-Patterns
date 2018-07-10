#include "ICollectible.h"

class IIterator{
public:
	virtual ICollectible* next()=0;
	virtual bool hasNext()=0;

	virtual ~IIterator();
}