CeldaTexto::CeldaTexto(int a,int b,bool c,string d):Celda(a,b,c),texto(d){};

CeldaTexto::~CeldaTexto(){};

Object* CeldaTexto::copiarEspecifico(int fila, int columna){
	return new CeldaTexto(fila,columna,false, nombre);
}