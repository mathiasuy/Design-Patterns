#include "Context.h"
#include "Hour.h"

#include <iostream>
using namespace std;

Context::Context():state(Hour::getInstance()),nombreEstado("Hora")
{}

void Context::siguienteEstado(){
    this->state->siguienteEstado(this);
};

void Context::setNameState(string n){
    this->nombreEstado = n;
};

void Context::setState(State* s){
    this->state = s;
};

string Context::getNameState(){
    return this->nombreEstado;
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
{}
