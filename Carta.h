#pragma once
#ifndef CARTA_H
#define CARTA_H
#include<iostream>
using namespace std;
class Carta
{
public:
	Carta();
	int getValor();
	int getPalo();
	void voltear();
	~Carta();

private:
	int valor, palo;
	bool bocaAbajo;

};


#endif