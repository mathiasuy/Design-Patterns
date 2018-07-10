#ifndef TIMER_H
#define TIMER_H
#include "State.h"
#include "Hour.h"

class Timer : public State
{
    private:
        static Timer* instance;
        Timer();
    public:
        void siguienteEstado(Context* c);
        void reset();
        static Timer* getInstance();
        virtual ~Timer();
};

#endif // TIMER_H
