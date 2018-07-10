#include "Alarm.h"

Alarm* Alarm::instance = NULL;

Alarm* Alarm::getInstance(){
    if (Alarm::instance == NULL){
        Alarm::instance = new Alarm();
    }
    return Alarm::instance;
}

Alarm::Alarm()
{

}


Alarm::~Alarm()
{
    //dtor
}
