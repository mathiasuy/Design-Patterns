/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: user6
 *
 * Created on 1 de junio de 2018, 0:51
 */

#include <cstdlib>

#include "ICollection.h"
#include "Usuario.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ICollection *usuarios = new List;
    //pedir "datos" usuario
    Usuario u("ernesto");
    
    usuarios->add(new Usuario("ernesto"));
    
    ICollectible *elem;
    Usuario *usr;
    IIterator *it = usuarios->getIterator();
    while (it->hasCurrent()){
        usr = dynamic_cast<Usuario*>(it->getCurrent());
        it->next();
    }
    delete it;
    return 0;
}

