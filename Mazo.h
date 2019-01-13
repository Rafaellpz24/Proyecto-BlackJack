#pragma once
#ifndef MAZO_H
#define MAZO_H
#include"Carta.h"
class Mazo
{
public:
	Mazo();
	void inicializar();
	void barajar();
	Carta* tomarCarta();
	~Mazo();

private:
	Carta* carta[];

};
#endif


