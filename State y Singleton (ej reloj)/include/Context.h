#ifndef CONTEXT_H
#define CONTEXT_H
#include "State.h"
#include "Hour.h"
#include "Timer.h"
#include "Alarm.h"


class Context
{
    private:
        static int numState;
        State* state;
    public:
        //void setState(State);
        void changeState();
        string getNamberState();
        DtTime getTime();
        void incrementHours();
        void incrementMinutes();
        void reset();

        Context();
        virtual ~Context();
};

#endif // CONTEXT_H
