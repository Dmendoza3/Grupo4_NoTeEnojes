class Pieza
{
private:	
	int x;
	int y;
	char color;
	bool zonaFinal;
public:
	Pieza(int , int, char pcolor);
	
	void setX(int);
	void setY(int);
	void setColor(char);
	
	int getX();
	int getY();
	char getColor();
	bool esZonalFinal();
	void estaFinal(bool);

	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);

	void mover(int , char**);	
};