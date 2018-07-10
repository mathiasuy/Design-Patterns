#ifndef OBJETOA_H
#define OBJETOA_H
#include <string>

using namespace std;

class ObjetoA
{
    protected:
        string id;
        string texto;
    public:
        ObjetoA();
        ObjetoA(string id, string texto);
        string getID();
        string toString();
        virtual ~ObjetoA();
};

#endif // OBJETOA_H
