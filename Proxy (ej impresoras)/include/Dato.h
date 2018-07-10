#ifndef DATO_H
#define DATO_H
#include <string>

using namespace std;

class Dato
{
    private:
        string dato;
    public:
        void setDato(string);
        string getDato();

        Dato(string);
        virtual ~Dato();
};

#endif // DATO_H
