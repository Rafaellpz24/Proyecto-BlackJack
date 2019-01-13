#pragma once
#include"JugadorGenerico.h"
#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador :public JugadorGenerico
{
public:
	Jugador();
	~Jugador();
	Carta* pedirCarta();




private:
};


#endif