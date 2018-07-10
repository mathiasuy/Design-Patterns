#ifndef VISTA1_H
#define VISTA1_H
#include "IObserver.h"
#include <string>
#include "Subject.h"

using namespace std;

class Vista1 : public IObserver
{
    private:
        string mensaje;
        Subject* subject;

    public:
        Vista1(string);
        virtual ~Vista1();

        string getMensaje();
        void setMensaje(string);
        Subject* getSubject();
        void setSubject(Subject*);

        void update();
        string toString();
};

#endif // VISTA1_H
