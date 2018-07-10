#ifndef NAVEGADOR_H
#define NAVEGADOR_H
#include <iostream>
#include <string>

using namespace std;

class Navegador
{
    public:
        void abrirPagina(string);//templateMethod();

        string bajarDatos(string);//concrete method

        virtual void abrirPestaniaNueva()=0;// abstract method
        virtual void mostrarPagina(string)=0;// abstract method

        Navegador();
        virtual ~Navegador();
};

#endif // NAVEGADOR_H
