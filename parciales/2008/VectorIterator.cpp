	void VectorIterator::first(){
		pos = 0;
	};

	bool VectorIterator::hasCurrent(){
		return pos < v->size();
	};

	Recurso* VectorIterator::getCurrent(){
		return v->getCurrent(pos);
	};

	void VectorIterator::next(){
		pos++;
	};
	
	VectorIterator::IIterator(VectorRecursos* r){
		v = r;
		pos = 0;
	};	
	VectorIterator::~IIterator(){};	