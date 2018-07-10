
void Subject::notifyObservers(Event* ev){
	for (set<Observer*>::iterator i = obs.begin(); i!=obs.end(); i++){
		(*i)->notify(ev);
		if (ev->cancelled()){
			this->onCancel(*i);
			break;
		}
	}
};

/*
void Subject::onCancel(Observer*){
		
};
*/

void Subject::addObserver(Observer* o){
	this->obs.insert(o);
};

void Subject::removeObserver(Observer* o){
	this->obs.erase(o);
};

void Subject::clearObservers(){
	obs->clear();
};

Subject::~Subject(){
	this->clearObservers();
}