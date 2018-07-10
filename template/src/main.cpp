#include <map>
#include "ObjetoA.h"
#include "ObjetoB.h"
#include "ColeccionH.h"
#include<iostream>

using namespace std;

using namespace Util;

int main()
{
    Coleccion<string,ObjetoA> coleccionA;
    Coleccion<int,ObjetoB> coleccionB;

    coleccionB.add(ObjetoB(1,std::string("ObjetoB-1")));
    coleccionA.add(ObjetoA(string("ObjetoA1"),string("ObjetoB")));
    coleccionA.add(ObjetoA(string("ObjetoA2"),string("ObjetoC")));
    coleccionA.add(ObjetoA(string("ObjetoA3"),string("ObjetoC")));
    coleccionA.add(ObjetoA(string("ObjetoA4"),string("ObjetoC")));
    coleccionA.add(ObjetoA(string("ObjetoA5"),string("ObjetoC")));
    coleccionA.add(ObjetoA(string("ObjetoA6"),string("ObjetoC")));
    coleccionA.add(ObjetoA(string("ObjetoA7"),string("ObjetoC")));

    coleccionA.start();
    string st;
    while (coleccionA.end()){
        st += coleccionA.getElement().toString();
        coleccionA.next();
    }

    cout << coleccionA["ObjetoA5"].toString();

    return 0;
}
