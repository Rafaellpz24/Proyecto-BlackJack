#pragma once
#ifndef JUGADORGENERICO_H
#define JUGADORGENERICO_H
#include"Mano.h"
#include<iostream>
using namespace std;

class JugadorGenerico
{
public:
	JugadorGenerico();
	~JugadorGenerico();
	virtual Carta* pedirCarta()=0;
	bool sePaso();


private:
	string nickname;
	Mano *mano;

};

#endif // !1
