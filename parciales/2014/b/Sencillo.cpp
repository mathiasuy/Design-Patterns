double Sencillo::calcularPeso(){
	return peso;
};

double Sencillo::calcularVolumen(){
	return volumen;
};

Sencillo::Sencillo(double p,double v){
	this->peso = p;
	this->volumen = v;
};

Sencillo::~Sencillo(){};