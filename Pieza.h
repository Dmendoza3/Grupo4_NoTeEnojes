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
	void estaFinal();
	
	int getX();
	int getY();
	char getColor();
	bool esZonalFinal();

	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);

	void mover(int , char**);	
};