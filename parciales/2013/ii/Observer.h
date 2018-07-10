#include "Event.h"

class Observer{
	public:
		virtual void notify(Event*)=0;

		virtual ~Observer();
}