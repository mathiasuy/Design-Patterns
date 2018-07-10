#include "Numero.h"

float Numero::realizar(){
    return this->number;
};


Numero::Numero(float number)
{
    this->number = number;
}

Numero::~Numero()
{
    //dtor
}

float Numero::getNumber(){
    return this->number;
}

void Numero::setNumber(float number){
    this->number = number;
}

std::string Numero::toString(){
    return " " + Utils::aString(this->number) + " ";
}
