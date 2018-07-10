Cancion::Cancion(int id, string nombre, string autor, string album, string bit_rate, list<Byte> contenido){
	this->id = id;
	this->nombre = nombre;
	this->autor = autor;
	this->album = album;
	this->bit_rate = bit_rate;
	this->contenido = contenido;
}

Cancion::~Cancion(){};
