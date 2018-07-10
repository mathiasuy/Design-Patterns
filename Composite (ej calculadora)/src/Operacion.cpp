#include "Operacion.h"

Operacion::Operacion(TipoOperacion tipo)
{
    this->tipo = tipo;
}

float Operacion::realizar(){
    list<Componente*>::iterator it = this->components.begin();
    float resultado = 0;
    if (it != this->components.end()){
        resultado = (*it)->realizar();
        it++;
    }
    while(it != this->components.end()){
        switch (this->tipo){
            case su : resultado += (*it)->realizar(); break;
            case re : resultado -= (*it)->realizar(); break;
            case di : resultado /= (*it)->realizar(); break;
            case mu : resultado *= (*it)->realizar(); break;
        }
        it++;
    }
    return resultado;
}

Operacion::~Operacion()
{
    //dtor
}

void Operacion::remove(Componente* c){
    this->components.remove(c);
};

void Operacion::add(Componente* c){
    this->components.push_back(c);
};

string Operacion::toString(){
    list<Componente*>::iterator it = this->components.begin();
    string ac = "( ";
    while (it != this->components.end()){
        ac += (*it)->toString();
        it++;
        if (it != this->components.end()){
            ac += " " + Utils::aString(this->tipo);
        }
    }
    ac += " )";
    return ac;
}
