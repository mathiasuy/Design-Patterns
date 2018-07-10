#ifndef TIMER_H
#define TIMER_H
#include "State.h"


class Timer : public State
{
    private:
        static Timer* instance;
        Timer();
    public:
        void reset();
        static Timer* getInstance();
        virtual ~Timer();
};

#endif // TIMER_H
