#include "Impresora.h"

Impresora::Impresora()
{
    //ctor
}

Impresora::~Impresora()
{
    //dtor
}

bool Impresora::enLinea(){
    return this->driver->enLinea();
};

void Impresora::imprimir(Dato* d){
    return this->driver->imprimir(this->puerto,d);
};

void Impresora::setDriver(IDriver* d){
    this->driver = d;
};

void Impresora::setPuerto(Puerto* p){
    this->puerto = p;
};

