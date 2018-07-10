#ifndef INTERMEDIO_H
#define INTERMEDIO_H
#include "Strategy.h"


class Intermedio : public Strategy
{
    public:
        string bajarDatos(string);

        Intermedio();
        virtual ~Intermedio();

    protected:

    private:
};

#endif // INTERMEDIO_H
