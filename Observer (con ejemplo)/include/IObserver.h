#ifndef IOBSERVER_H
#define IOBSERVER_H
#include <string>

using namespace std;

class IObserver
{
    public:
        virtual void update()=0;
};

#endif // IOBSERVER_H
