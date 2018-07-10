#include "Dato.h"

Dato::Dato(string dato)
{
    this->dato = dato;
}

Dato::~Dato()
{
    //dtor
}

string Dato::getDato(){
    return this->dato;
}

void Dato::setDato(string dato){
    this->dato = dato;
}
