#include "Alarm.h"

Alarm* Alarm::instance = NULL;

Alarm* Alarm::getInstance(){
    if (instance == NULL)
        instance = new Alarm();
    return instance;
}

Alarm::Alarm()
{

}

void Alarm::siguienteEstado(Context* c){
    c->setNameState("Timer");
    c->setState(Timer::getInstance());
};

Alarm::~Alarm()
{
    //dtor
}
