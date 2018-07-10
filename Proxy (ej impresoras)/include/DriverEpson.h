#ifndef DRIVEREPSON_H
#define DRIVEREPSON_H
#include "IDriver.h"

class DriverEpson : public IDriver
{
    private:

    public:
        bool enLinea();
        void imprimir(Puerto* p, Dato* d);

        DriverEpson();
        virtual ~DriverEpson();
};

#endif // DRIVEREPSON_H
