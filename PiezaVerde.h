#pragma  once
#include "Pieza.h"

class PiezaVerde:public Pieza
{
public:
	PiezaVerde();
	
		
	virtual void ingresarTablero(char** , int);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);	
};