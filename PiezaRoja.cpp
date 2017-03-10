#include "PiezaRoja.h"

PiezaRoja::PiezaRoja():Pieza(0 , 14 , 'r'){
}

virtual void PiezaRoja::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[getx()][getY()] = getColor;
	}else if(tirada == 12){
		tablero[getx()][getY()] = getColor;
	}
}
virtual void PiezaRoja::ingresarZonaFinal(char** tablero){
	if(tablero[getX()][getY()]=="R"){
		esZonaFinal();
	}
}
virtual void PiezaRoja::comer(char**){
	
}