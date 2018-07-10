#include "Vista1.h"

Vista1::Vista1(string mensaje)
{
    this->mensaje = mensaje;
}

Vista1::~Vista1()
{
    //dtor
}

Subject* Vista1::getSubject(){
    return this->subject;
};

void Vista1::setSubject(Subject* s){
    this->subject = s;
};

string Vista1::getMensaje(){
    return this->mensaje;
};

void Vista1::setMensaje(string mensaje){
    this->mensaje = mensaje;
};

void Vista1::update(){
    this->setMensaje("Auto actualizado: " + this->subject->getMensaje());
};

string Vista1::toString(){
    return "En Vista1 el mensaje es: " + this->getMensaje();
};
