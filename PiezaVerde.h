#pragma  once
#include "Pieza.h"

class PiezaVerde:public Pieza
{
public:
	PiezaVerde(char**);
	
		
	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);	
};