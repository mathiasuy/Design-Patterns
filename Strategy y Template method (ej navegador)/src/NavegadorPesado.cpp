#include "NavegadorPesado.h"

NavegadorPesado::NavegadorPesado()
{
    //ctor
}

NavegadorPesado::~NavegadorPesado()
{
    //dtor
}

void NavegadorPesado::abrirPestaniaNueva(){
    cout << "Se ha abierto una nueva pestaña de Navegador Pesado" << endl;
};

void NavegadorPesado::mostrarPagina(string pagina){
    cout << "Se muestra la pagina " << pagina << " en Navegador Pesado" << endl;
};
