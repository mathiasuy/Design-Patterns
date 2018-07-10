#include "Malo.h"

Malo::Malo()
{
    //ctor
}

Malo::~Malo()
{
    //dtor
}

string Malo::bajarDatos(string url){
    return "<Datos de la pagina (con calidad MALA) de " + url + ">";
}
