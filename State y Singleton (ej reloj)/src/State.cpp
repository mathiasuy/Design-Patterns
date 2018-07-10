#include "State.h"
#include <iostream>
#include <exception>

State::State()
{
    this->hour = 0;
    this->minute = 0;
}

void State::reset(){
    throw std::runtime_error("No permitido");
}


DtTime State::getTime(){
    return DtTime(this->hour,this->minute);
}

void State::incrementHours(){
    if ( this->hour == 12){
        this->hour = 0;
    }else{
       this->hour++;
    }
}

void State::incrementMinutes(){
    if ( this->minute == 59){
        this->minute = 0;
    }else{
       this->minute++;
    }
}

State::~State()
{
    //dtor
}
