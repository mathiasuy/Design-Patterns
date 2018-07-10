#include "Fijo.h"

Fijo::Fijo(int id, float precio):Producto(id){
	this->precioF = precio;
}

void Fijo::setPrecioItem(DataItemProd* dip){
	dip.setPrecio(this->precioF);
}