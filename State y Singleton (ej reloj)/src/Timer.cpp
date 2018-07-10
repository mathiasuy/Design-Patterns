#include "../include/Timer.h"

Timer* Timer::instance = NULL;

Timer* Timer::getInstance(){
    if (Timer::instance == NULL){
        Timer::instance = new Timer();
    }
    return Timer::instance;
}

Timer::Timer()
{

}

void Timer::reset(){
    State::hour = 0;
    State::minute = 0;
}

Timer::~Timer()
{
    //dtor
}
