#include "PiezaRoja.h"

PiezaRoja::PiezaRoja(char** tablero):Pieza(0 , 14 , 'r'){
	this->ingresarTablero(tablero);
}

virtual void PiezaRoja::ingresarTablero(char** tablero){
	tablero[0][14] = this->getColor();
}
virtual void PiezaRoja::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='R'){
		this->esZonaFinal();
	}
}
virtual void PiezaRoja::comer(char**){
	
}
