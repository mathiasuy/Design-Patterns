#include "State.h"
#include <iostream>
#include <exception>

State::State():hour(0),minute(0){}

void State::reset(){
    throw std::runtime_error("No permitido");
}

DtTime State::getTime(){
    return DtTime(this->hour,this->minute);
}

void State::incrementHours(){
    hour==12?hour=0:++hour;
}

void State::incrementMinutes(){
    minute==12?minute=0:minute++;
}

State::~State(){}
