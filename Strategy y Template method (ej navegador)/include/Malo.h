#ifndef MALO_H
#define MALO_H
#include "Strategy.h"


class Malo : public Strategy
{
    public:
        string bajarDatos(string);

        Malo();
        virtual ~Malo();

    protected:

    private:
};

#endif // MALO_H
