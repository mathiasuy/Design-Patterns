#ifndef SETHOUR_H
#define SETHOUR_H
#include "State.h"
#include "Alarm.h"

class Hour : public State
{
    private:
        static Hour* instance;
        Hour();
    public:
        void siguienteEstado(Context* c);
        static Hour* getInstance();
        virtual ~Hour();
};

#endif // SETHOUR_H
