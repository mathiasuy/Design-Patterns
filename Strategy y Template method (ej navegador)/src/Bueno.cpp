#include "Bueno.h"

Bueno::Bueno()
{
    //ctor
}

Bueno::~Bueno()
{
    //dtor
}

string Bueno::bajarDatos(string url){
    return "<Datos de la pagina (con calidad BUENA) de " + url + ">";
}
