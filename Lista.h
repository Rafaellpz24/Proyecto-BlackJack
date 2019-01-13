#pragma once

#ifndef LISTA_H
#define LISTA_H
#include"Nodo.h"

class Lista
{
public:
	Lista();
   ~Lista();
   Nodo* getPrimero();
	void insertar(JugadorGenerico*);
	void Borrar(Nodo*);
	bool ListaVacia();

private:
	Nodo *primero;
	Nodo *actual;
};

#endif // LISTA_H