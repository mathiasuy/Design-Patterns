#ifndef STATE_H
#define STATE_H
#include "DtTime.h"
#include <string>

class Context;

using namespace std;

class State
{
    protected:
        int hour;
        int minute;
    public:
        virtual DtTime getTime();
        virtual void siguienteEstado(Context*)=0;
        virtual void incrementHours();
        virtual void incrementMinutes();
        virtual void reset();

        State();
        virtual ~State();

    protected:

};

#endif // STATE_H
