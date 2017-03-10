//PiezaAzul
#include "PiezaAzul.h"

PiezaAzul::PiezaAzul():Pieza(14 , 14 , 'a'){
}

virtual void PiezaAzul::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[this->getX()][this->getY()] = this->getColor();
	}else if(tirada == 12){
		tablero[this->getX()][this->getY()] = this->getColor();
	}
}
virtual void PiezaAzul::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='A'){
		this->esZonaFinal();
	}
}
virtual void PiezaAzul::comer(char**){
	
}

