#ifndef ISUBJECT_H
#define ISUBJECT_H
#include "IObserver.h"
#include <list>

using namespace std;

class ISubject
{
    protected:
        list<IObserver*> observadores;

    public:
        virtual void addObserver(IObserver*)=0;
        virtual void removeObserver(IObserver*)=0;
        virtual void notifyObservers()=0;

};

#endif // ISUBJECT_H
