#include "ObjetoA.h"


ObjetoA::ObjetoA(string id, string texto){
    this->id = id;
    this->texto = texto;
}

string ObjetoA::toString(){
    return this->id + " " + this->texto;
};

string ObjetoA::getID(){
    return this->id;
}

ObjetoA::~ObjetoA(){

}

ObjetoA::ObjetoA(){

}


