#include "Navegador.h"
#include "NavegadorLiviano.h"
#include "NavegadorPesado.h"

using namespace std;

int main(){
    Navegador* nl = new NavegadorLiviano();
    Navegador* np = new NavegadorPesado();

    cout << "Navegador Liviano" << endl;
    nl->abrirPagina("www.fing.edu.uy");
    cout << "----" << endl;
    cout << "Navegador Pesado" << endl;
    np->abrirPagina("www.fing.edu.uy");
    cout << "----" << endl;

    return 1;
}
