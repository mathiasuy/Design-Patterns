#include "Componente.h"

int Componente::idGlobal = 0;

Componente::Componente()
{
    this->id = idGlobal++;
    //ctor
}

Componente::~Componente()
{
    //dtor
}

void Componente::remove(Componente*){
};

void Componente::add(Componente*){
};

bool Componente::operator==(const Componente& rhs) const
{
    return this->id == rhs.id;
}

string Componente::toString(){
    return "";
};
