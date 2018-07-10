#ifndef ALARM_H
#define ALARM_H
#include "State.h"
#include "Timer.h"
#include "Context.h"

class Alarm : public State
{
    private:
        static Alarm* instance;
        Alarm();
    public:
        void siguienteEstado(Context* c);
        static Alarm* getInstance();
        virtual ~Alarm();
};

#endif // ALARM_H
