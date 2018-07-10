#include "Event.h"
#include "Observer.h"
#include <set>

class Subject{
	private:
		set<Observer*> obs;
	public:
		void notifyObservers(Event*);
		virtual void onCancel(Observer*)=0;
		void addObserver(Observer*);
		void removeObserver(Observer*);
		void clearObservers();

		Subject();
		virtual ~Subject();
}