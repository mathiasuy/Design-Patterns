#include "Context.h"
#include <iostream>
using namespace std;

int Context::numState = 0;

Context::Context()
{
    this->state = Hour::getInstance();
}

void Context::changeState(){
    if (Context::numState  == 2){
        Context::numState = 0;
    }else{
        Context::numState++;
    }
    switch(Context::numState){
        case 0 :{
                this->state = Hour::getInstance();
            }break;
        case 1 :{
                this->state = Alarm::getInstance();
            }break;
        case 2 :{
                this->state = Timer::getInstance();
            }break;

    }
};


string Context::getNamberState(){
    string ret = "";
    switch(Context::numState){
        case 0 : ret = "Hora"; break;
        case 1 : ret = "Alarm"; break;
        case 2 : ret = "Timer"; break;
    }
    return ret;
};

void Context::incrementHours(){
    this->state->incrementHours();
};

void Context::incrementMinutes(){
    this->state->incrementMinutes();
};

void Context::reset(){
    this->state->reset();
};

DtTime Context::getTime(){
    //cout << (this->state==NULL?"NULL":"NONULL");    return this->state->getTime();
}

Context::~Context()
{
    //dtor
}
