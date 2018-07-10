	Celda::Celda(int a,int b,bool c):fila(a),columna(b),protegida(c){};

	Celda::~Celda(){};

	Object* Celda::copiar(){
		if (protegida){
			//llamada a tipo estático
			return Celda::copiarEspecifico(fila,columna);
		else{
			//llamada a tipo dinámico
			return copiarEspecifico(fila,columna);
		}
	};

	Object* Celda::copiarEspecifico(int fila, int columna, int protegida){
		return new Celda(fila,columna,true);
	}