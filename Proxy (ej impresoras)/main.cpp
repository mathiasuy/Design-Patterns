#include "IImpresora.h"
#include "Impresora.h"
#include "ImpresoraSinConexion.h"
#include "Dato.h"
#include "IDriver.h"
#include "DriverEpson.h"
#include "DriverHP.h"

int main(){

    IImpresora* impEpson = new Impresora();
    IDriver* driverEpson = new DriverEpson();
    dynamic_cast<Impresora*>(impEpson)->setDriver(driverEpson);
    dynamic_cast<Impresora*>(impEpson)->setPuerto(new Puerto(1));

    IImpresora* impOfflineEpson = new ImpresoraSinConexion();
    dynamic_cast<ImpresoraSinConexion*>(impOfflineEpson)->setImpresora(impEpson);

    Dato* d3 = new Dato("Dato3 Epson");
    Dato* d4 = new Dato("Dato4 Epson");
    impOfflineEpson->imprimir(d3);
    impOfflineEpson->imprimir(d4);

    IImpresora* impHP = new Impresora();
    IDriver* driverHP = new DriverHP();
    dynamic_cast<Impresora*>(impHP)->setDriver(driverHP);
    dynamic_cast<Impresora*>(impHP)->setPuerto(new Puerto(2));

    IImpresora* impOfflineHp = new ImpresoraSinConexion();
    dynamic_cast<ImpresoraSinConexion*>(impOfflineHp)->setImpresora(impHP);

    Dato* d1 = new Dato("Dato1 HP");
    Dato* d2 = new Dato("Dato2 HP");
    impOfflineHp->imprimir(d1);
    impOfflineHp->imprimir(d2);

    return 1;
}
