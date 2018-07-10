#include "ObjetoB.h"
ObjetoB::ObjetoB(int id, string texto){
    this->id = id;
    this->texto = texto;
}

string ObjetoB::toString(){
    return "id alguno " + this->texto;
};

int ObjetoB::getID(){
    return this->id;
}

ObjetoB::~ObjetoB(){

}

ObjetoB::ObjetoB(){};
