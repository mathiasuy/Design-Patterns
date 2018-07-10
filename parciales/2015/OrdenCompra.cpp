		void OrdenCompra::agregarProducto(Producto* p){
			this->productos.add(p);
		};

		void OrdenCompra::calcularTotal(){
			for (IIterator* i = productos->getIterator(); i->hasCurrent(); i->next()){
				Producto* p = (Producto*)i->geCurrent();
				this->total += p->getCantidad() * p->getPrecio();
			}
			delete i;// libero el iterador
		};

		void OrdenCompra::generarPago(DataPago *dp){
			DataTarjeta* tarjeta = dynamic_cast<DataTarjeta*>(dp);
			if (tarjeta == NULL){
				DataContado* dc = dynamic_cast<DataContado*>(dp);
				this->pago = new Contado(dp->getMonto(),dp->getDescuento());
			}else{
				this->pago = new Tarjeta(tarjeta->getMonto(),tarjeta->getTarjeta());
			}
		};

		void OrdenCompra::setRutaDespacho(){
			this->ruta = ServicioMapa::getInstance()->obtenerRuta(this->cliente->getDirMapa());
		};

		OrdenCompra::OrdenCompra(Cliente* cliente, Producto* producto){
			this->productos = new List();
			this->productos->add(producto);
			this->cliente = cliente;
			this->total = 0;
			this->pago = NULL;
		};

		OrdenCompra::~OrdenCompra(){
			/// ESTO DEBERÍA ESTAR MAL PORQUE DESTRUYO LOCALMENTE MEMORIA QUE NO CREÉ LOCALMENTE
			for (IIterator* i = this->productos->beginIterator(); i->hasCurrent(); i->next()){
				Producto* p = (Producto*)i->getCurrent();
				productos->remove(p);
				delete p;
			} 
			delete this->pago;
		};