#ifndef IDRIVER_H
#define IDRIVER_H
#include "Dato.h"
#include "Puerto.h"


class IDriver
{
    public:
        virtual bool enLinea()=0;
        virtual void imprimir(Puerto* p, Dato* d)=0;

        virtual ~IDriver();
};

#endif // IDRIVER_H
