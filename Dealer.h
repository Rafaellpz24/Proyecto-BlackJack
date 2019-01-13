#pragma once
#include"JugadorGenerico.h"
#ifndef DEALER_H
#define DEALER_H
class Dealer :public JugadorGenerico
{
public:
	Dealer();
	~Dealer();
	Carta* pedirCarta();
	void volteaSegunda();



private:


};
#endif
