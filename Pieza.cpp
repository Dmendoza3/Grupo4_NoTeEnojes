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

void Pieza::mover(int pos , char** tablero ){ 
	//Si esta en la linea superior
	cout<<"Posicion "<<pos<<endl;
	cout<<"entro"<<endl;	
	if(this->getX()==0 && this->getY()<14){
		cout<<"entro Validacion"<<endl;
		if(pos+this->getY()>=14){
			cout<<"entro Recursiva"<<endl;
			int sobra = pos-this->getY();
			//Borra y cambia
			tablero[this->getX()][this->getY()]= 'w';
			this->setY(14);
			tablero[this->getX()][this->getY()] = this->getColor();
			if(sobra<0){
				mover(-sobra , tablero);
			}else{
				mover(sobra , tablero);
			}

		}else{
			tablero[this->getX()][this->getY()]= 'w';
			this->setY(pos+this->getY());
			tablero[this->getX()][this->getY()] = this->getColor();
				cout<<"entro Normal"<<endl;
		}

	//Si esta en la linea lateral derecha	
	}else if(this->getY()==14 && this->getX()<14 ){
		//cout<<"entro Validacion"<<endl;
		
		if(pos+this->getX()>=14){
		//	cout<<"entro Recursiva"<<endl;
			int sobra = pos-this->getX();
			//Borra y cambia
			tablero[this->getX()][this->getY()]= 'w';
			this->setX(14);
			tablero[this->getX()][this->getY()] = this->getColor();
			if(sobra<0){
				mover(-sobra , tablero);
			}else{
				mover(sobra , tablero);
			}

		}else{
			tablero[this->getX()][this->getY()]= 'w';
			this->setY(pos+this->getX());
			tablero[this->getX()][this->getY()] = this->getColor();
			cout<<"entro Normal"<<endl;
		}
	//Si esta en la liena inferior	
	}else if(this->getX()==14 && this->getY()> 0){

	//Si esta en la linea lateral izquierda	
	}else if(this->getY()==0 && this->getX()>0){

	}
}

bool Pieza::esZonalFinal(){
	return zonaFinal;
}
void Pieza::estaFinal(){	
	
	zonaFinal = true;
}

void Pieza::ingresarTablero(char** ,int){

}

void Pieza::ingresarZonaFinal(char**){

}

void Pieza::comer(char**){

}

