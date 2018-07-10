#include "Puerto.h"

Puerto::Puerto(int numero)
{
    this->numero = numero;
}

Puerto::~Puerto()
{
    //dtor
}

int Puerto::getNumero(){
    return this->numero;
};

void Puerto::setNumero(int n){
    this->numero = n;
};
