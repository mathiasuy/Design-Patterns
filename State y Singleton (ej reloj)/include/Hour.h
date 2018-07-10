#ifndef SETHOUR_H
#define SETHOUR_H
#include "State.h"


class Hour : public State
{
    private:
        static Hour* instance;
        Hour();
    public:
        static Hour* getInstance();
        virtual ~Hour();
};

#endif // SETHOUR_H
