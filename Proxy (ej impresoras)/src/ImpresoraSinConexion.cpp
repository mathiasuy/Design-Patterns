#include "ImpresoraSinConexion.h"
#include <iostream>

using namespace std;

ImpresoraSinConexion::ImpresoraSinConexion()
{
    //ctor
}

ImpresoraSinConexion::~ImpresoraSinConexion()
{
    //dtor
}

bool ImpresoraSinConexion::enLinea(){
    return true; // siempre debe retornar true
};

void ImpresoraSinConexion::imprimir(Dato* d){
    this->cola.push_back(d);
    if (this->imp->enLinea()){
        for (list<Dato*>::iterator it = this->cola.begin(); it != this->cola.end(); it++){
            this->imp->imprimir(*it);
        }
        this->cola.clear();
    }
};

void ImpresoraSinConexion::setImpresora(IImpresora *imp){
    this->imp = imp;
};

