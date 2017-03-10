#pragma once
#include "Pieza.h"
 class PiezaAmarilla : public Pieza
 {
 public:
 	PiezaAmarilla(char**);
 	
 	
 	virtual void ingresarTablero(char** );
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
		
 };
