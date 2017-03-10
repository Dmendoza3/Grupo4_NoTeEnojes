#include <Pieza.h>
class PiezaRoja
{
public:
	PiezaRoja();
	~PiezaRoja();

	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
	
};