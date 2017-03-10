#include "PiezaVerde.h"

PiezaVerde::PiezaVerde():Pieza(0 , 0 , 'v'){
	
}

void PiezaVerde::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[this->getX()][this->getY()] = this->getColor();
	}else if(tirada == 12){
		tablero[this->getX()][this->getY()] = this->getColor();
	}
}

void PiezaVerde::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='V'){
		this->estaFinal();
	}
}

void PiezaVerde::comer(char**){
	
}