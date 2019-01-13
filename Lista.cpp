#include"Lista.h"
Lista::Lista()
{

}
Lista::~Lista()
{
	while (primero) {
		actual = primero;
		primero = primero->GetSig();
		delete actual;
	}

}
Nodo* Lista::getPrimero()
{
	return primero;
}
void Lista::insertar(JugadorGenerico *d)
{
	actual = new Nodo(d, NULL);
	if (primero == NULL)
	{
		primero = actual;
	}
	else
	{
		actual->setSig(primero);
		primero = actual;
	}
}
void Lista::Borrar(Nodo* n)
{

}
bool Lista::ListaVacia()
{
	if (primero == NULL) return true;
	else return false;
}