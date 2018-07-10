#include "Vista2.h"

Vista2::Vista2(string mensaje)
{
    this->mensaje = mensaje;
}

Vista2::~Vista2()
{
    //dtor
}

Subject* Vista2::getSubject(){
    return this->subject;
};

void Vista2::setSubject(Subject* s){
    this->subject = s;
};

string Vista2::getMensaje(){
    return this->mensaje;
};

void Vista2::setMensaje(string mensaje){
    this->mensaje = mensaje;
};

void Vista2::update(){
    this->setMensaje("Auto actualizado: " + this->subject->getMensaje());
};

string Vista2::toString(){
    return "En Vista2 el mensaje es: " + this->getMensaje();
};
