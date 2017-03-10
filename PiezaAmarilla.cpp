#include <PiezaAmarilla.h>

PiezaAmarilla::PiezaAmarilla():Pieza(14 , 0 , 'y'){
}

virtual void PiezaAmarilla::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[getx()][getY()] = getColor;
	}else if(tirada == 12){
		tablero[getx()][getY()] = getColor;
	}
}
virtual void PiezaAmarilla::ingresarZonaFinal(char** tablero){
	if(tablero[getX()][getY()]=="Y"){
		esZonaFinal();
	}
}
virtual void PiezaAmarilla::comer(char**){
	
}