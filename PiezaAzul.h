#pragma once 
#include "Pieza.h"
class PiezaAzul: public Pieza
{
public:
	PiezaAzul(char**);
	~PiezaAzul(){}

	virtual void ingresarTablero(char** );
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);

};
