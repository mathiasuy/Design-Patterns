#ifndef NAVEGADORPESADO_H
#define NAVEGADORPESADO_H
#include "Navegador.h"

using namespace std;

class NavegadorPesado : public Navegador
{
    public:
        NavegadorPesado();
        virtual ~NavegadorPesado();

        void abrirPestaniaNueva();
        void mostrarPagina(string);
};

#endif // NAVEGADORPESADO_H
