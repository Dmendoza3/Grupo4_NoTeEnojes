//PiezaAzul
#include "PiezaAzul.h"

PiezaAzul::PiezaAzul(char** tablero):Pieza(14 , 14 , 'a'){
	this->ingresarTablero(tablero);
}

void PiezaAzul::ingresarTablero(char** tablero){
	tablero[14][14] = this->getColor();

}
void PiezaAzul::ingresarZonaFinal(char** tablero){
	if(tablero[this->getX()][this->getY()]=='A'){
		this->estaFinal();
	}
}
void PiezaAzul::comer(char**){
	
}

