#include "Navegador.h"

Navegador::Navegador()
{
    //ctor
}

Navegador::~Navegador()
{
    //dtor
}

void Navegador::abrirPagina(string url){
    abrirPestaniaNueva();
    string pagina = bajarDatos(url);
    mostrarPagina(pagina);
};

string Navegador::bajarDatos(string url){
    return "<Datos de la pagina " + url + ">";
}
