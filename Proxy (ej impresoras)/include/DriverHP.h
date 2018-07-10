#ifndef DRIVERHP_H
#define DRIVERHP_H
#include "IDriver.h"


class DriverHP : public IDriver
{
    private:

    public:
        bool enLinea();
        void imprimir(Puerto* p, Dato* d);

        DriverHP();
        virtual ~DriverHP();
};

#endif // DRIVERHP_H
