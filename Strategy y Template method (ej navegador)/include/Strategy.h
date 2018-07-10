#ifndef STRATEGY_H
#define STRATEGY_H
#include <string>

using namespace std;

class Strategy /// INTERFACE
{
    public:
        virtual string bajarDatos(string)=0;
        virtual ~Strategy();
        ///EL DESTRUCTOR HAY QUE PONERLO IGUAL
        ///PARA QUE SE PUEDA ACCEDER A
        ///LOS DESTRUCTORES DE LOS HIJOS
};

#endif // STRATEGY_H
