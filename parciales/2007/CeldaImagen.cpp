CeldaImagen::CeldaImagen(int a,int b,bool c,Imagen* d):Celda(a,b,c),img(d){};

CeldaImagen::~CeldaImagen(){
	delete img;
};

Object* CeldaImagen::copiarEspecifico(int fila, int columna){
	Imagen* copy = Utils::copiarImagen(img);
	return new CeldaImagen(fila,columna,false,copy);
}