double Complejo::calcularPeso(){
	double sum = 0;
	for (set<Paquete*>::iterator i = componentes.begin(); i != componentes.end(); i++){
		sum += *i->calcularPeso();
	}
	return sum;
}

double Complejo::calcularVolumen(){
	return this->optimizador->volOptimo(this->componentes);
}

void Complejo::setOptVolumen(OptimizadorVolumen* o){
	this->optimizador = o;

}

Complejo::Complejo(OptimizadorVolumen* i, set<Paquete*> componentes){
	this->componentes = componentes;
	this->optimizador = i;
}

Complejo::~Complejo(){
	for (set<Paquete*>::iterator i = componentes.begin(); i!=componentes.end(); i++){
		Paquete* p = *i;
		componentes.erase(*i);
		delete p;
	}
	delete optimizador;
}