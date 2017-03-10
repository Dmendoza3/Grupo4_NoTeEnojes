#pragma once
#include "Pieza.h"
 class PiezaAmarilla
 {
 public:
 	PiezaAmarilla();
 	~PiezaAmarilla();
 	
 	virtual void ingresarTablero(char** , int);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
		
 };