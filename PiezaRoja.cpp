#include "PiezaRoja.h"

PiezaRoja::PiezaRoja():Pieza(0 , 14 , 'r'){
}

virtual void PiezaRoja::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[this->getX()][this->getY()] = this->getColor();
	}else if(tirada == 12){
		tablero[this->getX()][this->getY()] = this->getColor();
	}
}
virtual void PiezaRoja::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='R'){
		this->esZonaFinal();
	}
}
virtual void PiezaRoja::comer(char**){
	
}
