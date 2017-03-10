#include "PiezaVerde.h"

PiezaVerde::PiezaVerde():Pieza(0 , 0 , 'v'){
}

virtual void PiezaVerde::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[getx()][getY()] = getColor;
	}else if(tirada == 12){
		tablero[getx()][getY()] = getColor;
	}
}
virtual void PiezaVerde::ingresarZonaFinal(char** tablero){
	if(tablero[getX()][getY()]=="V"){
		esZonaFinal();
	}
}
virtual void PiezaVerde::comer(char**){
	
}