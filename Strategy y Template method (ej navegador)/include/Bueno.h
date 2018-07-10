#ifndef BUENO_H
#define BUENO_H
#include "Strategy.h"


class Bueno : public Strategy
{
    public:
        string bajarDatos(string);

        Bueno();
        virtual ~Bueno();

    protected:

    private:
};

#endif // BUENO_H
