ContenidoAplicacionXX::ContenidoAplicacionXX(string u, string c){
	this->url = u;
	contenido = c;
}

string ContenidoAplicacionXX::getContenido(){
	return contenido;
}

ContenidoAplicacionXX::~ContenidoAplicacionXX(){};

string ContenidoAplicacionXX::obtenerURL(){
	return this->url;
};