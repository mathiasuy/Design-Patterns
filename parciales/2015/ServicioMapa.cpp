ServicioMapa* ServicioMapa::instance = NULL;

ServicioMapa* ServicioMapa::getInstance(){
	if (ServicioMapa::instance == NULL){
		ServicioMapa::instance = new ServicioMapa();
	}
	return ServicioMapa::instance;
}

ServicioMapa::ServicioMapa(){}
ServicioMapa::~ServicioMapa(){}