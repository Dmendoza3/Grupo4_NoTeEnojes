#include "PiezaAmarilla.h"

PiezaAmarilla::PiezaAmarilla(char** tablero):Pieza(14 , 0 , 'y' ){
	this->ingresarTablero(tablero)
}

virtual void PiezaAmarilla::ingresarTablero(char** tablero){
		tablero[14][0] = this->getColor();
}
	
virtual void PiezaAmarilla::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=="Y"){
		this->esZonaFinal();
	}
}
virtual void PiezaAmarilla::comer(char**){
	
}