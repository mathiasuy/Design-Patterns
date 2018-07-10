#ifndef CONTEXT_H
#define CONTEXT_H
#include "State.h"
#include "DtTime.h"
#include <string>

using namespace std;

class Context
{
    private:
        State* state;
        string nombreEstado;
    public:
        void setNameState(string);
        string getNameState();
        void setState(State*);

        DtTime getTime();
        void siguienteEstado();
        void incrementHours();
        void incrementMinutes();
        void reset();

        Context();
        virtual ~Context();
};

#endif // CONTEXT_H
