#ifndef OBJETOB_H
#define OBJETOB_H
#include <string>

using namespace std;

class ObjetoB
{
    protected:
        int id;
        string texto;
    public:
        ObjetoB();
        ObjetoB(int id, string texto);
        int getID();
        string toString();
        virtual ~ObjetoB();
};

#endif // OBJETOB_H

