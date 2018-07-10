#ifndef NAVEGADOR_H
#define NAVEGADOR_H
#include <iostream>
#include <string>
#include "TipoEstado.h"
#include "Strategy.h"
#include "Bueno.h"
#include "Intermedio.h"
#include "Malo.h"

using namespace std;
class Navegador
{
    private:
        Strategy* respBD;
        enum TipoEstado estado;
    public:
        void abrirPagina(string); // TEMPLATE METHOD
        void ajustarModo(); // CONCRETE METHOD
        string bajarDatos(string); // STRATEGY
        TipoEstado estadoConexion(); // CONCRETE METHOD

        void setEstadoConexion(TipoEstado t);

        virtual void abrirPestaniaNueva()=0;// abstract method
        virtual void mostrarPagina(string)=0;// abstract method

        Navegador();
        virtual ~Navegador();
};

#endif // NAVEGADOR_H
