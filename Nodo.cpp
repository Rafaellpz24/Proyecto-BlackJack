#include "Nodo.h"

Nodo::Nodo() {
}
Nodo::Nodo(JugadorGenerico* d, Nodo* s)
{
	dato = d; next = s;
}
void Nodo::setSig(Nodo* s)
{
	next = s;
}
Nodo* Nodo::GetSig() { return next; }


Nodo::~Nodo()
{
	delete dato;
}
