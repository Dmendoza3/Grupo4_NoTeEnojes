#pragma once 
#include "Pieza.h"
class PiezaAzul: public Pieza
{
public:
	PiezaAzul(char);
	

	virtual void ingresarTablero(char** int);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);

};