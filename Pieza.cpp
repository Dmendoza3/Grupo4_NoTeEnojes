//Pieza
#include "Pieza.h"
Pieza::Pieza(int px ,int py , char pcolor){	
	x = px;
	y = py;
	color = pcolor;
	zonaFinal = false;
	
}

/*Pieza::~Pieza() {

}*/

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
	if(this->zonaFinal){
		if(this->getColor() == 'a'){
			this->setY(pos - this->getY());								
		}else if(this->getColor() == 'r'){	
			this->setX(pos + this->getX());	
		}else if(this->getColor() == 'y'){
			this->setY(pos - this->getY());
		}else if(this->getColor() == 'v'){
			this->setX(pos + this->getX());
		}	
	}else{
		if(this->getX()==0 && this->getY()<14){
		//Si el valor es mayor
			if(pos+this->getY()>=14){
				int sobra = pos-14;
			//Borra y cambia
				tablero[this->getX()][this->getY()]= 'w';
				this->setY(14);
				tablero[this->getX()][this->getY()] = this->getColor();
				if(sobra<0){
					this->mover(-sobra , tablero);
				}else{
					this->mover(sobra , tablero);
				}

			}else{
				tablero[this->getX()][this->getY()]= 'w';
				this->setY(pos+this->getY());
				tablero[this->getX()][this->getY()] = this->getColor();
			}

	//Si esta en la linea lateral derecha	
		}else if(this->getY()==14 && this->getX()<14 ){
		//cout<<"entro Validacion"<<endl;

			if(pos+this->getX()>=14){
		//	cout<<"entro Recursiva"<<endl;
				int sobra = pos-14;
			//Borra y cambia
				tablero[this->getX()][this->getY()]= 'w';
				this->setX(14);
				tablero[this->getX()][this->getY()] = this->getColor();
				if(sobra<0){
					this->mover(-sobra , tablero);
				}else{
					this->mover(sobra , tablero);
				}

			}else{
				tablero[this->getX()][this->getY()]= 'w';
				this->setX(pos+this->getX());
				tablero[this->getX()][this->getY()] = this->getColor();
			}
	//Si esta en la liena inferior	
		}else if(this->getX()==14 && this->getY()> 0){
		//Si el valor es mayor
			if(this->getY()-pos<=0){
				int sobra = pos-14;
			//Borra y cambia
				tablero[this->getX()][this->getY()]= 'w';
				this->setY(0);
				tablero[this->getX()][this->getY()] = this->getColor();
				if(sobra<0){
					this->mover(-sobra , tablero);
				}else{
					this->mover(sobra , tablero);
				}

			}else{
				tablero[this->getX()][this->getY()]= 'w';
				this->setY(this->getY()-pos);
				tablero[this->getX()][this->getY()] = this->getColor();
			}

	//Si esta en la linea lateral izquierda	
		}else if(this->getY()==0 && this->getX()>0){
		//cout<<"entro Validacion"<<endl;

			if(this->getX()-pos<=0){
		//	cout<<"entro Recursiva"<<endl;
				int sobra = pos-14;
			//Borra y cambia
				tablero[this->getX()][this->getY()]= 'w';
				this->setX(0);
				tablero[this->getX()][this->getY()] = this->getColor();
				if(sobra<0){
					this->mover(-sobra , tablero);
				}else{
					this->mover(sobra , tablero);
				}

			}else{
				tablero[this->getX()][this->getY()]= 'w';
				this->setX(this->getX()-pos);
				tablero[this->getX()][this->getY()] = this->getColor();
			}
		}
	}
}

bool Pieza::esZonaFinal(){
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

