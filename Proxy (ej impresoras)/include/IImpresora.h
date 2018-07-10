#ifndef IIMPRESORA_H
#define IIMPRESORA_H
#include "Dato.h"

class IImpresora
{
    public:
        virtual bool enLinea()=0;
        virtual void imprimir(Dato* d)=0;

        virtual ~IImpresora();
};

#endif // IIMPRESORA_H
