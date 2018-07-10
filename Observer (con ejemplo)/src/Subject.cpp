#include "Subject.h"

Subject::Subject()
{

}

Subject::~Subject()
{
    //dtor
}

void Subject::addObserver(IObserver* o){
    this->observadores.push_back(o);
};

void Subject::removeObserver(IObserver* o){
    this->observadores.remove(o);
};

void Subject::notifyObservers(){
    list<IObserver*>::iterator it = this->observadores.begin();
    while (it!=observadores.end()){
        (*it)->update();
        it++;
    }
};


void Subject::setMensaje(string mensaje){
    this->mensaje = mensaje;
};

string Subject::getMensaje(){
    return this->mensaje;
};

string Subject::toString(){
    return "Subject: " + this->getMensaje();
};
