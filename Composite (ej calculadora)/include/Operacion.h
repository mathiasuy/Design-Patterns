#ifndef OPERACION_H
#define OPERACION_H
#include "Componente.h"
#include <list>

using namespace std;

class Operacion : public Componente
{
    private:
        list<Componente*> components;
        TipoOperacion tipo;

    public:

        Operacion(TipoOperacion);
        ~Operacion();
        string toString();
        float realizar();
        void remove(Componente*);
        void add(Componente*);
};

#endif // OPERACION_H
