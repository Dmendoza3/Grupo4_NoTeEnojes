#include "PiezaVerde.h"

PiezaVerde::PiezaVerde(char** tablero):Pieza(0 , 0 , 'v'){
	this->ingresarTablero(tablero);
}

void PiezaVerde::ingresarTablero(char** tablero){
	tablero[0][0] = this->getColor();
}

void PiezaVerde::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='V'){
		this->estaFinal();
	}
}

void PiezaVerde::comer(char**){
	
}