#include "../include/Hour.h"

Hour* Hour::instance = NULL;

Hour* Hour::getInstance(){
    if (instance == NULL)
        instance = new Hour();
    return instance;
}

void Hour::siguienteEstado(Context* c){
    c->setNameState("Alarma");
    c->setState(Alarm::getInstance());
};

Hour::Hour()
{
}


Hour::~Hour()
{
    //dtor
}
