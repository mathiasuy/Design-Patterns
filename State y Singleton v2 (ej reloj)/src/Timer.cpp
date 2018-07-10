#include "../include/Timer.h"

Timer* Timer::instance = NULL;

Timer* Timer::getInstance(){
    return (instance == NULL)?instance = new Timer():instance;
}

Timer::Timer()
{}

void Timer::siguienteEstado(Context* c){
    c->setNameState("Hora");
    c->setState(Hour::getInstance());
};

void Timer::reset(){
    State::hour = 0;
    State::minute = 0;
}

Timer::~Timer()
{}
