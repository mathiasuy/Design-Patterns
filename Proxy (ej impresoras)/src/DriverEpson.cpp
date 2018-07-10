#include "DriverEpson.h"
#include "Utils.h"
#include <iostream>

using namespace std;

DriverEpson::DriverEpson()
{
    //ctor
}

DriverEpson::~DriverEpson()
{
    //dtor
}

bool DriverEpson::enLinea(){
    return true; // cambiar segun estado
};

void DriverEpson::imprimir(Puerto* p, Dato* d){
    cout << "Imprimiendo en impresora Epson en puerto " << Utils::aString(p->getNumero()) << " el dato " << d->getDato() << "" << endl;
};
