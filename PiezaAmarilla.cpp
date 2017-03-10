#include "PiezaAmarilla.h"

PiezaAmarilla::PiezaAmarilla():Pieza(14 , 0 , 'y'){
}

virtual void PiezaAmarilla::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[this->getx()][this->getY()] = this->getColor();
	}else if(tirada == 12){
		tablero[this->getx()][this->getY()] = this->getColor();
	}
}
virtual void PiezaAmarilla::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=="Y"){
		this->esZonaFinal();
	}
}
virtual void PiezaAmarilla::comer(char**){
	
}