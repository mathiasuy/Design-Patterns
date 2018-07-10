#include "Intermedio.h"

Intermedio::Intermedio()
{
    //ctor
}

Intermedio::~Intermedio()
{
    //dtor
}

string Intermedio::bajarDatos(string url){
    return "<Datos de la pagina (con calidad INTERMEDIA) de " + url + ">";
}
