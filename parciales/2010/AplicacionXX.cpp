ContenidoAplicacionXX* vistas[3];
ContenidoAplicacionXX* visible;

AplicacionXX::AplicacionXX(ContenidoAplicacionXX* vistas[3], ContenidoAplicacionXX* visible){
	idxActual = 0;
	NSActualizador::obtenerInstancia()->agregarAplicacion(this);
	this->visible = visible;
	this->vistas = vistas;
};

AplicacionXX::~AplicacionXX(){
	NSActualizador::obtenerInstancia()->quitarAplicacion(this);
	for (int i=0; i<3; i++)
		delete vistas[i];
};

void AplicacionXX::actualizarContenido(){
	NSManejadorConexion* cnx = NSManejadorConexion::abrirConexion();
	ContenidoAplicacionXX *nuevo = dynamic_cast<ContenidoAplicacionXX*>cnx->obtenerContenido(visible->obtenerURL());
	delete visible;
	visible = nuevo;
	vistas[idxActual] = nuevo;
};