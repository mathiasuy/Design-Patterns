#include "DriverHP.h"
#include "Utils.h"
#include <iostream>

using namespace std;

DriverHP::DriverHP()
{
    //ctor
}

DriverHP::~DriverHP()
{
    //dtor
}

bool DriverHP::enLinea(){
    return true; // cambiar segun estado
};

void DriverHP::imprimir(Puerto* p, Dato* d){
    cout << "Imprimiendo en impresora HP en puerto " << Utils::aString(p->getNumero()) << " el dato " << d->getDato() << "" << endl;
};
