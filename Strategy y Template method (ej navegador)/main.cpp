#include "Navegador.h"
#include "NavegadorLiviano.h"
#include "NavegadorPesado.h"
#include "TipoEstado.h"

using namespace std;

int main(){

    Navegador* nl = new NavegadorLiviano();
    TipoEstado tl = INTERMEDIO;
    nl->setEstadoConexion(tl);
    nl->ajustarModo(); //se tendría que ejecutar cada X tiempo segun la letra

    cout << "Navegador Liviano" << endl;
    nl->abrirPagina("www.fing.edu.uy");
    cout << "----" << endl;

    Navegador* np = new NavegadorPesado();
    TipoEstado tp = BUENO;
    np->setEstadoConexion(tp);
    np->ajustarModo(); //se tendría que ejecutar cada X tiempo segun la letra

    cout << "Navegador Pesado" << endl;
    np->abrirPagina("www.fing.edu.uy");
    cout << "----" << endl;

    return 1;
}
