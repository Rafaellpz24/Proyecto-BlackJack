#pragma once
#ifndef NODO_H
#define NODO_H
#include"JugadorGenerico.h"


class Nodo
{
public:
	Nodo();
	Nodo(JugadorGenerico*, Nodo*);
	void setSig(Nodo*);
	~Nodo();
	Nodo* GetSig();

private:
	JugadorGenerico * dato;
	Nodo * next;
};

#endif // NODO_H

