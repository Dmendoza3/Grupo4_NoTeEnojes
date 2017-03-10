#include "PiezaRoja.h"

PiezaRoja::PiezaRoja(char** tablero):Pieza(0 , 14 , 'r'){
	this->ingresarTablero(tablero);
}

void PiezaRoja::ingresarTablero(char** tablero){
	tablero[0][14] = this->getColor();
}
void PiezaRoja::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='R'){
		this->estaFinal();
	}
}
void PiezaRoja::comer(char**){
	
}
