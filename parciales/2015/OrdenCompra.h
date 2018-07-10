#include <string>
#include "Producto.h"
#include "Cliente.h"
#include "Pago.h"
#include "DataPago.h"
#include "ServicioMapa.h"

using namespace std;

class OrdenCompra{
	private:
		Cliente* cliente;
		ICollection* productos;
		Pago* pago;
		float total;
		string* ruta;
	public:
		void agregarProducto(Producto*);
		void calcularTotal();
		void generarPago(DataPago*);
		void setRutaDespacho();

		OrdenCompra(Cliente* cliente, Producto* producto); //POR EL DIAGRAMA, NO PUEDE HABER UNA INSTANCIA DE ESTA CLASE SIN UN PRODUCTO
		virtual ~OrdenCompra();
}