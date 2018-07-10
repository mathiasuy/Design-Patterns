#include "Navegador.h"

Navegador::Navegador()
{
    this->respBD = new Bueno();
    ajustarModo();
}

void Navegador::setEstadoConexion(TipoEstado t){
    this->estado = t;
}

TipoEstado Navegador::estadoConexion(){
    return this->estado;
}

void Navegador::ajustarModo(){
    switch(this->estadoConexion()){
        case BUENO : {
                        delete this->respBD;
                        this->respBD = new Bueno();
            }break;
        case INTERMEDIO : {
                        delete this->respBD;
                        this->respBD = new Intermedio();
            }break;
        case MALO : {
                        delete this->respBD;
                        this->respBD = new Malo();
            }break;
    }
};

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
    return this->respBD->bajarDatos(url);
}
