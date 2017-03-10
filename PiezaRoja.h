#pragma once
#include "Pieza.h"
class PiezaRoja:Pieza
{
public:
	PiezaRoja(char**);
	~PiezaRoja();

	virtual void ingresarTablero(char** );
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
	
};