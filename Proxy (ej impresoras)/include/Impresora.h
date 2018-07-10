#ifndef IMPRESORA_H
#define IMPRESORA_H
#include "IImpresora.h"
#include "Puerto.h"
#include "IDriver.h"
#include <list>

using namespace std;

class Impresora : public IImpresora
{
    private:
        Puerto* puerto;
        IDriver* driver;
    public:
        void setDriver(IDriver*);
        void setPuerto(Puerto*);
        bool enLinea();
        void imprimir(Dato* d);

        Impresora();
        virtual ~Impresora();
};

#endif // IMPRESORA_H
