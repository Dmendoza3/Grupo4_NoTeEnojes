#pragma once
#include <iostream>

 using namespace std;

class Pieza{
private:	
	int x;
	int y;
	char color;
	bool zonaFinal;
public:
	Pieza(int , int, char );
	virtual ~Pieza();
	void setX(int);
	void setY(int);
	void setColor(char);
	
	int getX();
	int getY();
	char getColor();
	bool esZonaFinal();
	void estaFinal();

	virtual void ingresarTablero(char** ,int);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);

	void mover(int , char**);	
};