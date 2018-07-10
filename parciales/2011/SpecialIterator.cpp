#include "SpecialIterator.h"	
	
	SpecialIterator::SpecialIterator(Node* n):current(n),stepSize(1),forward(true){}

	SpecialIterator::~SpecialIterator(){}
	
	bool SpecialIterator::hasNext(){
		if (current == NULL)
			return false;
		Node* n = current;
		int i=stepSize;
		if (forward){
			while (n->hasNext() && i>0){
				n = n->getNext();
				i--;
			}
		}else{
			while (n->hasPrevious() && i>0){
				n = n->getPrevious();
				i--;
			}
		}
		return i==0;
	};

	Object* SpecialIterator::next(){
		Node* n = current;
		for (int i=0; i<stepSize; i++){
			if (!this->hasNext())
				throw std::domain_error("Error");			
			if (forward){
				n = n->getNext();
			}else{
				n = n->getPrevious();			
			}
		}
		current = n;
		return n->getItem();
	};

	void SpecialIterator::setForward(){
		this->forward = true;
	};

	void SpecialIterator::setBackward(){
		this->forward = false;
	};

	void SpecialIterator::setStepSize(int i){
		this->stepSize = i;
	};