#ifndef COMPONENTE_H
#define COMPONENTE_H
#include <string>
#include "Utils.h"

using namespace std;


class Componente
{
    private:
        static int idGlobal;
        int id;

    public:
        Componente();
        virtual ~Componente();

        virtual float realizar()=0;
        virtual void remove(Componente*);
        virtual void add(Componente*);
        virtual string toString();
        bool operator==(const Componente& rhs) const;
};

#endif // COMPONENTE_H
