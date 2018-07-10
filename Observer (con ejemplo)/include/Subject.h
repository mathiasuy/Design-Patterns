#ifndef SUBJECT_H
#define SUBJECT_H
#include "ISubject.h"

class Subject : public ISubject
{
    private:
        string mensaje;
    public:
        void addObserver(IObserver*);
        void removeObserver(IObserver*);
        void notifyObservers();

        void setMensaje(string);
        string getMensaje();
        string toString();
        Subject();
        virtual ~Subject();
};

#endif // SUBJECT_H
