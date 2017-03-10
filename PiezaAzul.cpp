//PiezaAzul
#include "PiezaAzul.h"

PiezaAzul::PiezaAzul():Pieza(14 , 14 , 'a'){
}

virtual void PiezaAzul::ingresarTablero(char** tablero, int tirada){
	if(tirada == 2){
		tablero[getx()][getY()] = getColor;
	}else if(tirada == 12){
		tablero[getx()][getY()] = getColor;
	}
}
virtual void PiezaAzul::ingresarZonaFinal(char**){
	
}
virtual void PiezaAzul::comer(char**){

}