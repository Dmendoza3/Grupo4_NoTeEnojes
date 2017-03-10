//Pieza
#include "Pieza.h"

Pieza::Pieza(int px ,int py , char pcolor){	
	x = px;
	y = py;
	color = pcolor;
	zonaFinal = false;
}

void Pieza::setX(int pX){
	x = pX;
}

void Pieza::setY(int pY){
	y = pY;
}

void Pieza::setColor(char pcolor){
	color = pcolor;
}

int Pieza::getX(){
	return x;
}

int Pieza::getY(){
	return y;
}

char Pieza::getColor(){
	return color;
}

void mover(int pos , char** tablero ){ 
	/*if(){

	}*/
}

bool esZonalFinal(){
	zonaFinal = true;
}
void estaFinal(bool){	
	return zonaFinal;
}


