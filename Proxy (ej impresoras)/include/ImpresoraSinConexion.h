#ifndef IMPRESORASINCONEXION_H
#define IMPRESORASINCONEXION_H
#include "IImpresora.h"
#include "Dato.h"
#include <list>

using namespace std;

class ImpresoraSinConexion : public IImpresora
{
    private:
        list<Dato*> cola;
        IImpresora* imp;
    public:
        void setImpresora(IImpresora *imp);

        bool enLinea();
        void imprimir(Dato* d);

        ImpresoraSinConexion();
        virtual ~ImpresoraSinConexion();
};

#endif // IMPRESORASINCONEXION_H
