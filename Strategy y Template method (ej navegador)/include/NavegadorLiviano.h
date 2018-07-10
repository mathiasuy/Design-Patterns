#ifndef NAVEGADORLIVIANO_H
#define NAVEGADORLIVIANO_H
#include "Navegador.h"

using namespace std;

class NavegadorLiviano : public Navegador
{
    public:
        NavegadorLiviano();
        virtual ~NavegadorLiviano();

        void abrirPestaniaNueva();
        void mostrarPagina(string);
};

#endif // NAVEGADORLIVIANO_H
