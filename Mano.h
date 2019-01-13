#pragma once
#ifndef MANO_H
#define MANO_H
#include"Mazo.h"
class Mano 
{
public:
	Mano ();
	void agregarCarta(Mazo*);
	void limpiar();
	int getPuntos();
	~Mano ();

private:
	Carta* cartas[];

};




#endif
