#include <Pieza.h>
class PiezaAzul: public Pieza
{
public:
	PiezaAzul(char);
	

	virtual void ingresarTablero(int**);
	virtual void ingresarZonaFinal(int**);
	virtual void comer(int**);

};