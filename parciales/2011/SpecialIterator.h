#include "Iterator.h"
#include "Node.h"

class SpecialIterator : public Iterator{
	private:
		Node* current;
		int stepSize;
		bool forward;
		SpecialIterator();
	public:
		virtual bool hasNext(); ///¿POR QUÉ ES VIRTUAL? *
		virtual Object* next(); ///¿POR QUÉ ES VIRTUAL? *
		void setForward();
		void setBackward();
		void setStepSize(int);

		SpecialIterator(Node* n, int size);
		virtual ~SpecialIterator(); ///¿POR QUÉ ES VIRTUAL? * R: es buena práctica por si se llega a heredar en un futuro
}