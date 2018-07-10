#include "NavegadorLiviano.h"


NavegadorLiviano::NavegadorLiviano()
{
    //ctor
}

NavegadorLiviano::~NavegadorLiviano()
{
    //dtor
}

void NavegadorLiviano::abrirPestaniaNueva(){
    cout << "Se ha abierto una nueva pestaña de Navegador Liviano" << endl;
};

void NavegadorLiviano::mostrarPagina(string pagina){
    cout << "Se muestra la pagina " << pagina << " en Navegador Liviano" << endl;
};
