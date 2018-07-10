#ifndef VISTA2_H
#define VISTA2_H
#include "IObserver.h"
#include <string>
#include "Subject.h"

using namespace std;

class Vista2 : public IObserver
{
    private:
        string mensaje;
        Subject* subject;

    public:
        Vista2(string);
        virtual ~Vista2();

        string getMensaje();
        void setMensaje(string);
        Subject* getSubject();
        void setSubject(Subject*);

        void update();
        string toString();
};

#endif // VISTA2_H
