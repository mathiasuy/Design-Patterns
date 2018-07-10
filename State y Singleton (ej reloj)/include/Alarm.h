#ifndef ALARM_H
#define ALARM_H
#include "State.h"

class Alarm : public State
{
    private:
        static Alarm* instance;
        Alarm();
    public:
        static Alarm* getInstance();
        virtual ~Alarm();
};

#endif // ALARM_H
