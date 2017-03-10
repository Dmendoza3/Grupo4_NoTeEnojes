#pragma once
#include "Pieza.h"
class PiezaRoja:Pieza
{
public:
	PiezaRoja();
	~PiezaRoja();

	virtual void ingresarTablero(char** , int);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
	
};