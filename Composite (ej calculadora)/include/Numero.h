#ifndef NUMERO_H
#define NUMERO_H
#include "Componente.h"
#include <string>

using namespace std;

class Numero : public Componente
{
    private:
        float number;
    public:
        float getNumber();
        void setNumber(float);
        float realizar();
        string toString();
        Numero(float number);
        virtual ~Numero();
};

#endif // NUMERO_H
