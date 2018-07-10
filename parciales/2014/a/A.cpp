A* A::instance = NULL;

A* A::getInstance(){
	if (instance == NULL){
		instance = new A();
	}
	return instance;
}

A::A(){};