#include "DoubleLinkedList.h"

Iterator* DoubleLinkedList::iterator(){
	return new SpecialIterator(this->first);
}